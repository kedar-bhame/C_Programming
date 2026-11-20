#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Display for capital character input to Z and for small character display from input to a reverse order
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
        for(; ch <= 'Z'; ch++)
        {
            printf("%c ",ch);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(; ch >= 'a'; ch--)
        {
            printf("%c ",ch);
        }
    }
    else
    {
        return;
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
//      Q           Q R S T U V W X Y Z 
//      m           m l k j i h g f e d c b a 
//      8           
//      %           
/////////////////////////////////////////////////////////////
