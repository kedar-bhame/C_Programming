#include<stdio.h>
#include<stdlib.h>
#define PI 3.14

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CircleArea
// Description      :   return Area of circle base on input radius
// Input            :   Float
// Output           :   Double   
// Author           :   Kedar Anant Bhame
// Date             :   02/11/2026
//
/////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of cicle is %lf",dRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input(radius)   Output(Area)
//----------------------------------------------------------
//      5.3             88.202606
//      10.4            339.622375
//
/////////////////////////////////////////////////////////////