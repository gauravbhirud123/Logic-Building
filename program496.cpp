#include<iostream>
using namespace std;

class Array
{
    private:
    int *Arr;
    int iSize;

    public:
    Array(int X)
    {
        iSize = X;
        Arr = new int[iSize];
    }

    ~Array()
    {
        delete[]Arr;
    }

    void Accept()
    {
        int iCnt = 0;
        cout<<"Please enter the elements:"<<endl;
        for(iCnt = 0;iCnt<iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    void Display()
    {
        cout<<"Elements of the array are : "<<endl;
        int iCnt = 0;
        for(iCnt = 0;iCnt < iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<endl;
    }

    void Reverse()
    {
        int iStart = 0;
        int iEnd = iSize - 1;
        int iTemp = 0;

        while(iStart < iEnd)
        {
            iTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = iTemp;

            iStart++;
            iEnd--;
        }
    }
    
};

int main()
{
    int iLength = 0;
    int iRet = 0;
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number of elements : "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    aobj->Reverse();
    aobj->Display();

    delete aobj;

    return 0;
}