#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CheckEvenOdd
// Description      :   Display even, odd number base on input number
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   21/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iValue)
{
    if((iValue %2) == 0)
    {
        printf("Even Number ");
    }
    else
    {
        printf("Odd Number ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////
//          Test
//------------------------------------------
//      Input      Output
//----------------------------------------- 
//      24          Even Number
//      17          Odd Number
//
/////////////////////////////////////////////