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
    int iNo = 0;
    for(int i = 1; i <= iRow; i++)
    {
        if((i % 2) != 0)
        {
            iNo = 2;
        }
        else
        {
            iNo = 1;
        }
        for(int j = 1; j <= iCol; j++)
        {
            printf("%d  ", iNo);
            iNo = iNo + 2;
            
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
//      2  4  6  8  10  
//      1  3  5  7  9  
//      2  4  6  8  10  
//      1  3  5  7  9 
//
/////////////////////////////////////////////////////////////