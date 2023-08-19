#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Digitalize los grados Fahrenheit: "<<endl;
    cin>>a;
    a=(a-32)*(5/9);
    cout<<"Convertido a grados Celcius es: "<<a<<endl;
    return 0;
}