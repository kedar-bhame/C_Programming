#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DisplayConvert
// Description      :   Display capital or small letter base on input letter
// Input            :   char
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   20/10/2026
//
/////////////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if(cValue >= 97)
    {
        printf("%c",(cValue - 32));
    } 
    else if(cValue < 95) 
    {
        printf("%c",(cValue + 32));
    }  
}

int main()
{
    char cValue = '\0';

    printf("Enter charactor : \n");

    scanf("%c",&cValue);

    DisplayConvert(cValue);
    
    return 0;
}

/////////////////////////////////////////////
//          Test
//------------------------------------------
//      Input1      Output
//----------------------------------------- 
//      a           A
//      A           a
//      z           Z
//      Z           z
//
/////////////////////////////////////////////