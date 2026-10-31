#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   print the number on screen from zero to input number in incresing order
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   31/10/2026
//
/////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        printf("Invalid Input");
        return;
    }

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d  ",iCnt);
    }
    printf("\n");
}
// Time Complexity : O(N)

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
//      5           1  2  3  4  5
//      3           1  2  3 
//      -3          Invalid Input
//
/////////////////////////////////////////////////////////////