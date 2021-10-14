#include <iostream>

using namespace std;

int main(void)
{
	double salary, tax, rate, deduction;

	cout<<"Enter the salary: ";
	cin>>salary;

	if (salary <= 3500)
	{
		rate = 0;
		deduction = 0;
		tax = 0;
	}
	
	if (salary > 3500 && salary <= 5000)
	{
		rate = 0.03;
		deduction = 0;
		tax = rate * ( salary - 3500 ) - deduction;
	}

	if (salary > 5000 && salary <= 8000)
	{
		rate = 0.1;
		deduction =105;
		tax = rate * ( salary - 3500 ) - deduction;
	}

	if (salary > 8000 && salary <= 12500)
	{
		rate = 0.2;
		deduction = 555;
		tax = rate * ( salary - 3500 ) - deduction;
	}

	if (salary > 12500 && salary <= 38500)
	{
		rate = 0.25;
		deduction =1005;
		tax = rate * ( salary - 3500 ) - deduction;
	}

	if (salary > 38500 && salary <= 58500)
	{
		rate = 0.3;
		deduction = 2755;
		tax = rate * ( salary - 3500 ) - deduction;
	}

	if (salary > 58500 && salary <= 83500)
	{
		rate = 0.35;
		deduction = 5505;
		tax = rate * ( salary - 3500 ) - deduction;
	}

	if (salary > 83500)
	{
		rate = 0.45;
		deduction = 13505;
		tax = rate * ( salary - 3500 ) - deduction;
	}

	printf("tax=%.2lf\n", tax);

	return 0;
}
