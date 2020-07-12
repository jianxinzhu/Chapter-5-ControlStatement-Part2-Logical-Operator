/*  name: jianxin zhu
    date: july/11/2020
*/

#include<iostream>

using namespace std;

int main()
{
	char pound = '#';
	char star = '*';
	char space = ' ';

	int index = 10;
	int half = index / 2;

	for (int i = 1; i <= 10; i++)
	{

		
		
		for (int j = 1; j <= 10; j++)
		{
			
		
			if (i == 1 || i == 10)
			{
				cout << pound;

			}
			else if ( i>half )
			{
				if (j == 1 || j == 10)
				{
					cout << pound;
				}
				else
				{
					cout << ((j <= i && j >= index) ? star : space);
				}
			}
			else 
			{
	
				if (j == 1 || j == 10)
				{
					cout << pound;
				}
				else
				{
					cout << ((j >= i&& j <= index) ? star : space);
				}
			}		

	    }
		index--;
		
		cout << endl;
	}

}
