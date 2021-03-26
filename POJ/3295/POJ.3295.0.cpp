#include <cstdio>
#include <cstring>
using namespace std;
const int SIZE = 100;
bool stack[SIZE];
char wff[SIZE];
int main()
{
	for (scanf("%s", &wff); wff[0] != '0'; scanf("%s", &wff))
	{
		for (int mask = 0; mask < 32; ++mask) // Enumerate every possible group of (p, q, r, s, t)
		{
			int top = 0;
			for (int i = strlen(wff) - 1; i >= 0; --i) // Do not forget to scan from end to start since it's a prefix expression
				switch (wff[i])
				{
				case 'K':
					--top;
					stack[top - 1] &= stack[top]; // Calculate the answer and add it back to the stack
					break;
				case 'A':
					--top;
					stack[top - 1] |= stack[top];
					break;
				case 'N':
					stack[top - 1] = !stack[top - 1];
					break;
				case 'C':
					--top;
					stack[top - 1] |= !stack[top];
					break;
				case 'E':
					--top;
					stack[top - 1] = stack[top] == stack[top - 1];
					break;
				default:
					stack[top++] = (mask >> (wff[i] - 'p')) % 2; // Add number into the stack
					break;
				}
			if (stack[0] == 0)
				break;
		}
		printf(stack[0] != 0 ? "tautology\n" : "not\n");
	}
	return 0;
}
