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
    int iNo = 0;
    for(int i = 1; i <= iRow; i++)
    {
        iNo = 1;
        for(int j = 1; j <= iCol; j++, iNo++)
        {
            printf("%d\t",iNo);
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
//      Input1= 4     Input2= 3       Output= 
//----------------------------------------------------------
//      1       2       3
//      1       2       3
//      1       2       3
//      1       2       3
//
/////////////////////////////////////////////////////////////