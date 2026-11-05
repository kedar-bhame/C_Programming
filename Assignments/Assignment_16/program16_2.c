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

    for(int i = 1; i <= iRow; i++)
    {
        if((i % 2) == 0)
        {
            ch = 'a';
        }
        else
        {
            ch = 'A';
        }
        for(int j = 1; j <= iCol; j++, ch++)
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
//      Input1= 4     Input2= 4       Output= 
//----------------------------------------------------------
//      A  B  C  D  
//      a  b  c  d  
//      A  B  C  D  
//      a  b  c  d 
//
/////////////////////////////////////////////////////////////