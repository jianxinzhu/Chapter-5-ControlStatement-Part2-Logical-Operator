/*  name: jianxin zhu
    date: july/10/2020
  
*/

#include<iostream>

using namespace std;


int main()
{
	int number = 0;
	int smallest =0;

	cout << "Enter serveral integers, find the smallest one: (-1 to exit)" << endl;
	cout << "Enter integer:";	
	cin >> number;
	smallest = number;
	
	while (number != -1)
	{


		if (number < smallest)
		{
			smallest = number;
		}

		cout << "Enter integer:";
		cin >> number;
	}

	cout << "The smallest number is: " << smallest << endl;

}
