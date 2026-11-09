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
    char ch = '\0';
    for(int i = 1; i <= iRow; i++)
    {
        if((i % 2) != 0)
        {
            ch = 'a';
        }
        else
        {
            ch = '1';
        }
        for(int j = 1; j <= iCol; j++)
        {
            printf("%c  ", ch++);
            
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
//      a  b  c  d  e  
//      1  2  3  4  5  
//      a  b  c  d  e  
//      1  2  3  4  5 
//
/////////////////////////////////////////////////////////////