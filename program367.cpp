#include<iostream>
using namespace std;

class Arithematic
{
    public:
    int No1;
    int No2;

    Arithematic(int A,int B);

    int Addition();
};

Arithematic :: Arithematic(int A,int B)
{
    this->No1 = A;
    this->No2 = B; 
}

int Arithematic ::Addition()
{
    int Ans = 0;
    Ans = No1+No2;
    return Ans;
}

int Arithematic ::Substraction()
{
    int Ans = 0;
    Ans = No1-No2;
    return Ans;
}

int main()
{
    Arithematic obj1(11,10);
    int iRet = 0;

    iRet = obj1.Addition();
    cout<<"Addition is : "<<iRet<<"\n";
    
    iRet = obj1.Substraction();
    cout<<"Substraction is : "<<iRet<<"\n";
    
    return 0;
}