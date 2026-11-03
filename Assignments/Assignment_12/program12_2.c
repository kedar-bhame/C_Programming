#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   ChzZero
// Description      :   Diaplay digits of a number are zero or not
// Input            :   Interger
// Output           :   BOOL(Interger)   
// Author           :   Kedar Anant Bhame
// Date             :   03/11/2026
//
/////////////////////////////////////////////////////////////////////////

BOOL ChzZero(int iNo)
{
    int iDigit = 0;

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChzZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return EXIT_SUCCESS;
}


////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      2395        There is no Zero
//      1018        It Contains Zero
//      9000        It Contains Zero
//      10687       It Contains Zero
//
/////////////////////////////////////////////////////////////