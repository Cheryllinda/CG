#include <iostream>
#include <cmath>

using namespace std;

int main (void)
{
	float a, b, c, C, S, p;
	cout<<"Enter 3 sides of the triangle: ";
	cin>>a>>b>>c;

	if (a + b > c && b + c > a && a + c > b)
	{
		p = (a + b + c)/2;
		S = sqrt(p*(p - a)*(p - b)*(p - c));	
		C = a + b + c;
		printf("area = %.2f;perimeter=%.2f\n", S, C);
	}

	else
	{
		cout<<"These sides do not correspond to a valid triangle\n";
	}

	return 0;
}
