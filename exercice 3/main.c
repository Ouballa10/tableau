#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i;
printf("dkhel n\nn = ");

scanf("%d",&n);
int T[n];
for (i=0;i<n ;i++)
{

    printf("T[%d]=",i+1);
    scanf("%d",&T[i]);
}
int f ,r ;
printf("enter la facteur de multiplication  ");
scanf("%d",&f);
for ( i=0 ;i<T[i];i++){
    r =T[i]*f ;
    printf("%d\n",r);
}
    return 0;
}
