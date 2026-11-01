#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   EvenFactorial
// Description      :   return Even factorial of a number
// Input            :   Interger
// Output           :   Interger   
// Author           :   Kedar Anant Bhame
// Date             :   01/11/2026
//
/////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iResult = 1;
    for(int iCnt = 2; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
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

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      5           8
//      -5          8
//      10          3840
//
/////////////////////////////////////////////////////////////