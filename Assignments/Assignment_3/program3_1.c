#include<stdio.h>

//////////////////////////////////////
//
// Function Name    :   PrintEven
// Description      :   Display Even number of zero to on input number
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   20/10/2026
//
//////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    PrintEven(iValue);
    
    return 0;

}

/////////////////////////////////////////////
//          Test
//------------------------------------------
//      Input1      Output
//----------------------------------------- 
//      12          2   4   6   8   10  12
//       4          2   4
//       5          2   4
//       7          2   4   6
//
/////////////////////////////////////////////