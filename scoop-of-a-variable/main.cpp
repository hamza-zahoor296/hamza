#include<iostream>
using namespace std;
int a=14;
int b=12;
int c=67;
main()
{
    int a=35;
    {
        int b=46;
        {
         
         int c=45;
         {
            cout<<a<<endl;
             cout<<b<<endl;
             cout<<c<<endl;
         }
         cout<<a<<endl;
         cout<<b<<endl;
         cout<<c<<endl;
        }
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
    return 0;
}