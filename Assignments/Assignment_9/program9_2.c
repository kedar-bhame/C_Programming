#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DollarToINR
// Description      :   convern Dollor into INR currency
// Input            :   Interger
// Output           :   Interger   
// Author           :   Kedar Anant Bhame
// Date             :   01/11/2026
//
/////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int INR = 0;
    
    INR = iNo * 70;

    return INR;
}
// Time Complexity : O(1)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      10          700
//      3           210
//      1200        84000
//
/////////////////////////////////////////////////////////////