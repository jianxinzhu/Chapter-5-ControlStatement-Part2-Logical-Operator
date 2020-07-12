/*   name: jianxin zhu
     date: july/11/2020
 */
 
 
 #include<iostream>

using namespace std;

int main()
{
	char pound = '#';
	char star = '*';
	char space = ' ';

	int number, index, half;
	cout << "Enter the odd number between 1 to 29: ";
	cin >> number;

	if ((number>=1&&number<=29)&&(number%2==1))
	{
		index = number;
		half = index / 2;
	}
	else
	{
		cout << "You did not enter a odd number/number is out of range" << endl;
		return 0;
	}

	for (int i = 1; i <= number; i++)
	{

		
		
		for (int j = 1; j <= number; j++)
		{
			
		
			if (i == 1 || i == number)
			{
				cout << pound;

			}
			else if ( i>half )
			{
				if (j == 1 || j == number)
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
	
				if (j == 1 || j == number)
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
