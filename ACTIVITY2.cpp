#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[20], sum=0.0, ave;

    cout << "Enter the numbers of data: ";
    cin >> n;

    if (n > 20 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 20)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }
	else
	{
		 for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    ave = sum / n;
    cout << "Average = " << ave;

	}
   
    return 0;
}
