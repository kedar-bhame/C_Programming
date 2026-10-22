#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CheckNumber
// Description      :   Display positive, negative, zero number base on input number
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   21/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive Number ");
    }
    else if(iValue < 0)
    {
        printf("Negative Number ");
    }
    else if(iValue == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Invalid Number ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////
//          Test
//------------------------------------------
//      Input      Output
//----------------------------------------- 
//      15          Positive Number
//      -8          Negative Number
//      0           Zero
//
/////////////////////////////////////////////