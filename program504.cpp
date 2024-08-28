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

    void BubbleSortEfficient(char choice)
    {
        int iTemp = 0;
        int i = 0,j = 0;
        bool bFlag = false;

        if(choice == 'I')
        {
            for(i = 0;i<iSize;i++)
            {
                cout<<"Data after pass : "<<(i+1)<<"\n";
                bFlag = false;

                for(j = 0;j<iSize-i-1;j++)
                {
                    if(Arr[j] > Arr[j+1])
                    {
                        iTemp = Arr[j];
                        Arr[j] = Arr[j+1];
                        Arr[j+1] = iTemp;
                        bFlag = true;
                    }
                }
                if(bFlag == false)
                {
                    break;
                }
            }
            Display();
        }
        else if(choice == 'D')
        {
            for(i = 0;i<iSize;i++)
            {
                cout<<"Data after pass : "<<(i+1)<<"\n";
                bFlag = false;
                
                for(j = 0;j<iSize-i-1;j++)
                {
                    if(Arr[j]<Arr[j+1])
                    {
                        iTemp = Arr[j];
                        Arr[j] = Arr[j+1];
                        Arr[j+1] = iTemp;
                        bFlag = true;
                    }
                }
                if(bFlag == false)
                {
                    break;
                }
                Display();
            }
        }
        else
        {
            cout<<"Invalid Choice \n";
        }
    }
    
};

int main()
{
    int iLength = 0;
    int iRet = 0;
    int iValue = 0;
    bool bRet = false;
    char cChoice = '\0';

    cout<<"Enter the number of elements : "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    cout<<"Please enter your choice for sorting : \n";
    cout<<"I : Increasing Order \n";
    cout<<"D : Decreasing Order \n";

    cin>>cChoice;

    aobj->BubbleSortEfficient(cChoice);
    aobj->Display(); 

    delete aobj;

    return 0;
}