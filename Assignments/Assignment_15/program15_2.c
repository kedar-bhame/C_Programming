#include<stdio.h>
#include<stdlib.h>
typedef int BOOL; 
#define TRUE 1
#define FALSE 0

//////////////////////////////////////
//
// Function Name    :   ChkGreater
// Description      :   checking the number is greater or smaller compare to 100
// Input            :   Integer
// Output           :   BOOL(Integer)   
// Author           :   Kedar Anant Bhame
// Date             :   04/11/2026
//
//////////////////////////////////////

BOOL ChkGreater(int iNo)
{
    BOOL bFlag = FALSE;

    if(iNo > 100)
    {
        bFlag = TRUE;
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    BOOL bRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      101          Greater
//      100          Smaller
//      39           Smaller
//
/////////////////////////////////////////////////////////////