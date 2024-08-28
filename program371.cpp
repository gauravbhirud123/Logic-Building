#include<iostream>
using namespace std;

int main()
{
    int Size = 0,iCnt = 0;
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

    cout<<"Elements of the array are :"<<"\n";
    for(iCnt = 0;iCnt<Size;iCnt++)
    {
        cout<<ptr[iCnt]<<"\t";
    }

    cout<<"\n";

    //STEP 5 
    delete []ptr;

    return 0;

}