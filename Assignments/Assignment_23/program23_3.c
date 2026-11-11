#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   strlwrx
// Description      :   convert all character uppercase to lowercase and lowercase to uppercase
// Input            :   Character Pointer
// Output           :   Void
// Author           :   Kedar Anant Bhame
// Date             :   11/11/2026
//
//////////////////////////////////////

void strlwrx(char *str)
{
    while((*str) != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else
        {

        }
        
        *str++;
    }
}

int main()
{
    char arr[20]; 

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified stringis %s",arr);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input                       Output 
//----------------------------------------------------------
//      Marvellous Multi OS     mARVELLOUS mULTI os
//
/////////////////////////////////////////////////////////////