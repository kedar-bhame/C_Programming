#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////
//
// Function Name    :   ChkChar
// Description      :   check character is present in the string or not
// Input            :   Character Pointer, Character
// Output           :   BOOL(integer)
// Author           :   Kedar Anant Bhame
// Date             :   11/11/2026
//
//////////////////////////////////////

BOOL ChkChar(char *str, char ch)
{
    BOOL Flag = FALSE;
    while((*str) != '\0')
    {
        if((*str == ch))
        {
            Flag = TRUE;
            return Flag;
        }        
        *str++;
    }
    return Flag;
}

int main()
{
    char arr[20]; 
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    printf("\nEnter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1                  Input2      Output
//----------------------------------------------------------
//      Marvellous Multi OS     e           Character found
//      Marvellous Multi OS     W           Character not found
/////////////////////////////////////////////////////////////