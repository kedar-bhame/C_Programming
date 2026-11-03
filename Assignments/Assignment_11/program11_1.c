#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   RangeDisplay
// Description      :   Display the range between the two numbers
// Input            :   Interger, Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   03/11/2026
//
/////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    if(iEnd < iStart)
    {
        printf("Invalid Input");
        return;
    }

    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d  ",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);


    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1(Start)    Input1(End)      Output
//----------------------------------------------------------
//      23              35              23  24  25  26  27  28  29  30  31  32  33  34  35  
//      10              18              10  11  12  13  14  15  16  17  18  
//      10              10              10
//      -10             2               -10  -9  -8  -7  -6  -5  -4  -3  -2  -1  0  1  2  
//      90              18              Invalid Input
//
/////////////////////////////////////////////////////////////