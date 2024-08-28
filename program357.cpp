#include<iostream>
using namespace std;

float Addition(float no1,float no2)
{
    float ans = 0.0;
    ans = no1 + no2;
    return ans;

}
int main()
{
    float Value1 = 11.5,Value2 = 20.3,Ret = 0.0;

    Ret = Addition(Value1,Value2);

    cout<<"Addition is "<<Ret<<"\n";

    return 0;
}