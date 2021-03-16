#include"hw0104.h"
void func02(char *Json,char *key)
{
    char *token;
    int count=0;
    char s[2]=",";
    char t[2]="\"";        
    token=strtok(Json,s);
    while(token!=NULL)
    {
        char *y=strchr(token,'"');
        y++;
        if(strncmp(y,key,strlen(key)-1)==0)
        {
            char *ans=strchr(y,':');
            char *ans1=strchr(ans,'"');
            if(ans1)
            {
                printf("Value:%s\n",strtok(ans1,t));
            }
            else
            {
                printf("Value: %s\n",strtok(ans,t));
            }
        }
        token=strtok(NULL,s);
    }    
}

int func03(char *Json,char *key)
{
    char *token;
    char *c;
    char s[2]=",";
    char t[2]="\"";        
    token=strtok(Json,s);
    while(token!=NULL)
    {
        char *y=strchr(token,'"');
        y++;
        if(strncmp(y,key,strlen(key)-1)==0)
        {
            return 1;
        }
        token=strtok(NULL,s);
    }
    return 0;
}

void func01(char *Json,char *key)
{
    if(strchr(key,'.')!=NULL)
    {
        char *token;
        char *temp;
        char s[2]=".";
        token=strtok(key,s);
        
        while(token!=NULL)
        {
            temp=token;
            token=strtok(NULL,s);
        }
        func02(Json,temp);
    }
    else
    {
        func02(Json,key);
    }
}