#include <iostream>

using namespace std;

int main(void)
{	
	int a, b, n, k;
	char c;
	b = 0;
	n = 9;
	k = 1;

	while (k)
	{
		while (1)
		{
			cin>>a;

			if (a > n)
			{
				cout<<"Too big.\nTry again:";
				b++;
			}

			if (a < n)
			{
				cout<<"Too small.\nTry again:";
				b++;
			}
			
			if (a == n)
			{
				b++;

				if (b == 1)
				{
					cout<<"Bingo!\n";
					break;
				}

				if (b > 1 && b <= 3)
				{
					cout<<"Lucky You!\n";
					break;
				}

				if (b > 3 && b <= 6)
				{
					cout<<"Good Guess!\n";
					break;
				}

				if (b > 6)
				{
					cout<<"Game Over\n";
					break;
				}
			}
		}

		cout<<"Do you wanna play again? If yes, press Y or y. Otherwise press N or n.\n";
		cin>>c;

		if (c == 'N' || c == 'n')
		{
			k = 0;
			break;
		}

	}
	return 0;
}
