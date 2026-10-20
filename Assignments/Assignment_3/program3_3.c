#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DisplayEvenFactor
// Description      :   Display only Even factor of input number
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   20/10/2026
//
/////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    // Updater
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if(((i % 2) == 0) && ((iNo % i) == 0))
        {
            printf("%d\t",i);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);
    
    return 0;

}

/////////////////////////////////////////////
//          Test
//------------------------------------------
//      Input1      Output
//----------------------------------------- 
//      36          2   4   12  18
//      24          2   4   6   8   12
//      10          2
//      28          2   4   14
//
/////////////////////////////////////////////