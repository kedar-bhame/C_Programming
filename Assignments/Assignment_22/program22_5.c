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
    for(int i = 2; i <= (iNo * 2); i = i + 2)
    {
        printf("%d\t",i);
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
//      8           2       4       6       8       10      12      14      16
//
/////////////////////////////////////////////////////////////