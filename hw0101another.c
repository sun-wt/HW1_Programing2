#include"hw0101.h"
void check(char *Hex)
{
    if(strlen(Hex)<=3)
    {
        printf("error!\n");
        exit(0);
    }
    if(strlen(Hex)%2!=1)
    {
        printf("error!\n");
        exit(0);
    }
    if(Hex[strlen(Hex)-3]=='0'&&Hex[strlen(Hex)-2]=='0')
    {}
    else
    {
        printf("error!\n");
        exit(0);
    }
    char H[640][2];
    int ans[640][2];
    int hex[640];
    
    for(int i=0;i<(strlen(Hex)-1)/2-1;i++)
    {
        H[i][0]=Hex[i*2];
        H[i][1]=Hex[i*2+1];
    }
    /*for(int i=0;i<(strlen(Hex)-1)/2-1;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%c ",H[i][j]);
        }
        printf("\n");
    }*/
    
    for(int i=0;i<(strlen(Hex)-1)/2-1;i++)
    {
        if((H[i][0]-48)>7||(H[i][0]-48)<2)
        {
            printf("error!\n");
            exit(0);
        }
        if(H[i][1]<48||H[i][1]>102)
        {
            printf("error!\n");
            exit(0);
        }
        else if(H[i][1]>57&&H[i][1]<65)
        {
            printf("error!\n");
            exit(0);
        }
        else if(H[i][1]>70&&H[i][1]<97)
        {
            printf("error!\n");
            exit(0);
        }
    }
    for(int i=0;i<(strlen(Hex)-1)/2-1;i++)
    {
        ans[i][0]=H[i][0]-48;
        ans[i][1]=H[i][1]-48;
        if(ans[i][1]>10)
        {
            if(ans[i][1]>30)
            ans[i][1]=H[i][1]-87;
            else
            ans[i][1]=H[i][1]-55;
        }
    }
    for(int i=0;i<(strlen(Hex)-1)/2-1;i++)
    {
        hex[i]=ans[i][0]*16+ans[i][1];
    }
    for(int i=0;i<(strlen(Hex))/2;i++)
    {
        printf("%c",hex[i]);
    }
    printf("\n");
}