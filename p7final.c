#include<stdio.h>

struct _fraction
{
int num, den;
};

typedef struct _fraction Fraction;

  int gcd(int a, int b)
{
    int t;
    while(b != 0)
      {
        t = b;
        b = a%b;
        a = t;
      }
    return a;
  }

Fraction input_fraction()
{  Fraction f;
  printf("input a fraction\n");
  scanf("%d%d", &f.num, &f.den);
  return f;
}

fraction add_fractions(fraction f1, fraction f2)
{
  fraction sum;
  sum.num=f1.num*f2.den+f2.num*f1.den;
  sum.den=f1.den*f2.den;
  int g=gcb(sum.num, sum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum:
}
int main()
{
  Fraction f;
  f = input_fraction();
  printf("%d/%d\n", f.num, f.den);
  return 0;
}