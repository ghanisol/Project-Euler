#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int b = 3;
	double c = 0;
	unsigned int product;
	double sum;
	
	while (true)
	{
		for (int a = 2; a < b; a++)		
		{
			c = sqrt((a*a) + (b*b));
			sum = a + b + c;
			
			if (sum == 1000)
			{
				product = a*b*c;
				cout << product;
				return 0;
			}
		}
		b++;
	}
}
