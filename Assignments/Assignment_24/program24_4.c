#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   LastChar
// Description      :   return last occourrence index of a character in the string
// Input            :   Character Pointer, Character
// Output           :   integer
// Author           :   Kedar Anant Bhame
// Date             :   11/11/2026
//
//////////////////////////////////////

int LastChar(char *str, char ch)
{
    int index = 0;
    int findex = -1;
    while((*str) != '\0')
    {
        if((*str == ch))
        {
            findex = index;
        } 
        index++;       
        *str++;
    }
    return findex;
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

    iRet = LastChar(arr, cValue);

    printf("Character location is %d",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1                  Input2      Output
//----------------------------------------------------------
//      Marvellous Multi OS     M           11
//      Marvellous Multi OS     W           -1
//      Marvellous Multi OS     e           4
/////////////////////////////////////////////////////////////