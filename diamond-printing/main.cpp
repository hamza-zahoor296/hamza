#include<iostream>
using namespace std;
int main()
{
    int n=5;
    
    int i;
    
    int j;
    
    //for upper diamond
    
    for(i=1;i<=n;i++)//for upper part
    {
        
        for(j=i;j<n;j++)
        {
        
           cout<<" ";
            
        }
        
        for(j=1;j<=(2*i-1);j++)
        {
           
           cout<<"*";
            
        }
        
        cout<<"\n";
    }
    
    
    for(i=n-1;i>=1;i--)//for lower part
    {
        
        for(j=n;j>i;j--)
        {
          
           cout<<" ";
            
        }
        
        for(j=1;j<=(2*i-1);j++)
        {
           cout<<"*";
        }
        
        cout<<"\n";
    }
    
    
    //for loower diamond
    
    for(i=1;i<=n;i++)//upper part of diamond
    {
        for(j=i;j<n;j++)
        {
           cout<<" ";
            
        }
        
        for(j=1;j<=(2*i-1);j++)
        {
           cout<<"*";
        }
        
        cout<<"\n";
    }
    
    
    for(i=n-1;i>=1;i--)//lower part of diamond
    {
        
        for(j=n;j>i;j--)
        {
           cout<<" ";
        }
        for(j=1;j<=(2*i-1);j++)
        {
           cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}