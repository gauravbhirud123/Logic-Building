#include<iostream>
using namespace std;

int Addition(int no1,int no2)
{
    int ans = 0;
    ans = no1 + no2;
    return ans;

}
int main()
{
    int Value1 = 10,Value2 = 20,iRet = 0;

    iRet = Addition(iValue1,iValue2);

    cout<<"Addition is "<<iRet<<"\n";

    return 0;
}