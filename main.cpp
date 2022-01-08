#include <iostream>

using namespace std;

int main()
{
    int a,b, c ,choice;
    cout<<" enter 2 numbers ";
    cin>>a>>b;
    cout<<" enter the choice for add , sub , mult, div 1,2,3,4 respectively";
    cin>>choice;
    switch (choice){
        case 1:cout<<" your are doing addition";
                {
                    c = a + b;


                }
                cout<<c;
                break;
        case 2:cout<<" your are doing subtraction";
                {
                    c = a - b;


                }
                cout<<c;
                break;
        case 3:cout<<" your are doing multiplication";
                {
                    c = a * b;


                }
                cout<<c;
                break;
        case 4:cout<<" you are doing divison";
                {

                    c = a/b;
                }
                cout<<c;
                break;
        default:cout<<" invalid";
    }
}
