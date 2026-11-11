#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   FirstChar
// Description      :   return first occourrence index of a character in the string
// Input            :   Character Pointer, Character
// Output           :   integer
// Author           :   Kedar Anant Bhame
// Date             :   11/11/2026
//
//////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int index = 0;
    while((*str) != '\0')
    {
        if((*str == ch))
        {
            return index;
        } 
        index++;       
        *str++;
    }
    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1                  Input2      Output
//----------------------------------------------------------
//      Marvellous Multi OS     M           0
//      Marvellous Multi OS     W           -1
//      Marvellous Multi OS     e           4
/////////////////////////////////////////////////////////////