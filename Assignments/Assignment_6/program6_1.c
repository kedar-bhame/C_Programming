#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CalculateElectricityBill
// Description      :   Display electricity bill using input no. of units
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   21/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CalculateElectricityBill(int iUnits)
{   
    float fBill = 0.0f;

    if(iUnits <= 100)
    {
        fBill = iUnits * 5;
    }
    else if((iUnits > 100) && (iUnits <= 200))
    {
        fBill = 100 * 5;
        fBill = fBill + ((iUnits - 100) * 7);
        
    }
    else if(iUnits > 200)
    {
        fBill = 100 * 5;
        fBill = fBill + (100 * 7);
        fBill = fBill + ((iUnits - 200) * 10);
    }
    else
    {
        printf("Invalid input");
    }

    printf("Bill = %.2f",fBill);
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units : \n");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input           Output
//----------------------------------------------------------
//      80           Bill = 400.00
//      150          Bill = 850.00
//      250          Bill = 1700.00
//
/////////////////////////////////////////////////////////////

