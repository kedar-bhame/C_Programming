#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   OddDisplay
// Description      :   print the only odd number on screen up to number
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   31/10/2026
//
/////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    if(iNo < 0)
    {
        printf("Invalid Input");
        return;
    }

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d  ",iCnt);
        }
    }
    printf("\n");
}
// Time Complexity : O(N)

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input              Output
//----------------------------------------------------------
//      18          1  3  5  7  9  11  13  15  17  
//      23          1  3  5  7  9  11  13  15  17  19  21  23  
//      -5          Invalid Input
//
/////////////////////////////////////////////////////////////