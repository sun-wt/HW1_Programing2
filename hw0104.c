#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"hw0104.h"

int main() 
{
    char Json[2048];
    printf("Please enter the JSON string:\n");
    fgets(Json,2047,stdin);
    
    while(1)
    {
        char key[1024];
        printf("Choice (0:Exit,1:Get) : ");
        int choice;  
        scanf("%d",&choice);
        int c;
        while((c=getchar())!='\n'&&c!=EOF);
        if(choice==0)
        {
            printf("Bye\n");
            exit(0);
        }
        else if(choice==1)
        {
            printf("Key: ");
            fgets(key,1023,stdin);
            func01(Json,key);
        }
        
    }
    return 0;
}