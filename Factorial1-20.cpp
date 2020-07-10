/*  name: jianxin zhu
    date: july/10/2020
 */
 
 
 #include<iostream>
#include<iomanip>

using namespace std;


int main()
{
	long long result = 0;

	cout << "The Fctorial between 1 to 20:" << endl;
	cout << endl;
	cout << setw(10) << "n!" << setw(20) << "result" << endl;

	for (unsigned int i = 20; i >= 1; i--)
	{
		result = i;
		for (unsigned int j = i - 1; j >= 1; j--)
		{
			result = result * j;
		}

		cout << setw(10)<< i << setw(20) << result << endl;
	}

}
