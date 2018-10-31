#include <iostream>

using namespace std;

int isPrime(int num);

int main(void)
{
	int c = 1;
	int num = 2;
	while (c < 10001)
	{
		num++;
		if(isPrime(num))
		{
			c++;
		}
				
	}
	cout << num;
	

}

int isPrime(int num)
{
	for (int i = 2; i < num; i++ )
	{
		if (num % i == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}
