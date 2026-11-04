#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////
//
// Function Name    :   Percentage
// Description      :   calculate percentage on two numbers
// Input            :   Integer, Integer
// Output           :   Float
// Author           :   Kedar Anant Bhame
// Date             :   04/11/2026
//
//////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{
    float fAns = 0.0f;

    if(iNo1 == 0)
    {
        return 0;
    }

    fAns = (float)iNo1 / (float)iNo2;

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter total marks : ");
    scanf("%d",&iValue1);

    printf("Enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %f\n",fRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input1      Input2       Output
//----------------------------------------------------------
//      1000        745         1.342282
//
/////////////////////////////////////////////////////////////