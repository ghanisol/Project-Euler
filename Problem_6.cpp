#include <iostream>

using namespace std;

int main()
{
	int sum_of_squares = 0, sum = 0, square_of_sum, diff = 0;
	
	for (int i = 1; i <= 100; i++)
	{
		sum_of_squares = sum_of_squares + (i*i);
		sum = sum + i;
	}
	
	square_of_sum = sum * sum;
	diff = square_of_sum - sum_of_squares;
	
	cout << diff << endl;
}
