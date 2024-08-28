/*1standard-8 AM
2standard-9 AM
3standard-10 AM
4standard-11 AM
5standard-12 AM */

#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    
    switch(iStandard)
   {
      case 1 :
        {
          printf("Your Exam Is At 8 AM\n");
          break;
        }
    
     case 2 :
        {
          printf("Your Exam Is At 9 AM\n");
          break;
        }
    
     case 3 :
        {
          printf("Your Exam Is At 10 AM\n");
          break;
        }
    
     case 4 :
        {
          printf("Your Exam Is At 11 AM\n");
          break;
        }
    
     case 5 :
        {
          printf("Your Exam Is At 12 AM\n");
          break;
        }

      default :
        {
          printf("Wrong input ....\n");
        }  
    }


}
int main()
{
    int iValue = 0;
    printf("Primary school portal");

    printf("Enter your standard : \n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);

    return 0;
}
