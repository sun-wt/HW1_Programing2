#include"hw0102.h"
int check(char *Ori,char *Key)
{
    char *token;
    token=strtok(Ori," ");
    int R;
    while(token!= NULL ) 
    {
        int ret=strcmp(token,Key);
        if(ret==-10)
        {
            return 0;
        }
        R=ret;
        token= strtok(NULL," ");
    }
    if(R!=0)
    printf("The keyword is not in the string!\n");
    return 0;
}

void func(char *Ori,char *Key,char *New)
{
    char ori[1024];
    strcpy(ori,Ori);

    printf("\n");
    printf("Before : ");
    char *token1;
    token1=strtok(Ori," ");
    while(token1!= NULL ) 
    {
        int ret=strcmp(token1,Key);
        if(ret==-10||ret==0)
        {
            printf("\033[34m%s \033[0m",token1);
        }
        else
        {
            printf("%s ",token1);
        }
        token1= strtok(NULL," ");
    }
    printf("\n");
    printf("After : ");
    char *token,*replace;
    token=strtok(ori," ");
    while(token!= NULL ) 
    {
        int ret=strcmp(token,Key);
        if(ret==-10||ret==0)
        {
            printf("\033[31m%s \033[0m",New);
        }
        else
        {
            printf("%s ",token);
        }
        token= strtok(NULL," ");
    }
    
}