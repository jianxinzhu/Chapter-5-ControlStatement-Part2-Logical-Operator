/*  name: jianxin zhu
    date: july/10/2020
*/

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;


int main()
{
	char star = '*';
	char space = ' ';

	for (unsigned int i =1; i<=10; i++)
	{
		for (unsigned int j=1; j<=10;j++)
		{
			cout << ((i >= j) ? star : space);
		}
		cout << endl;
	}

	cout << "--------------"<<endl;

	for (unsigned int i = 10; i >= 1; i--)
	{
		for (unsigned int j = 1; j <= 10; j++)
		{
			cout << ((i >= j) ? star : space);
		}
		cout << endl;
	}

	cout << "--------------" << endl;

	for (unsigned int i = 1; i <= 10; i++)
	{
		for (unsigned int j = 1; j <= 10; j++)
		{
			cout << ((j>=i) ? star : space);
		}
		cout << endl;
	}
	cout << "--------------" << endl;

	for (unsigned int i = 10; i >= 1; i--)
	{
		for (unsigned int j = 1; j <= 10; j++)
		{
			cout << ((i <= j) ? star : space);
		}
		cout << endl;
	}
}
