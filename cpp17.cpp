#include <iostream>
using namespace std;
int main()
{
    float c1,c2,c3,ca,p;
    cin>>c1>>c2>>c3;
    cout<<"Calificacion aprobatoria: "<<endl;
    cin>>ca;
    if(c1<=0 || c2<=0 || c3<=0)
    {
        cout<<"Uno o mas valores no son validos"<<endl;
    }
    else
    {
        p=(c1+c2+c3)/3;
        if(p>ca)
        {
            cout<<"Aprobado"<<endl;
        }
        else 
        {
            cout<<"Reprobado"<<endl;
        }
    }
    return 0;
}