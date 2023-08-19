#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float dvd,dvsr,r;
    cin>>dvd>>dvsr;
    if(dvsr==0)
    {
        cout<<"No se puede dividir entre cero"<<endl;
    }
    else
    {
        r=dvd/dvsr;
        cout<<setprecision(1)<<r<<endl;
    }

    return 0;
}