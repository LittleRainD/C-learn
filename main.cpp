#include "stdio.h"
#include "test.h"
//#define _MY_DEF_NUM 123

int main() {
    const int _MY_DEF_NUM_ = 123;
    float f,x=3,y=5.2;
    double c;
    int i=4,a,b;
    a=x+y;
    b=int(x+y);
    c=x+y;
    f=10/i;

    printf("y=%f,a=%d,b=%d,f=%d,x=%d,c=%f /n",y,a,b,f,x,c);
    printf("常量的应用 %d",_MY_DEF_NUM);
    return 0;
}