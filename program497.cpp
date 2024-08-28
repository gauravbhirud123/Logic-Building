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

    void BubbleSort()
    {
        int iTemp = 0;
        int i = 0,j = 0;

        for(i = 0;i<iSize;i++) //outer
        {
            for(j = 0;j<iSize-i-1;j++) //inner
            {
                if(Arr[j]>Arr[j+1])
                {
                    iTemp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = iTemp;
                }
            }
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

    aobj->BubbleSort();
    aobj->Display();

    delete aobj;

    return 0;
}