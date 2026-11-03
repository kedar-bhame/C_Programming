#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CountTwo
// Description      :   count frequency of 2 in number
// Input            :   Integer
// Output           :   Integer   
// Author           :   Kedar Anant Bhame
// Date             :   03/11/2026
//
/////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
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
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}


////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      2395        1
//      1018        0
//      9000        0
//      922432      3
//
/////////////////////////////////////////////////////////////