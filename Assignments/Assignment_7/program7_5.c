#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   MultipleDisplay
// Description      :   print the five multiple of number on screen
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   31/10/2026
//
/////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    if(iNo < 0)
    {
        printf("Invalid Input");
        return;
    }

    for(int iCnt = 1; iCnt <= 5; iCnt++)
    {
       printf("%d  ",(iNo * iCnt));
    }
    printf("\n");
}
// Time Complexity : O(1)

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input              Output
//----------------------------------------------------------
//      4           4  8  12  16  20
//      8           8  16  24  32  40    
//      -5          Invalid Input
//
/////////////////////////////////////////////////////////////