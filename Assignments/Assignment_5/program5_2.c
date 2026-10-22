#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CheckLeapYear
// Description      :   Display leap year or not from input year
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   21/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{   
    if(iYear <= 0)
    {
        printf("Invalid Year");
    }
    else if((((iYear % 4) == 0) && ((iYear % 100) != 0 )) || ((iYear % 400) == 0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year : \n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input      Output
//----------------------------------------------------------
//      2024          Leap Year
//      1900          Not a Leap Year
//      2000          Leap Year
//      -2024         Invalid Year
//      0             Invalid Year
//
/////////////////////////////////////////////////////////////

