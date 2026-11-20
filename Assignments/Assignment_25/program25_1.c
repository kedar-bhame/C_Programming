#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////
//
// Function Name    :   ChkAlpha
// Description      :   check character is alphabet or not
// Input            :   Character
// Output           :   BOOL(Integer)
// Author           :   Kedar Anant Bhame
// Date             :   20/11/2026
//
//////////////////////////////////////

BOOL ChkAlpha(char ch)
{
    if((ch >='A') && (ch <= 'Z') || ((ch >= 'a') && (ch <= 'z')))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      a           It is Character
//      A           It is Character
//      z           It is Character
//      Z           It is Character
//      0           It is not a Character
//      $           It is not a Character
/////////////////////////////////////////////////////////////
