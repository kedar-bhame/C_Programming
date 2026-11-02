#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   FactorialDiff
// Description      :   return difference between even factorial and odd factorial
// Input            :   Interger
// Output           :   Interger   
// Author           :   Kedar Anant Bhame
// Date             :   02/11/2026
//
/////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iOddSum = 1;
    int iEvenSum = 1;
    int iResult = 0;

    for(int iCnt = 2; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenSum  = iEvenSum * iCnt;
        }
        else
        {
            iOddSum = iOddSum * iCnt;
        }
    }

    iResult = iEvenSum - iOddSum;

    return iResult;
}
// Time Complexity : O(N)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      5           -7
//      -5          -7
//      10          2895
//
/////////////////////////////////////////////////////////////