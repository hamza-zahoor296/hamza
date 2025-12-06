#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    
    int i=1;
    while(i<=10)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
        i++;
    }
}