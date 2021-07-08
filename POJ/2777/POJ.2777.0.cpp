#include <cstdio>
using namespace std;
const int SIZE = 1e5 + 1;
struct segment_tree
{
	int left[4 * SIZE], right[4 * SIZE], colour[4 * SIZE], lazytag[4 * SIZE]; // A typical segment tree has at most 4 times of nodes than the original sequence
	void init(int p, int l, int r) // Build and initialize the segment tree
	{
		left[p] = l;
		right[p] = r;
		colour[p] = 1 << 1; // At the beginning, the board was painted in color 1
		lazytag[p] = 0;
		if (l == r)
			return;
		init(2 * p + 1, l, (l + r) / 2);
		init(2 * p + 2, (l + r) / 2 + 1, r);
	}
	void change(int p, int l, int r, int c) // Set the colour of a segment
	{
		if (l == left[p] && r == right[p]) // If the range is covered, simply set the lazytag so that at most two branches of the whole tree are passed down (that's why the operation is O(log(n)))
		{
			colour[p] = 1 << c;
			if (l != r)
				lazytag[p] = c;
			return;
		}
		int mid = (left[p] + right[p]) / 2;
		if (lazytag[p] != 0) // Pass down the lazytag
		{
			change(2 * p + 1, left[p], mid, lazytag[p]);
			change(2 * p + 2, mid + 1, right[p], lazytag[p]);
			lazytag[p] = 0;
		}
		if (r <= mid) // Only the left child is modified
			change(2 * p + 1, l, r, c);
		if (l > mid) // Only the right child is modified
			change(2 * p + 2, l, r, c);
		if (l <= mid && r > mid) // Both children are modified
		{
			change(2 * p + 1, l, mid, c);
			change(2 * p + 2, mid + 1, r, c);
		}
		colour[p] = colour[2 * p + 1] | colour[2 * p + 2]; // Update the colour set
	}
	int query(int p, int l, int r) // Query the colour set of a segment
	{
		if (lazytag[p] != 0 || l == left[p] && r == right[p]) // Lazytag exists means the range is in the same colour, so we don't need to go deeper
			return colour[p];
		int mid = (left[p] + right[p]) / 2;
		if (r <= mid) // Only the left child is covered
			return query(2 * p + 1, l, r);
		if (l > mid) // Only the right child is covered
			return query(2 * p + 2, l, r);
		if (l <= mid && r > mid) // Both children are covered
			return query(2 * p + 1, l, mid) | query(2 * p + 2, mid + 1, r);
	}
};
segment_tree board;
int main()
{
	int l, t, o;
	scanf("%d%d%d", &l, &t, &o);
	board.init(0, 1, l); // Build and init the segment tree
	for (int i = 0; i < o; ++i)
	{
		char s = getchar();
		while (s != 'C' && s != 'P')
			s = getchar();
		if (s == 'C') // The setting operation
		{
			int a, b, c;
			scanf("%d%d%d", &a, &b, &c);
			board.change(0, a, b, c);
		}
		if (s == 'P') // The query operation
		{
			int a, b;
			scanf("%d%d", &a, &b);
			int ans = 0;
			for (int colourSet = board.query(0, a, b); colourSet != 0; colourSet >>= 1) // Count the number of colours
				ans += colourSet & 1;
			printf("%d\n", ans);
		}
	}
	return 0;
}
