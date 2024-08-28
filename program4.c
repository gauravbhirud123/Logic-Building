//Promblem statement: Accept radius from user and calculate area of circle.

//step1: Understand the promblem statement.
//conclusion: we are going to use the formula as PI*R*R.

/*step2: Algorithm
*/
#include<stdio.h>

/* Function name: calculateArea.
   Description : it is used to calculate area of circle.
   input : Float 
   Output: Float
   Author name: Gaurav Ajay Bhirud.
   Date : 02/10/2023.*/

float calculateArea(float fValue)
{
    auto float fAns = 0.0f;
    auto const float PI = 3.14f;

    fAns = PI*fValue*fValue;
    return fAns;

}
// Entry point function.
int main()
{
    auto float fRadius = 0.0f;
    auto float fArea = 0.0f;

    printf("Enter the radius\n");
    scanf("%f",&fRadius);

    fArea = calculateArea(fRadius);

    printf("The Area of circle is %f\n",fArea);

    return 0;
}