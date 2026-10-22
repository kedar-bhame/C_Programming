#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CalculateBonus
// Description      :   Display employee bonus base on input
// Input            :   Float, Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYears)
{   
    float fBonus = 0.0f;

    if((fSalary < 0) || (iYears < 0))
    {
        printf("Invalid Input");
    }
    else if((iYears > 10))
    {
        fBonus = fSalary * 0.15;
        printf("Bonus = %.2f",fBonus);
    }
    else if((iYears > 5) && (iYears < 10))
    {
        fBonus = fSalary * 0.10;
        printf("Bonus = %.2f",fBonus);
    }
    else if((iYears > 0) && (iYears < 5))
    {
        fBonus = fSalary * 0.05;
        printf("Bonus = %.2f",fBonus);
    }
    else
    {
        printf("Invalid Input");
    }

}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service : \n");
    scanf("%f %d",&fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1       Input2       Output
//----------------------------------------------------------
//      30000       12          Bonus = 4500.00
//      20000       7           Bonus = 2000.00
//      10000       2           Bonus = 500.00
//
/////////////////////////////////////////////////////////////