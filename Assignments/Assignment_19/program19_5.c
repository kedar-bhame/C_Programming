#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Display the pattern on screen
// Input            :   Integer, Integer
// Output           :   Void
// Author           :   Kedar Anant Bhame
// Date             :   09/11/2026
//
//////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j < i; j++)
        {
            printf(" \t");           
        }
        for(int k = i; k <= iCol; k++)
        {
            printf("%d\t",k);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1, &iValue2);


    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1= 4     Input2= 4       Output= 
//----------------------------------------------------------
//      1       2       3       4
//              2       3       4
//                      3       4
//                              4
//  
/////////////////////////////////////////////////////////////