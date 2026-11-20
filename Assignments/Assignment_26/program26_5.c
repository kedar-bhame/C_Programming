#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Display ASCII value in decimal , octal , hexadecimal of a character
// Input            :   Character
// Output           :   Void
// Author           :   Kedar Anant Bhame
// Date             :   20/11/2026
//
//////////////////////////////////////

void Display(char ch)
{
    printf("Decimal : %d\n", ch);
    printf("Octal : %#o\n",ch);
    printf("Hexadecimal : %#X\n",ch);
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
//      A           Decimal : 65
//                  Octal : 0101
//                  Hexadecimal : 0X41
//
//      p           Decimal : 112
//                  Octal : 0160
//                  Hexadecimal : 0X70
//
//      %           Decimal : 37
//                  Octal : 045
//                  Hexadecimal : 0X25           
/////////////////////////////////////////////////////////////
