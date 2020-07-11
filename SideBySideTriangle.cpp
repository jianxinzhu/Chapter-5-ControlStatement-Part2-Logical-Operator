/*   name: jianxin zhu
     date: july/10/2020
 */
 
 
 #include <iostream>
using std::cout;
using std::endl;

int main() {

    for (int i = 1; i <= 10; i++) {

        for (int j = 1; j <= 11; j++) 
        {
            cout << ((j <= i) ? "*" : " ");
        }

        for (int j = 10; j >= 1; j--)
        {
            cout << ((j >= i) ? "*" : " ");
        }
        for (int j = 0; j <= 11; j++)
        {
            cout << ((j <= i) ? " " : "*");
        }

        for (int j = 10; j >= 0; j--)
        {
            cout << ((j >= i) ? " " : "*");
        }
    



        cout << endl;
    }
}
