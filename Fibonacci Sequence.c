#include<stdio.h>
int fibonacci(n)
{ if (n==0||n==1)
      return 1;
  else 
      return fibonacci(n-1)+fibonacci(n-2);
      
}
void main ()
{int n;
	printf("saisir n:");
	scanf("%d",&n);
	printf("la suite de fibonacci de U%d est \n %d ",n ,fibonacci(n));
}
