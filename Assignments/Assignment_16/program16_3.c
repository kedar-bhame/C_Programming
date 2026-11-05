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
    char ch = '\0';

    ch = 'A';
    for(int i = 1; i <= iRow; i++, ch++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            printf("%c  ",ch);
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
//      Input1= 3     Input2= 5       Output= 
//----------------------------------------------------------
//     A  A  A  A  A  
//     B  B  B  B  B  
//     C  C  C  C  C  
//
/////////////////////////////////////////////////////////////