#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    printf("Enter full name : ");
    scanf("%[^'\n']s",&Name);

    printf("Your name is %s",Name);

    return EXIT_SUCCESS;
}