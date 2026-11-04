#include<stdio.h>
#include<stdlib.h>
typedef int BOOL; 
#define TRUE 1
#define FALSE 0

//////////////////////////////////////
//
// Function Name    :   ChkEqual
// Description      :   checking the two numbers are equal or not
// Input            :   Integer, Integer
// Output           :   BOOL(Integer)   
// Author           :   Kedar Anant Bhame
// Date             :   04/11/2026
//
//////////////////////////////////////

BOOL ChkEqual(int iNo1, int iNo2)
{
    BOOL bFlag = FALSE;

    if(iNo1 == iNo2)
    {
        bFlag = TRUE;
    }

    return bFlag;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter two numbers : ");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      10 10       Equal
//      10 12       Not Equal
//      10 -10      Not Equal
//
/////////////////////////////////////////////////////////////