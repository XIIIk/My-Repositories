#include <iostream>
using namespace std;

int main()
{
	int n, i;
	
	cout << "Enter a number from 1 to 10: ";
	cin >> n;
	
	cout << endl << "The Multiplication Table for " << n << " is as follows: " << endl;
	for(i = 1; i <= 10; i++)
	{
		cout <<  n << "*" << i << "=" << n * i << endl;
	}
	
	return 0;
}
