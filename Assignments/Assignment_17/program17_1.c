#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Display the pattern of numbers on screen
// Input            :   Integer, Integer
// Output           :   Void
// Author           :   Kedar Anant Bhame
// Date             :   09/11/2026
//
//////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iNo = 1;
    for(int i = iRow; i >= 1; i--)
    {
        for(int j = 1; j <= iCol; j++)
        {
            printf("%d  ",iNo++);
            if(iNo == 10)
            {
                iNo = 1;
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
//      Input1= 4     Input2= 4       Output= 
//----------------------------------------------------------
//      1  2  3  4  
//      5  6  7  8  
//      9  1  2  3  
//      4  5  6  7 
//
/////////////////////////////////////////////////////////////