#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"Enter the Number : ";
    cin>>n;
    
    if(n>0)
    {
        cout<<"Number is positive  "<<endl;
    }
    else if (n<0)
    {
        cout<<"Numbe is Negative "<<endl;
    }
    else
    {
        cout<<"Number is zero "<<endl;
    }
    
    return 0;
}