#include<stdio.h>

//////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Display "*" no. of times depends on input parameter
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   20/10/2026
//
//////////////////////////////////////

void Display(int iNo)
{  
    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}