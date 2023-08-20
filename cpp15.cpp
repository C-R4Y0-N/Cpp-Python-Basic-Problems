#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a<0 || b<0 || a==b)
    {
        cout<<"Uno o mas valores no son validos"<<endl;
    }
    else
    {
        if(a>b)
        {
            cout<<a<<endl;
        }
        else 
        {
            cout<<b<<endl;
        }
    }
    return 0;
}