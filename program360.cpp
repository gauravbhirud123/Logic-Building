#include<iostream>
using namespace std;

template<class T>
T Addition(T no1,T no2)
{
    T ans = 0.0;
    ans = no1 + no2;
    return ans;

}
int main()
{
    double  dValue1 = 11.5,dValue2 = 20.3,dRet = 0.0;
    int iValue1 = 10,iValue2 = 20,iRet = 0;
    float fValue1 = 11.5,fValue2 = 20.8,fRet = 0.0;

    iRet = Addition(iValue1,iValue2);
    cout<<"Addition is "<<iRet<<"\n";

    dRet = Addition(dValue1,dValue2);
    cout<<"Addition is "<<dRet<<"\n";

    fRet = Addition(fValue1,fValue2);
    cout<<"Addition is "<<fRet<<"\n";

    return 0;
}