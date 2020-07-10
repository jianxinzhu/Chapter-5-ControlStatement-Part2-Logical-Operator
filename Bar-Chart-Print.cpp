/*  name: jianxin zhu
    date: july/10/2020
*/

#include<iostream>

using namespace std;

void displayBar(int number)
{
	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= number; j++)
		{
			cout << number;
		}
		cout << endl;
	}
}

int main()
{
	int number = 0;
	int count = 0;



	while (count != 5)
	{
		cout << "Enter a number and display that:";
		cin >> number;

		displayBar(number);
		count++;


	}
}
