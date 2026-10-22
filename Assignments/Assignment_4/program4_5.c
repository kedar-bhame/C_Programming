#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CheckDivisibility
// Description      :   Display input number is divisible by 5 or not
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   21/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckDivisibility(int iValue)
{
    if ((iValue % 5) == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////
//                  Test
//------------------------------------------------------
//      Input       Output
//------------------------------------------------------
//      45          Divisible by 5
//      23          Not Divisible by 5
//
////////////////////////////////////////////////////////