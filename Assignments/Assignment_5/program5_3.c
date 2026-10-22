#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DisplayGrade
// Description      :   Display grade A,B,C,D,Fail from input marks
// Input            :   float
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   21/10/2026
//
/////////////////////////////////////////////////////////////////////////

void DisplayGrade(float fMarks)
{   
    if((fMarks > 100) || (fMarks < 0)) 
    {
        printf("Invalid Marks");
    } 
    else if((fMarks >= 90) && (fMarks <= 100))
    {
        printf("Grade A");
    }
    else if((fMarks >= 75) && (fMarks <= 89))
    {
        printf("Grade B");
    }
    else if((fMarks >= 60) && (fMarks <= 74))
    {
        printf("Grade C");
    }
    else if((fMarks >= 40) && (fMarks <= 59))
    {
        printf("Grade D");
    }
    else if(fMarks < 40)
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid Input");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks : \n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input      Output
//----------------------------------------------------------
//      105         Invalid Marks
//      85          Grade B
//      35          Fail
//      0           Fail
//      -61         Invalid Marks
//
/////////////////////////////////////////////////////////////

