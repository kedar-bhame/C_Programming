#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////
//
// Function Name    :   ChkSpecial
// Description      :   check vowels in a string
// Input            :   Character pointer
// Output           :   BOOL(Integer)
// Author           :   Kedar Anant Bhame
// Date             :   20/11/2026
//
//////////////////////////////////////

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') ||
           (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return TRUE;
        }

        *str++;
    }
    
    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE; 
   
    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input           Output
//----------------------------------------------------------
//      marvellous      Contains Vowel
//      Demo            Contains Vowel
//      xyz             There is no Vowel
/////////////////////////////////////////////////////////////
