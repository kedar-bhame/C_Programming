#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Count
// Description      :   count frequency of digits less tha 6 in a number
// Input            :   Integer
// Output           :   Integer   
// Author           :   Kedar Anant Bhame
// Date             :   03/11/2026
//
/////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iDigit = 0;
    int iCounter = 0;
    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCounter++;
        }
        iNo = iNo / 10;
    }

    return iCounter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}


////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      2395        3
//      1018        3
//      9440        3
//      96672       1
//
/////////////////////////////////////////////////////////////