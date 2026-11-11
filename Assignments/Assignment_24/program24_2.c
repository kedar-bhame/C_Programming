#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   CountChar
// Description      :   return count of a character in the string
// Input            :   Character Pointer, Character
// Output           :   integer
// Author           :   Kedar Anant Bhame
// Date             :   11/11/2026
//
//////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;
    while((*str) != '\0')
    {
        if((*str == ch))
        {
            iCount++;
        }        
        *str++;
    }
    return iCount;
}

int main()
{
    char arr[20]; 
    char cValue;
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    printf("\nEnter the character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1                  Input2      Output
//----------------------------------------------------------
//      Marvellous Multi OS     M           2
//      Marvellous Multi OS     W           0
/////////////////////////////////////////////////////////////