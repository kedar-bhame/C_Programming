#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////
//
// Function Name    :   ChkSmall
// Description      :   check character is small case or not
// Input            :   Character
// Output           :   BOOL(Integer)
// Author           :   Kedar Anant Bhame
// Date             :   20/11/2026
//
//////////////////////////////////////

BOOL ChkSmall(char ch)
{
    if(((ch >= 'a') && (ch <= 'z')))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      a           It is Small case Character
//      A           It is not a Small case Character
//      z           It is Small case Character
//      Z           It is not a Small case Character
//      g           It is Small case Character
//      D           It is not a Small case Character
/////////////////////////////////////////////////////////////
