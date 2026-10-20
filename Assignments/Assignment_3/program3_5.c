#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   ChkVowel
// Description      :   Display vowel or not base on input character
// Input            :   char
// Output           :   BOOL (interger)   
// Author           :   Kedar Anant Bhame
// Date             :   20/10/2026
//
/////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char cValue)
{
    if((cValue == 'a') || (cValue == 'e') || (cValue == 'i') || (cValue == 'o') || (cValue == 'u') || (cValue == 'A') || (cValue == 'E') || (cValue == 'I') || (cValue == 'O') || (cValue == 'U'))
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

    printf("Enter charactor : \n");

    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    
    return 0;

}

/////////////////////////////////////////////
//          Test
//------------------------------------------
//      Input1      Output
//----------------------------------------- 
//      e           It is Vowel
//      d           It is not Vowel
//      E           It is Vowel
//      D           It is not Vowel
//
/////////////////////////////////////////////