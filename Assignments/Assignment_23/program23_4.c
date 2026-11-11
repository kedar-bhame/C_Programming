#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   DisplayDigit
// Description      :   Display only letters from the string
// Input            :   Character Pointer
// Output           :   Void
// Author           :   Kedar Anant Bhame
// Date             :   11/11/2026
//
//////////////////////////////////////

void DisplayDigit(char *str)
{
    while((*str) != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }        
        *str++;
    }
}

int main()
{
    char arr[20]; 

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input                   Output
//----------------------------------------------------------
//      marve89llous121         89121
//
/////////////////////////////////////////////////////////////