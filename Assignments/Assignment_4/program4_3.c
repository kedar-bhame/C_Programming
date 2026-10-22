#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   FindGreater
// Description      :   Display Greater number between input parameter 
// Input            :   Interger, Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   21/10/2026
//
/////////////////////////////////////////////////////////////////////////

void FindGreater(int iValue1, int iValue2)
{
    if(iValue1 > iValue2)
    {
        printf("%d is Greater",iValue1);
    }
    else if(iValue1 < iValue2)
    {
        printf("%d is Greater",iValue2);
    }
    else if(iValue1 == iValue2)
    {
        printf("Both Numbers are Equal");
    }
    else
    {
        printf("Invalid input");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers : \n");
    scanf("%d %d",&iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////
//                  Test
//------------------------------------------------------
//      Input1      Input2      Output
//------------------------------------------------------
//      10          20          20 is Greater
//      50          30          50 is Greater
//      15          15          Both Numbers are Equal
//
////////////////////////////////////////////////////////