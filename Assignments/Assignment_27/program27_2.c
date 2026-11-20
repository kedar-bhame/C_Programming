#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   CountSmall
// Description      :   count small character in a string
// Input            :   Character Pointer
// Output           :   Void
// Author           :   Kedar Anant Bhame
// Date             :   20/11/2026
//
//////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//          Input                       Output
//----------------------------------------------------------
//      Marvellous                      9
//      Marvellous Multi OS             13
//      Kedar Anant Bhame ROCK          12           
/////////////////////////////////////////////////////////////
