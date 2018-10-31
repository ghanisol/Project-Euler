#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double num = 600851475143;
	int i = 2;
	
	while(i < num)
	{
		if (fmod(num, i) == 0)
		{
			num = num / i;	
		}
		else
		{
			i++;
		}
				
	}
	
	cout << i;
	
}
