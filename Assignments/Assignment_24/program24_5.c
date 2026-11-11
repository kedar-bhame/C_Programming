#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   StrRevX
// Description      :   reverse the string in place
// Input            :   Character Pointer
// Output           :   void
// Author           :   Kedar Anant Bhame
// Date             :   11/11/2026
//
//////////////////////////////////////

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    { 
       end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char arr[20]; 
   
    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      abcd        dcba
//      abba        abba
/////////////////////////////////////////////////////////////