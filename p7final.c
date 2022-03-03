#include<stdio.h>
struct_fraction
{
  int num, den;
}
typedeft_fraction fraction;
int gcb(int a, intb)
{
  int t;
  while(b! =0)
  {
    t=b:
    b=a%b;
    a=t;
  }
  return a;
  }
fraction input_fraction() 
{
  fraction f;
  printf("input a fraction\n");
  scanf("%d%d",&f,num,&f.den);
}
int main()
{
  printf("%d\n",gcd(16,24));
}