#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Number
// Description      :   Display small, medium, large 
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   01/11/2026
//
/////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("small");
    }
    else if((iNo > 50) && (iNo <= 100))
    {
        printf("medium");
    }
    else
    {
        printf("large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input           Output
//----------------------------------------------------------
//      -20         small
//      0           small
//      45          small
//      50          small
//      51          medium
//      83          medium
//      100         medium
//      101         large
//      10000       large
//
/////////////////////////////////////////////////////////////