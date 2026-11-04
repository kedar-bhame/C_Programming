#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   NonFact
// Description      :   Display all non factors of a number
// Input            :   Integer
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   04/11/2026
//
/////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    for(int iCnt = 1; iCnt <= (iNo); iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d  ",iCnt);
        }
    }
}
// Time Complexity : O(N)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      12          5  7  8  9  10  11
//      13          2  3  4  5  6  7  8  9  10  11  12 
//      10          3  4  6  7  8  9
//
/////////////////////////////////////////////////////////////