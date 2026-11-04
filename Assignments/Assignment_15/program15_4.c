#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   Multiply
// Description      :   return multiplication of the three numbers
// Input            :   Integer, Integer, Integer
// Output           :   Integer   
// Author           :   Kedar Anant Bhame
// Date             :   04/11/2026
//
//////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 0;

    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }

    if(iNo1 == 0)
    {
        iNo1 = 1;
    }
    if(iNo2 == 0)
    {
        iNo2 = 1;
    }
    if(iNo3 == 0)
    {
        iNo3 = 1;
    }

    iAns = iNo1 * iNo2 * iNo3;

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter three numbers : ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d\n",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      5 4 7       Multiplication is : 140
//      5 0 7       Multiplication is : 35
//      5 0 0       Multiplication is : 5
//      0 0 0       Multiplication is : 0
//
/////////////////////////////////////////////////////////////