#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   RangeDisplayEven
// Description      :   Display only even number from range in between the two numbers
// Input            :   Interger, Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   03/11/2026
//
/////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    if(iEnd < iStart)
    {
        printf("Invalid Input");
        return;
    }

    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d  ",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);


    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1(Start)    Input1(End)      Output
//----------------------------------------------------------
//      23              35              24  26  28  30  32  34  
//      10              18              10  12  14  16  18  
//      10              10              10  
//      -10             2               -10  -8  -6  -4  -2  0  2  
//      90              18              Invalid Input
//
/////////////////////////////////////////////////////////////