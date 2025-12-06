#include<iostream>

#include<string>

using namespace std;

int hexdigit(char c)

{
    if(c>='0'&&c<='9')
       return c-'0';
    if(c>='A'&&c<='F')
       return c-'A'+10; 
    if(c>='a'&&c<='f')
       return c-'a'+10; 
    return -1;   
}

char decdigit(int c)
{
    if(c<10) return '0'+c;
    return 'A'+(c-10);
}

int main()

{
    int color;
    cout<<"1.Hex to Rgb"<<endl;
    cout<<"2.Rgb to Hex"<<endl;
    cin>>color;
    switch(color)
    
    {
        case 1:
        
        {
            string Hex;
            cout<<"Enter Hex code 6 digit e.g 1A2B3C\n";
            cin>>Hex;
            int r=hexdigit(Hex[0])*16+hexdigit(Hex[1]);
            int g=hexdigit(Hex[2])*16+hexdigit(Hex[3]);
            int b=hexdigit(Hex[4])*16+hexdigit(Hex[5]);
            cout<<"Rgb=("<<r<<","<<g<<","<<b<<")";
            break;
            
        }
        
        case 2:
        
        {
            int r,g,b;
            cout<<"Enter R G B values (0-255)\n";
            char hex[7];
            cin>>r>>g>>b;
                hex[0]=decdigit(r/16);
                hex[1]=decdigit(r%16);
                hex[2]=decdigit(g/16);
                hex[3]=decdigit(g%16);
                hex[4]=decdigit(b/16);
                hex[5]=decdigit(b%16);
                hex[6]='\0';
                cout<<"Hex=#"<<hex<<endl;
                break;
        }
        
        default:
        cout<<"Invalid input";
        break;
    }
    
    return 0;
}