#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include"hw0101.h"

void check(char *Hex);
int main()
{
    char hex[1280];
    printf("Please enter the hex string : ");
    fgets(hex,1279,stdin);
    //printf("%s\n",hex);
    check(hex);
    return 0;
}