#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CheckTriangle
// Description      :   Display Triangle valid or not 
// Input            :   Float, Float, Float
// Output           :   Void   
// Author           :   Kedar Anant Bhame
// Date             :   22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{   
    if(((iSide1 > 0) && (iSide2 > 0) && (iSide3 > 0)) && (((iSide1 + iSide2) > iSide3) && ((iSide2 + iSide3) > iSide1) && ((iSide1 + iSide3) > iSide2)))
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }

}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides : \n");
    scanf("%d %d %d",&iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//     Input1      Input2      Input3      Output
//----------------------------------------------------------
//      3           4           5           Valid Triangle
//      1           2           3           Invalid Triangle
//      0           4           5           Invalid Triangle
//
/////////////////////////////////////////////////////////////

