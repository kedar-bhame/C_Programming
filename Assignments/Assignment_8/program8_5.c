#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   TableRev
// Description      :   Display table of a number in reverse order
// Input            :   Interger
// Output           :   void   
// Author           :   Kedar Anant Bhame
// Date             :   01/11/2026
//
/////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    //  Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d  ",(iNo * iCnt));
    }
    
}
// Time Complexity : O(1)

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input           Output
//----------------------------------------------------------
//      2           20  18  16  14  12  10  8  6  4  2  
//      5           50  45  40  35  30  25  20  15  10  5
//      -5          50  45  40  35  30  25  20  15  10  5
//
/////////////////////////////////////////////////////////////