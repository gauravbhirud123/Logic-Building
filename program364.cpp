#include<iostream>
using namespace std;

void Swap(double &No1,double &No2)
{
    double Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;
}

int main()
{
    double dValue1 = 10.888;
    double dValue2 = 20.1145;

    cout<<"Value of dValue1 :"<<dValue1<<"\n";
    cout<<"Value of dValue2 :"<<dValue2<<"\n";

    Swap(dValue1,dValue2);

    cout<<"Value of dValue1 :"<<dValue1<<"\n";
    cout<<"Value of dValue2 :"<<dValue2<<"\n";
}