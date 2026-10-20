#include<stdio.h>

//////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Display "Hello" or "Demo" based on input paramter
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   20/10/2026
//
//////////////////////////////////////

void Display(int iNo)
{  
    if(iNo < 10)
    {
        printf("Hello");
    }
    else{
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}