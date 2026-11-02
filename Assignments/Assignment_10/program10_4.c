#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   FhtoCs
// Description      :   return Celcius of a given Fahrenheit temperature
// Input            :   Float
// Output           :   Double   
// Author           :   Kedar Anant Bhame
// Date             :   02/11/2026
//
/////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCelcius = 0.0;

    dCelcius = ((fTemp - 32) * (5.0 / 9.0));

    return dCelcius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Celcius is %lf",dRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input      Output
//----------------------------------------------------------
//      10          -12.222222
//      34          1.111111
//
/////////////////////////////////////////////////////////////