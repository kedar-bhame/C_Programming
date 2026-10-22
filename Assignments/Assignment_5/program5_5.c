#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CheckCharacterType
// Description      :   Display input character is uppercase,lowercase,digit,special character
// Input            :   Character
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   21/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckCharacterType(char cValue)
{   
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alaphabet");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alaphabet");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character : \n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input           Output
//----------------------------------------------------------
//      A           Uppercase Alaphabet
//      m           Lowercase Alaphabet
//      7           Digit
//      @           Special Character
//
/////////////////////////////////////////////////////////////

