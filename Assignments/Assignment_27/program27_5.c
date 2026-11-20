#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   Reverse
// Description      :   Display reverse string
// Input            :   Character pointer
// Output           :   Void
// Author           :   Kedar Anant Bhame
// Date             :   20/11/2026
//
//////////////////////////////////////

void Reverse(char *str)
{
    int iLen = 0;
    while(*str != '\0')
    {
        *str++;
        iLen++;
    }
    *str--;

    for(int iCnt = iLen; iLen > 0; iLen--)
    {
        printf("%c",*str--);
    }
}

int main()
{
    char arr[20];
    int bRet = 0; 
   
    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input           Output
//----------------------------------------------------------
//      MarvellouS      SuollevraM
//      Kedar           radeK
/////////////////////////////////////////////////////////////
