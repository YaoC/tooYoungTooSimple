#include <stdio.h>
void f(char**p){
      *p +=2;
}
//  output: 3
int main()
{
    char *a[] = {"123","abc","456"},**p;
    p = a;
    printf("%s\r\n",p);
    f(p);
    printf("%s\r\n",*p);
}