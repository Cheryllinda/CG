#include <iostream>

using namespace std;

int main (void)
{
	int a, b, c;
	double sum, avg;

	cin>>a>>b>>c;
	sum = a + b + c;
	cout<<sum;
	avg = sum / 3;
	printf(" %.2f\n", avg);

	return 0;
}
