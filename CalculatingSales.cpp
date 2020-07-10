/*  name: jianxin zhu
    date: july/10/2020
 */
 
 #include<iostream>
#include<iomanip>

using namespace std;



int main()
{
	unsigned int aCount = 0;
	unsigned int bCount = 0;
	unsigned int cCount = 0;
	unsigned int dCount = 0;
	unsigned int eCount = 0;

	int number = 0;
	double total = 0;

	cout << "Enter the product number:";

	while (cin >> number)
	{
		cout << "Enter the product number:";

		switch (number)
		{
		case 1:
			total = total + 2.98;
			aCount++;
			break;
		case 2:
			total = total + 4.50;
			bCount++;
			break;
		case 3:
			total = total + 9.98;
			cCount++;
			break;
		case 4:
			total = total + 4.49;
			dCount++;
			break;
		case 5:
			total = total + 6.87;
			eCount++;
			break;
		default:
			cout << "Enter product number between 1 to 5";
		}
	}

	cout << "Total Retail Price: " << total
		<< "\nProduct 1 sold: " << aCount
		<< "\nProduct 2 sold: " << bCount
		<< "\nProduct 3 sold: " << cCount
		<< "\nProduct 4 sold: " << dCount
		<< "\nProduct 5 sold: " << eCount << endl;
}
