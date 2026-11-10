#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Display the pattern on screen
// Input            :   Integer
// Output           :   Void
// Author           :   Kedar Anant Bhame
// Date             :   10/11/2026
//
//////////////////////////////////////

void Pattern(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        printf("#\t%d\t*\t",i);
    }
}

int main()
{
    int iValue = 0; 

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output= 
//----------------------------------------------------------
//      4           #       1       *       #       2       *       #       3       *       #       4       *
//
/////////////////////////////////////////////////////////////