#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Factorial
// Description      :   return factorial of a number
// Input            :   Interger
// Output           :   Interger   
// Author           :   Kedar Anant Bhame
// Date             :   01/11/2026
//
/////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iFact = 1;
    //  Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    
    return iFact;
}   // End of Display
// Time Complexity : O(N)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}   //  End of main

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input           Output
//----------------------------------------------------------
//          5           120
//          -5          120
//          4           24
//
/////////////////////////////////////////////////////////////