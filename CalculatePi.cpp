/*   name: jianxin zhu
     date: july/10/2020
 */
 
 #include<iostream>

using namespace std;

int main()
{
	double Pi = 4;
	double sum = 0.0;
	int sign = 4;

	for (int i = 1; i <= 100; i++)
	{
		sum = sum + sign / (2.0 * i + 1.0);
		sign = sign * (-1);
	}

	cout << "The Pi is: " << (Pi - sum) << endl;
}
