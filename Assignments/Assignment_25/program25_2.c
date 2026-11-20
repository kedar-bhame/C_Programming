#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////
//
// Function Name    :   ChkCapital
// Description      :   check character is capital or not
// Input            :   Character
// Output           :   BOOL(Integer)
// Author           :   Kedar Anant Bhame
// Date             :   20/11/2026
//
//////////////////////////////////////

BOOL ChkCapital(char ch)
{
    if((ch >='A') && (ch <= 'Z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE; 
   
    printf("Enter the character :");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      a           It is not a Capital Character
//      A           It is Capital Character
//      z           It is not a Capital Character
//      Z           It is Capital Character
//      F           It is Capital Character
//      d           It is not a Capital Character
/////////////////////////////////////////////////////////////
