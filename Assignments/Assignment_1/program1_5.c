#include<stdio.h>
//////////////////////////////////////
//
// Function Name    :   Accept
// Description      :   Display "*" 5 times
// Input            :   Void
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   18/10/2026
//
//////////////////////////////////////
void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}