#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Table
// Description      :   Display table of a number
// Input            :   Interger
// Output           :   void   
// Author           :   Kedar Anant Bhame
// Date             :   01/11/2026
//
/////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    //  Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1; iCnt <= 10; iCnt++)
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

    Table(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input           Output
//----------------------------------------------------------
//      2           2  4  6  8  10  12  14  16  18  20  
//      5           5  10  15  20  25  30  35  40  45  50 
//      -5          5  10  15  20  25  30  35  40  45  50 
//
/////////////////////////////////////////////////////////////