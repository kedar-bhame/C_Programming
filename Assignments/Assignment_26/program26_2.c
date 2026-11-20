#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Display small character to capital and viseversa to capital character
// Input            :   Character
// Output           :   Void
// Author           :   Kedar Anant Bhame
// Date             :   20/11/2026
//
//////////////////////////////////////

void Display(char ch)
{
    if((ch >='A') && (ch <= 'Z'))
    {
        ch = ch + 32;
        printf("%c",ch);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
        printf("%c",ch);
    }
    else
    {
        printf("%c",ch);
    }

}

int main()
{
    char cValue = '\0';
   
    printf("Enter the character :");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      Q           q
//      m           M
//      4           4
//      %           %
/////////////////////////////////////////////////////////////
