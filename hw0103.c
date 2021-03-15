#include <stdio.h>
#include "hw0103.h"

char *pStr01,*pStr02;
void print_answers();
void func()
{
    char *temp =pStr01;
    pStr01 = pStr02;
    pStr02 = temp;    
}
int main()
{
    func();
    print_answers();
    return 0;
}