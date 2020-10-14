#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	
	cout << "Enter Number: " << endl;
	cin >> a >> b >> c;
	
	if (a >= b && a >= c)
	{
		cout << "\n\nThe largest number is " << a;
	} 
	else if (b >= a && b >= c)
	{
		cout << "\n\nThe largest number is " << b;
	} 
	else if (c >= a && c >= b)
	{
		cout << "\n\nThe largest number is " << c; 
	} 
	else
	cout << "\n\nERROR...";
	return 0;
}
