#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   MulDigits
// Description      :   return the multiplication of digits of a number
// Input            :   Integer
// Output           :   Integer   
// Author           :   Kedar Anant Bhame
// Date             :   04/11/2026
//
/////////////////////////////////////////////////////////////////////////

int MulDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 0;
    iMul = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMul = iMul * iDigit;
        }
        iNo = iNo / 10;
    }

    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MulDigits(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      2395        270
//      1018        8
//      9440        144
//      922432      864
//
/////////////////////////////////////////////////////////////