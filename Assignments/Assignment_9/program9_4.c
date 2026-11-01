#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   OddFactorial
// Description      :   return Odd factorial of a number
// Input            :   Interger
// Output           :   Interger   
// Author           :   Kedar Anant Bhame
// Date             :   01/11/2026
//
/////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iResult = 1;
    for(int iCnt = 2; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iResult  = iResult * iCnt;
        }
    }
    
    return iResult;
}
// Time Complexity : O(N)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      5           15
//      -5          15
//      10          945
//
/////////////////////////////////////////////////////////////