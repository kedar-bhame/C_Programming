#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Display the pattern on screen
// Input            :   Integer, Integer
// Output           :   Void
// Author           :   Kedar Anant Bhame
// Date             :   10/11/2026
//
//////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= (iCol - (i - 1)); j++)
        {
            if(((i + j) == iCol + 1) || (i == 1) || (j ==1))
            {
                
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        for(int k = 1; k < i; k++)
        {
            if((i == iRow) || (i == (k + 1)))
            {
                
                printf("*\t");
            }
            else
            {
                printf("$\t",i,k);
            }
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
//      Input1= 6     Input2= 6       Output= 
//----------------------------------------------------------
//      *       *       *       *       *       *
//      *       #       #       #       *       *
//      *       #       #       *       $       *
//      *       #       *       $       $       *
//      *       *       $       $       $       *
//      *       *       *       *       *       *
//  
/////////////////////////////////////////////////////////////