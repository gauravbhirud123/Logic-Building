#include<iostream>
using namespace std;

class Digits
{
    private:
    int iNo;

    public:
    Digits(int x)
    {
        iNo = x;
    }

    //Logics
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number : "<<endl;
    cin>>iValue;

    Digits nobj(iValue);

    return 0;
}