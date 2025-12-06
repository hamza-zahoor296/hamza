#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number :";
    cin>>n;
    
    while(n !=0)
    {
        sum +=n;
        cin>>n;
    }
    cout<<"Total Sum is :"<<sum;
    return 0;
}