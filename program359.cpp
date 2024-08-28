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
    double  Value1 = 11.5,Value2 = 20.3,Ret = 0.0;

    Ret = Addition(Value1,Value2);

    cout<<"Addition is "<<Ret<<"\n";

    return 0;
}