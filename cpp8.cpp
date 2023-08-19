#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float c1,c2,c3,p;
    cin>>c1>>c2>>c3;
    p=(c1+c2+c3)/3;
    //cout<<fixed<<setprecision(2);
    cout<<round(p)<<endl;
    return 0;
}