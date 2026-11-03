#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Diaplay digits of a number
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   03/11/2026
//
/////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iDigit = 0;

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d \n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
