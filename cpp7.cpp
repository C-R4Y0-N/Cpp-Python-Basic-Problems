#include <iostream>
using namespace std;
int main()
{
    int c,p,d;
    cin>>c;
    cin>>p;
    cin>>d;
    c*=p;
    d=(c*d)/100;
    c-=d;
    cout<<c;
    return 0;
}