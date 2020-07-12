/*   name: jianxin zhu
     date: july/10/2020
 */
 
#include<iostream>

using namespace std;

int main()
{
	int sign = 4;
	double Pi = 4.0;

	for (int i = 1; i <= 100; i++)
	{
		Pi = Pi - (sign) / (2.0 * i + 1.0);
		sign = sign * (-1);
	}

	cout << "The Pi is: " << Pi << endl;

}
