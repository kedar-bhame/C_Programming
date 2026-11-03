#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   RangeDiaplayRev
// Description      :   Diaplay number from range in between two numbers in reverse order
// Input            :   Interger, Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   03/11/2026
//
/////////////////////////////////////////////////////////////////////////

void RangeDiaplayRev(int iStart, int iEnd)
{
    if((iEnd < iStart))
    {
        printf("Invalid Input");
        return;
    }

    for(int iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d  ",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDiaplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1(Start)    Input1(End)      Output
//----------------------------------------------------------
//      23              35              35  34  33  32  31  30  29  28  27  26  25  24  23  
//      10              18              18  17  16  15  14  13  12  11  10  
//      10              10              10
//      -10             2               Invalid Input
//      90              18              Invalid Input
//
/////////////////////////////////////////////////////////////