#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   FactDiff
// Description      :   return difference between summation of all factors and non factors of a number
// Input            :   Integer
// Output           :   Integer   
// Author           :   Kedar Anant Bhame
// Date             :   04/11/2026
//
/////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iSumFact = 0, iSumNonFact = 0, iAns = 0;

    for(int iCnt = 1; iCnt < (iNo); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    iAns = iSumFact - iSumNonFact;

    return iAns;
}
// Time Complexity : O(N)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      12          -34
//      13          -76 
//      10          -29
//
/////////////////////////////////////////////////////////////