#include <iostream>

using namespace std;

int isPalindrome(int num);

int main()
{
	int num(0), max = 0;
	
	for (int x1 = 100; x1 <= 999; x1++)
	{
		for (int x2 = 100; x2 <= 999; x2++)
		{
			num = x1 * x2;
			if (isPalindrome(num))
			{	
				if (num > max)
				{
					max = num;
				}
			}
		}	
	}
	
	cout << "The largest possible palindrome is : " << max;
}

int isPalindrome(int num)
{
	int reverse = 0, temp = num;
	
	while (temp != 0)
	{
		reverse = (reverse * 10) + (temp % 10);
		temp /= 10;
	}
	
	if (reverse == num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

