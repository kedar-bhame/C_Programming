#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DisplayFactor
// Description      :   Display factor of input number
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   20/10/2026
//
/////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    // Updater
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if(((iNo % i) == 0))
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

    DisplayFactor(iValue);
    
    return 0;
}

/////////////////////////////////////////////
//          Test
//------------------------------------------
//      Input1      Output
//----------------------------------------- 
//      36          1   2   3   4   6   9   12  18
//      24          1   2   3   4   6   8   12
//      10          1   2   5
//      28          1   2   4   7   14
//
/////////////////////////////////////////////