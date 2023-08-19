#include <iostream>
using namespace std;
int main()
{
    int sb,d,dep=0,sn=0;
    cin>>sb>>d;
    dep = sb*d/100;
    sn=sb-dep;
    cout<<sn;
    return 0;
}