#include <iostream>

using namespace std;

int main(void)
{
	int n, a, b, c;

	cin>>n;
	a = n % 10;
	b = n / 10 % 10;
	c = n / 100;
	cout<<a<<" "<<b<<" "<<c<<endl;

	return 0;
}
