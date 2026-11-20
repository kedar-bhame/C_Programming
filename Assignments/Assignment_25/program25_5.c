#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   DisplaySchedule
// Description      :   Display exam timing
// Input            :   Character
// Output           :   Void
// Author           :   Kedar Anant Bhame
// Date             :   20/11/2026
//
//////////////////////////////////////

void DisplaySchedule(char ch)
{
    if((ch == 'A' || ch == 'a'))
    {
        printf("Your exam at 7 AM");
    }
    else if((ch == 'B' || ch == 'c'))
    {
        printf("Your exam at 8.30 AM");
    }
    else if((ch == 'C' || ch == 'c'))
    {
        printf("Your exam at 9.20 AM");
    }
    else if((ch == 'D' || ch == 'd'))
    {
        printf("Your exam at 10.30 AM");
    }
    else
    {
        printf("Invalid division");
    }
}

int main()
{
    char cValue = '\0';
   
    printf("Enter your division :");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input       Output
//----------------------------------------------------------
//      a           Your exam at 7 AM
//      A           Your exam at 7 AM
//      B           Your exam at 8.30 AM
//      C           Your exam at 9.20 AM
//      D           Your exam at 10.30 AM
//      E           Invalid division
/////////////////////////////////////////////////////////////
