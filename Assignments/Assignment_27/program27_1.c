#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   CountCapital
// Description      :   count capital character in a string
// Input            :   Character Pointer
// Output           :   Void
// Author           :   Kedar Anant Bhame
// Date             :   20/11/2026
//
//////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;
   
    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//          Input                       Output
//----------------------------------------------------------
//      Marvellous Multi OS             4
//      Kedar Anant Bhame ROCK          7           
/////////////////////////////////////////////////////////////
