#include <iostream>

using namespace std;

int main(void)
{
	int age, status;

	cout<<"Please input age:\n";
	cin>>age;
	if (age > 59)
	{
		cout<<"Please input status:";
		cin>>status;
		if (status == 1)
		{
			cout<<"Working senior\n";
		}

		if (status == 0)
		{
			cout<<"Retired senior\n";
		}

	}
	else
	{
		if(age < 20)
		{
			if (age > 12)
			{
				cout<<"Teen\n";
			}
			else
			{
				cout<<"Child\n";
			}
		}

		else
		{
			cout<<"Adult\n";
		}
	}

	return 0;
}
