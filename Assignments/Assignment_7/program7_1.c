#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   print the pattern on screen
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   31/10/2026
//
/////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$  *  ");
    }
    printf("\n");
}
// Time Complexity : O(N)

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input              Output
//----------------------------------------------------------
//      5           $  *  $  *  $  *  $  *  $  *  
//      3           $  *  $  *  $  *  
//      -3          $  *  $  *  $  *  
//
/////////////////////////////////////////////////////////////