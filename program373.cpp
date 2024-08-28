#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[],int Length)
{
    T Sum = 0;
    int iCnt = 0;
    for(iCnt = 0;iCnt<Length;iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }

    return Sum;
}

int main()
{
    int Size = 0,iCnt = 0,Ret = 0;
    int *ptr = NULL;

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