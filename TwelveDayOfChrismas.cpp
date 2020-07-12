/*  name: jianxin zhu
    date: july/11/2020
 */
 
 #include<iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 12; i++)
	{
		int number = i;
		switch (i)
		{
		case 1:
			cout << "On the first day of Christmas my true love sent to me " << endl;
			break;
		case 2:
			cout << "On the second day of Christmas my true love sent to me " << endl;
			break;
		case 3:
			cout << "On the third day of Christmas my true love sent to me "<<endl;
			break;
		case 4:
			cout << "On the fourth day of Christmas my true love sent to me "<<endl;
			break;
		case 5:
			cout << "On the fifth day of Christmas my true love sent to me "<<endl;
			break;
		case 6:
			cout << "On the sixth day of Christmas my true love sent to me "<<endl;
			break;
		case 7:
			cout << "On the seventh day of Christmas my true love sent to me "<<endl;
			break;
		case 8:
			cout << "On the eighth day of Christmas my true love sent to me "<<endl;
			break;
		case 9:
			cout << "On the ninth day of Christmas my true love sent to me "<<endl;
			break;
		case 10:
			cout << "On the tenth day of Christmas my true love sent to me "<<endl;
			break;
		case 11:
			cout << "On the eleventh day of Christmas my true love sent to me "<<endl;
			break;
		case 12:
			cout << "On the twelvth day of Christmas my true love sent to me " << endl;
			break;
		}


		while (number != 0)
		{
			switch (number)
			{
			case 1:
				cout << "A partidge in a pear tree" << endl;
				break;
			case 2:
				cout << "Two turtle doves, and" << endl;
				break;
			case 3:
				cout << "Three frech hen" << endl;
				break;
			case 4:
				cout << "Four calling bird" << endl;
				break;
			case 5:
				cout << "Five golden rings" << endl;
				break;
			case 6:
				cout << "Six geese a-laying" << endl;
				break;
			case 7:
				cout << "Seven swans a-swimming" << endl;
				break;
			case 8:
				cout << "Eight maids a-milking" << endl;
				break;
			case 9:
				cout << "Nine ladies dancing" << endl;
				break;
			case 10:
				cout << "Ten lords a-leaping" << endl;
				break;
			case 11:
				cout << "Eleven pipers piping" << endl;
				break;
			case 12:
				cout << "Twelve drummer drumming" << endl;
				break;
			}

			number--;
		}
		cout << "-----------------------------------------------------" << endl;
	}
}
