#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   CountWhite
// Description      :   return white spaces in the string
// Input            :   Character Pointer
// Output           :   integer
// Author           :   Kedar Anant Bhame
// Date             :   11/11/2026
//
//////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;
    while((*str) != '\0')
    {
        if((*str == ' '))
        {
            iCount++;
        }        
        *str++;
    }
    return iCount;
}
int main()
{
    char arr[20]; 
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input                   Output
//----------------------------------------------------------
//      MarvellouS              0
//      MarvellouS Infosystems  1
//      MarvellouS Infosystems by Piyush Manohar Khairnnar  5
//
/////////////////////////////////////////////////////////////