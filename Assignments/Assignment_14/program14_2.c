#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   FactRev
// Description      :   Display factors of a number in decreasing order
// Input            :   Integer
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   04/11/2026
//
/////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    for(int iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d  ",iCnt);
        }
    }
}
// Time Complexity : O(N/2)


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      12          6  4  3  2  1
//      13          1  
//      10          5  2  1
//
/////////////////////////////////////////////////////////////