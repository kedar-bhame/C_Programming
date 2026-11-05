#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Display the pattern of characters on screen
// Input            :   Integer, Integer
// Output           :   Void
// Author           :   Kedar Anant Bhame
// Date             :   05/11/2026
//
//////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    for(int i = iRow; i >= 1; i--)
    {
        for(int j = 1; j <= iCol; j++)
        {
            printf("%d  ",i);
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
//      Input1= 4     Input2= 5       Output= 
//----------------------------------------------------------
//      4  4  4  4  4  
//      3  3  3  3  3  
//      2  2  2  2  2  
//      1  1  1  1  1  
//
/////////////////////////////////////////////////////////////