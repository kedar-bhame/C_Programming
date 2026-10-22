#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CheckMultipleDivisibility
// Description      :   Display number is divisible by 3 and 5 or only 3 or only 5 or neighter from input number
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   21/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckMultipleDivisibility(int iValue)
{   
    if(((iValue % 3) == 0) && ((iValue % 5) == 0))
    {
        printf("Divisible by Both");
    }
    else if(((iValue % 3) == 0))
    {
        printf("Divisible by 3 Only");
    }
    else if(((iValue % 5) == 0))
    {
        printf("Divisible by 5 Only");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input      Output
//----------------------------------------------------------
//      15         Divisible by Both
//      9          Divisible by 3 Only
//      10         Divisible by 5 Only
//      7          Not Divisible by Either
//
/////////////////////////////////////////////////////////////

