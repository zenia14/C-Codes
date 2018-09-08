#include<stdio.h>
int main ()
{
int i,j ;
printf("number=");
scanf("%d",&j);
printf("\n");
for(i=1;i<=10;i++)
{
printf("%d X %d = %d", i,j,i*j);
}
return 0;
}
