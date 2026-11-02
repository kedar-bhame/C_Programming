#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name    :   KMtoMeter
// Description      :   return meter of a given kilometer
// Input            :   Interger
// Output           :   Interger   
// Author           :   Kedar Anant Bhame
// Date             :   02/11/2026
//
/////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Meter is %d",iRet);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input      Output
//----------------------------------------------------------
//      5           5000
//      12          12000
//
/////////////////////////////////////////////////////////////