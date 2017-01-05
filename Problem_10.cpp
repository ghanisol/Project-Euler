#include <iostream>

using namespace std;

int main()
{
	const unsigned int MAX = 2000000;
	bool prime[MAX] = {};
	fill_n(prime, MAX, true);
	
	prime[0] = false;
	prime[1] = false;
	
	long long sum = 0;
	
	// Sieve of Eratosthenes
	for (long i = 2; i < MAX; i++)
	{
		if (prime[i] == true)
		{
			sum = sum + i;
			for (long j = i*2; j < MAX; j = j+i)
			{
				prime[j] = false;
			}
		}
	}
	
	cout << sum;		
}
