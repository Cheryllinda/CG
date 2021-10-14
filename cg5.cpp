#include <iostream>

using namespace std;

int main(void)
{
	int n, what;

	cout<<"[1] apples\n";
	cout<<"[2] pears\n";
	cout<<"[3] oranges\n";
	cout<<"[4] grapes\n";
	cout<<"[0] exit\n";

	for (n = 1; n <= 5; n++)
	{
		cout<<"Enter choice: ";
		cin>>what;

		if (what == 1)
		{
			cout<<"[1]apples price=3.0\n";
		}

		else if (what == 2)
		{
			cout<<"[2]pears price=2.5\n";
		}

		else if (what == 3)
		{
			cout<<"[3]oranges price=4.10\n";
		}

		else if (what == 4)
		{
			cout<<"[4]grapes price=10.2\n";
		}

		else if (what == 0)
		{
			break;
		}

		else
		{
			cout<<"other price=0.0\n";
		}
	}

	cout<<"Thanks\n"<<endl;

	return 0;
}
