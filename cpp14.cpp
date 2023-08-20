#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0 || b==0)
    {
        cout<<"Uno de los valores no es valido"<<endl;
    }
    else if(a<0)
    {
        a=a*-1;
        cout<<a<<endl;
    }
    else if(a>0)
    {
        cout<<a<<endl;
    }
    else if(b<0)
    {
        b=b*-1;
        cout<<b;
    }
    else if(b>0)
    {
        cout<<b;
    }
    return 0;
}