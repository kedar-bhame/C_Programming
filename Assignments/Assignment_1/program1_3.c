#include<stdio.h>
//////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Display number 5 to 1
// Input            :   Void
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   18/10/2026
//
//////////////////////////////////////
void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}