#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   print the number on screen from negative number to input number in incresing order
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   31/10/2026
//
/////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d  ",iCnt);
    }
    printf("\n");
}
// Time Complexity : O(2N)

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input              Output
//----------------------------------------------------------
//      5           -5  -4  -3  -2  -1  0  1  2  3  4  5  
//      3           -3  -2  -1  0  1  2  3 
//      -3          -3  -2  -1  0  1  2  3 
//
/////////////////////////////////////////////////////////////