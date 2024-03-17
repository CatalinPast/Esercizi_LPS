#include <stdio.h>

int a=4,b=3,c=3;
float f1=1.1,f2=2.2,f3=3.3;
unsigned char c1='a',c2='b',c3='c';

int main (  )
{
    a+=b++;
    f1+=f2++;
    c1=++c2;

    printf("Row1 : %d %d %d \n",a,b,c);
    printf("Row2 : %f %f %f \n",f1,f2,f3);
    printf("Row3 : %c %c %c \n",c1,c2,c3);

    return 0;
}






























