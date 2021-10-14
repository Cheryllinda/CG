#include <iostream>

using namespace std;

int main(void)
{
	double x,y;
	scanf("(%lf,%lf)", &x, &y);
	if (x > 0 && y > 0)
	{
		printf("Please input coordinates of a point (x,y):\n");
		printf("This point is in QI.\n");
	}
	if (x < 0 && y > 0)
	{
		printf("Please input coordinates of a point (x,y):\n");
		printf("This point is in QII.\n");
	}

	if (x < 0 && y < 0)
	{
		printf("Please input coordinates of a point (x,y):\n");
		printf("This point is in QIII.\n");
	}

	if (x > 0 && y < 0)
	{
		printf("Please input coordinates of a point (x,y):\n");
		printf("This point is in QIV.\n");
	}

	if (x == 0 && y == 0)
	{
		printf("Please input coordinates of a point (x,y):\n");
		printf("This point is the origin.\n");
	}

	if (x == 0 && y != 0)
	{
		printf("Please input coordinates of a point (x,y):\n");
		printf("This point is on the y-axis.\n");
	}

	if (y == 0 && x != 0)
	{
		printf("Please input coordinates of a point (x,y):\n");
		printf("This point is on the x-axis.\n");
	}

	return 0;
}
