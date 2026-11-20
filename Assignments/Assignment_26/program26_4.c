#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////
//
// Function Name    :   ChkSpecial
// Description      :   check character is special symbol or not
// Input            :   Character
// Output           :   BOOL(Integer)
// Author           :   Kedar Anant Bhame
// Date             :   20/11/2026
//
//////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')))
    {
        return FALSE;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        return FALSE;
    }
    else if((ch >= '0') && (ch <= '9'))
    {
        return FALSE;
    }
    else 
    {
        return TRUE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE; 
   
    printf("Enter the character :");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is not a special Character");
    }

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      %           It is special Character
//      d           It is not a special Character
//      D           It is not a special Character
/////////////////////////////////////////////////////////////
