#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Display pattern of *,#
// Input            :   Interger
// Output           :   void   
// Author           :   Kedar Anant Bhame
// Date             :   01/11/2026
//
/////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    //  Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt1 = 1; iCnt1 <= iNo; iCnt1++)
    {
        printf("*  ");
    }

    for(int iCnt2 = 1; iCnt2 <= iNo; iCnt2++)
    {
        printf("#  ");
    }
    
}
// Time Complexity : O(2N)

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input           Output
//----------------------------------------------------------
//      5           *  *  *  *  *  #  #  #  #  #  
//      6           *  *  *  *  *  *  #  #  #  #  #  #  
//      -5          *  *  *  *  *  #  #  #  #  #  
//      2           *  *  #  #  
//
/////////////////////////////////////////////////////////////