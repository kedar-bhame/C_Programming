#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   RectArea
// Description      :   return Area of rectangle base on input width and height
// Input            :   Float, Float
// Output           :   Double   
// Author           :   Kedar Anant Bhame
// Date             :   02/11/2026
//
/////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f",&fValue1);

    printf("Enter height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %lf",dRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1      Input2   Output(Area)
//----------------------------------------------------------
//      5.3         9.78        51.834000
//
/////////////////////////////////////////////////////////////