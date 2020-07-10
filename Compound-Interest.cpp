/*  name: jianxin zhu
    date: july/10/2020
 */
 
 
 #include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;


int main()
{
	cout << fixed << setprecision(2);

	double principal = 1000.00;

	for (int rate = 5; rate<=10; rate++)
	{
		cout << "Initial principal: " << principal << endl;
		cout << "      Interest rate:" << static_cast<double>(rate) / 100 << endl;

		cout << "Year" << setw(20) << "Amount on deposit" << endl;

		for (unsigned int year = 1; year <= 10; year++)
		{
			double amount = principal * pow(1.0 + static_cast<double>(rate)/100, year);


			cout << setw(4) << year << setw(20) << amount << endl;
		}

		cout << "------------------------------------" << endl;
	}

}
