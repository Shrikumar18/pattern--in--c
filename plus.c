#include<stdio.h>// plus pattern//

int main()
{
int i,j;
for(i=1;i<=(5*2-1);i++)
{
if(i==5)
{
for(j=1;j<=(5*2-1);j++)
{
printf("*");
}
printf(" ");
}
else
{
for(j=1;j<=5-1;j++)
{
printf(" ");
}
printf("*");
}
printf("\n");
}
return 0;
}

