#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CheckVotingEligibility
// Description      :   Display Valid or Invalid age using input parameter 
// Input            :   Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   21/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckVotingEligibility(int iAge)
{
    if (iAge < 0)
    {
        printf("Invalid Age");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for Voting");
    }
    else
    {
        printf("Not Eligible for Voting");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your Age : \n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////
//                  Test
//------------------------------------------------------
//      Input       Output
//------------------------------------------------------
//      21          Eligible for Voting
//      16          Not Eligible for Voting
//      -5          Invalid Age
//
////////////////////////////////////////////////////////