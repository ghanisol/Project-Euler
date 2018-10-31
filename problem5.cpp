#include <iostream>

using namespace std;

int main()
{
	int isDivisible = 0, num = 1;
	
	while (isDivisible != 1)
	{
		isDivisible = 1;
		num++;
		for (int i = 1; i <= 20; i++)
		{
			if (num % i != 0)
			{
				isDivisible = 0;
				break;
			}
		}
		
	}
	cout << num;
}
