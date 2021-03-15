#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"hw0102.h"

int check(char *Ori,char *Key);
void func(char *Ori,char *Key,char *New);

int main()
{
    char Ori[1024],ori[1024];
    char Key[128];
    char New[128];
    
    printf("Please enter the original text :\n");
    fgets(Ori,1023,stdin);
    printf("\n");

    strcpy(ori,Ori);
    printf("Keyword :\n");
    fgets(Key,127,stdin);
    printf("\n");

    if(check(Ori,Key)==1)
    return 0;
    printf("New word :\n");
    fgets(New,127,stdin);
    printf("\n");
    
    func(ori,Key,New);
    return 0;
}