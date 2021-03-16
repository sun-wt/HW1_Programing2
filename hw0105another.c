#include"mystring.h"
char *mystrchr(const char *s,int c)
{
    while(*s!='\0')
    {
        if(*s!=c)
        {
            s++;
        }
        else
        {
            return s;
        }
    }
    return NULL;
}

char *mystrrchr(const char *s,int c)
{
    while(*s!='\0')
    {
        s++;
    }
    while(s!=0)
    {
        s--;
        if(*s==c)
        return s;
    }
    return NULL;
}

size_t mystrspn(const char *s,const char *accept)
{
    size_t count=0;
    while(*accept!='\0')
    {
        if(*s==*accept)
        {
            count++;
            s++;
            accept++;
        }
        else
        {
            break;
        }
    }
    if(count!=0)
    {
        return count;
    }  
    else
    {
        return 0;
    }  
}

size_t mystrcspn(const char *s,const char *reject)
{
    size_t count=0;
    while(*reject!='\0')
    {
        if(*s!=*reject)
        {
            count++;
            s++;
        }
        else
        {
            break;
        }
    }
    if(count!=0)
    {
        return count;
    }  
    else
    {
        return 0;
    }  
}

char *mystrpbrk(const char *s,const char *accept)
{
    while(*s!='\0')
    {
        while(*accept!='\0')
        {
            if(*s!=*accept)
            {
                s++;
            }
            else
            {
                return s;
            }
        }
        accept++;
    }
    return 0;
}

char *mystrstr(const char *haystack,const char *neddle)
{
    while(*haystack!='\0')
    {
        if(*haystack!=*neddle)
        {
            haystack++;
        }
        else
        {
            return haystack;
        }
    }
    return NULL;
}

char *mystrtok(char *str,const char *delim)
{
    char *s=str;
    str=s+mystrspn(s,delim);
    s=str+mystrcspn(str,delim);
    if(s==str)
    {
        return NULL;
    }
    if(*s)
    {
        *s='\0';
        s++;
    } 
    return str;
}