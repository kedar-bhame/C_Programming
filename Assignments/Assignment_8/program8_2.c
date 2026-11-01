#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Display
// Description      :   Display word of only single digit 
// Input            :   Interger
// Output           :   Void   
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

    switch(iNo)
    {
        case 0:
        {
            printf("Zero");
            break;
        }
        case 1:
        {
            printf("One");
            break;
        }
        case 2:
        {
            printf("Two");
            break;
        }
        case 3:
        {
            printf("Three");
            break;
        }
        case 4:
        {
            printf("Four");
            break;
        }
        case 5:
        {
            printf("Five");
            break;
        }
        case 6:
        {
            printf("Six");
            break;
        }
        case 7:
        {
            printf("Seven");
            break;
        }
        case 8:
        {
            printf("Eight");
            break;
        }
        case 9:
        {
            printf("Nine");
            break;
        }
        default:
        {
            printf("Invalid Number");
        }
    }   //  End of switch
}   // End of Display

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}   //  End of main

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input           Output
//----------------------------------------------------------
//          5           Five
//          4           Four
//          1           One
//          0           Zero
//          -3          Three
//          12          Invalid Number
//
/////////////////////////////////////////////////////////////