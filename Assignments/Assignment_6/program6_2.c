#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CheckAdmission
// Description      :   Display Eligible for admission or not
// Input            :   Float, Interger
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   21/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckAdmission(float fMarks, int iAge)
{   
    if((iAge < 0) || (fMarks < 0) || (fMarks > 100))
    {
        printf("Invalid Input");
    }
    else if((fMarks >= 60) && (iAge >= 17))
    {
        printf("Eligible for Admission");
    }
    else
    {
        printf("Not Eligible");
    }

}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age : \n");
    scanf("%f %d",&fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1      Input2          Output
//      Marks       Age             Eligiblity
//----------------------------------------------------------
//      75          18          Eligible for Admission
//      55          19          Not Eligible
//      80          16          Not Eligible
//      -82         18          Invalid input
//      105         22          Eligible for Admission
//      75          -21         Eligible for Admission
//
/////////////////////////////////////////////////////////////

