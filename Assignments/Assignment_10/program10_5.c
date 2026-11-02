#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   SquareMeter
// Description      :   convert area of square from feet to meter
// Input            :   Interger
// Output           :   Double   
// Author           :   Kedar Anant Bhame
// Date             :   02/11/2026
//
/////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    dMeter = iValue * 0.0929;

    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square Meter is %lf",dRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input      Output
//----------------------------------------------------------
//      5          0.464500
//      7          0.650300
//
/////////////////////////////////////////////////////////////