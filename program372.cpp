#include<iostream>
using namespace std;

int Addition(int Arr[],int Length)
{
    int Sum = 0,iCnt = 0;
    for(iCnt = 0;iCnt<Length;iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }

    return Sum;
}

int main()
{
    int Size = 0,iCnt = 0;
    int *ptr = NULL;
    int Ret = 0;


    //STEP 1 : 
    cout<<"Enter number of elements"<<"\n";
    cin>>Size;

    //STEP 2:
    ptr = new int[Size];

    //STEP 3:
    cout<<"Enter the elements"<<"\n";
    for(iCnt = 0;iCnt<Size;iCnt++)
    {
        cin>>ptr[iCnt];
    }

    //STEP 4 : FUNCTION CALL

    Ret = Addition(ptr,Size);
    cout<<"Addition of all elements is "<<Ret<<"\n";

    //STEP 5 
    delete []ptr;

    return 0;

}