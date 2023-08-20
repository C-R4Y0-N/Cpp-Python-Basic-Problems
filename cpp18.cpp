#include <iostream>
using namespace std;
int main()
{
    int c,p=0,i=1;
    while(i<=5)
    {
        cout<<"Teclee la calificacion "<<i<<endl;
        cin>>c;
        p=p+c;
        i++;
    }
    p/=5;
    cout<<p;
    return 0;
}