#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"Los numeros deben ser diferentes"<<endl;
    }
    else if(a>b)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }
    return 0;
}