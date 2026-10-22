#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CalculateDiscount
// Description      :   Display total payable amount after adding discount
// Input            :   Float
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{   
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if((fAmount >= 0) && (fAmount <= 1000))
    {
        printf("Payable Amount = %.2f",fAmount);
    }
    else if((fAmount >= 1000) && (fAmount <= 5000))
    {
        fDiscount = (fAmount * 0.10);
        fFinalAmount =(fAmount - fDiscount);
        printf("Payable Amount = %.2f",fFinalAmount);
    }
    else if((fAmount >= 5000))
    {
        fDiscount = (fAmount * 0.20);
        fFinalAmount =(fAmount - fDiscount);
        printf("Payable Amount = %.2f",fFinalAmount);
    }
    else
    {
        printf("Invalid Input");
    }

}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : \n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1          Output
//      Amount          Discount
//----------------------------------------------------------
//      800        18          Payable Amount = 800.00
//      2000       19          Payable Amount = 1800.00
//      6000       16          Payable Amount = 4800.00
//
/////////////////////////////////////////////////////////////

