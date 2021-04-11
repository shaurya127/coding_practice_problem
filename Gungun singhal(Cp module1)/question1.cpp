#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,e,f;
    float c,d,g,h;
    scanf("%d\t%d\n",&a,&b);
    scanf("%f\t%f\n",&c,&d);
    e=a+b;
    f=a-b;
    g=c+d;
    h=c-d;
    printf("%d %d\n",e,f);
    printf("%.1f %.1f\n",g,h);
    
    
    
    return 0;
}
