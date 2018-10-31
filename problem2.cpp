#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n1 = 1;
	int n2 = 2;
	int n3 = 0;
	int sum = 2;
	
	while (n3 < 4000000)
	{
			
		n3 = n2 + n1;
		n1 = n2;
		n2 = n3;
		
		if (n3 % 2 == 0)
		{
			sum = sum + n3;
		}	
		
		
		cout << sum << endl;
	}
	
	cout << "Sum : " << sum << endl;
	
}
