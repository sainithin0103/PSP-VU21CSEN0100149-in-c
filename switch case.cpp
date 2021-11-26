# include <stdio.h>
int main()
{
 int a,b,c,d,e,f,k;
 float g,h,i;
 scanf("%d",&k);
 switch(k)
{
  case 1:
  a=10;
  b=20;
  c=a+b;
  printf("Value after the addition %d",c);
  break;
  
  case 2:
  d=20;
  e=10;
  f=d-e;
  printf("Value after difference %d",f);
  break;
  
  case 3:
  g=60;
  h=30;
  i=g/h;
  printf("Value after division %d",i);
  break;
}
 return 0;
}
