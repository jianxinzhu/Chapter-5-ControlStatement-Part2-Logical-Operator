/*  name: jianxin zhu
    date: july/10/2020
 */
 
 #include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	cout << setw(4) << "side1: " << setw(4) << "side2: " << setw(4) << "Hypotenuse:"<<endl;
	for (int i = 1; i <= 100; i++)
	{
		int side1 = pow(i, 2);
		for (int j = 1; j <= 100; j++)
		{
			int side2 = pow(j, 2);
			for (int k = 1; k <= 100; k++)
			{
				int hyposuse = pow(k, 2);

				if ((side1 + side2) == hyposuse)
				{
					cout << setw(5) << i << setw(7) << j << setw(10) << k <<endl;
				}
			}
		}
		
		
	}
}


