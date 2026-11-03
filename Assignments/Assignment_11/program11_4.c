#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   RangeSumEven
// Description      :   sum of only even number from range in between two numbers
// Input            :   Interger, Interger
// Output           :   Interger   
// Author           :   Kedar Anant Bhame
// Date             :   03/11/2026
//
/////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    if((iStart < 0) || (iEnd < 0) || (iEnd < iStart))
    {
        return -1;
    }

    int iCount = 0;
    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iCount = iCount + iCnt;
        }
    }

    return iCount;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid Input");
    }
    else
    {
        printf("Addition is %d\n",iRet);
    }

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1(Start)    Input1(End)      Output
//----------------------------------------------------------
//      23              30              108
//      10              18              70
//      -10             2               Invalid Input
//      90              18              Invalid Input
//
/////////////////////////////////////////////////////////////