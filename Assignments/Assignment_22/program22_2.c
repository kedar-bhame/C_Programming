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
    for(int i = iNo; i >= 1; i--)
    {
        printf("%d\t#\t",i);
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
//      5           5       #       4       #       3       #       2       #       1       #
//
/////////////////////////////////////////////////////////////