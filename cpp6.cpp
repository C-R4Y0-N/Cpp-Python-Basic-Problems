#include <iostream>
//#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    float p,tc,d;
    cout<<"Teclee la cantidad de pesos y el tipo de cambio: "<<endl;
    cin>>p>>tc;
    d=p/tc;
    cout<<"La conversión de pesos a dolares queda de la siguiente forma: "<<endl;
    cout<<"Pesos: "<<p<<endl;
    //d=round(d*100)/100;
    cout<<fixed<<setprecision(2);
    cout<<"Dolares"<<d<<endl;
    return 0;
}