#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   FindGreatest
// Description      :   Display greatest one number between three numbers from input
// Input            :   Interger, Interger, Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   21/10/2026
//
/////////////////////////////////////////////////////////////////////////

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if ((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("%d is Greatest",iFirst);
    }
    else if ((iSecond >= iFirst) && (iSecond >= iThird))
    {
        printf("%d is Greatest",iSecond);
    }
    else
    {
        printf("%d is Greatest",iThird);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three number : \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1      Input2      Input3      Output
//----------------------------------------------------------
//      10          50          30          50 is Greatest
//      40          40          20          40 is Greatest
//      15          15          15          15 is Greatest
//
/////////////////////////////////////////////////////////////

