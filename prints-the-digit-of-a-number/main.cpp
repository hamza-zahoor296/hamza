#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"Enter the number :";
    cin>>n;
    
    int rev=0;
    while(n>0)
    {
        int digit = n%10;
        rev=rev*10+digit;
        n/=10;
    }
    
    while(rev>0)
    {
        cout<<rev%10<<" ";
        rev/=10;
    }
    
    return 0;
}