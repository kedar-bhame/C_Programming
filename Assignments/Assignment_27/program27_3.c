#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   Difference
// Description      :   calculate difference between total small and capital character in a string
// Input            :   Character Pointer
// Output           :   int
// Author           :   Kedar Anant Bhame
// Date             :   20/11/2026
//
//////////////////////////////////////

int Difference(char *str)
{
    int iCapital = 0, iSmall = 0, iDiff = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }
        
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        str++;
    }

    iDiff = iSmall - iCapital;

    return iDiff;
}

int main()
{
    char arr[20];
    int iRet = 0;
   
    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//          Input                       Output
//----------------------------------------------------------
//      MarvellouS                      6
//      Marvellous Multi OS             9
//      Kedar Anant Bhame ROCK          5           
/////////////////////////////////////////////////////////////
