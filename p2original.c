#include<stdio.h>
int input()
{
  int a;
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  int largest;
  if(a>=b && a>=c)
  largest=a;
  else if(b>=a && b>=c)
  largest=b;
  else if(c>=a && c>=b)
  largest=c;
  return largest;
}
void output(int a,int b,int c,int largest)
{
  printf("The largest no of [%d,%d,%d] = %d\n",a,b,c,largest);
}
int main ()
{
int a,b,c,l,ans;
printf("enter the three numbers\n");
a= input();
b= input();
c= input();
l= cmp(a,b,c);
output(a,b,c,l);
return 0;
}