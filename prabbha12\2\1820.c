#include <stdio.h>
#include<conio.h>
int main() {
int n,i,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum=n*i;
    printf("%d*%d=%d\n",n,i,sum);
    getch();
    return 0;
}
}
