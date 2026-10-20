#include<stdio.h>

//////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Display number based on input 
// Input            :   Interger, Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   20/10/2026
//
//////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    // Updater
    if(iFrequency < 0){
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}

/////////////////////////////////////////////
//          Test
//------------------------------------------
//      Input1      Input2      Output
//----------------------------------------- 
//      12          5           12  12  12  12  12
//      -2          3           -2  -2  -2
//      21          3           21  21  21
//      -2          0           
//
/////////////////////////////////////////////