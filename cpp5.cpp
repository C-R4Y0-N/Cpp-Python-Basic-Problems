#include <iostream>
using namespace std;
int main()
{
    float r,h,ab,v;
    cout<<"Digitalize el radio y la altura del cilindro en centimetros: "<<endl;
    cin>>r>>h;
    ab=3.1416*(r*h);
    cout<<"El area base es de: "<<ab<<" cm²"<<endl;
    v=ab*h;
    cout<<"El volumen del cilindro es de: "<<v<<" cm³"<<endl;
    return 0;
}