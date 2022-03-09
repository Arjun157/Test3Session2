struct _fraction
{
int num,den;
};
typedef _fraction Fraction
Fraction input_fraction()
{
  fraction f;
  printf("enter a fraction\n");
  scan("%d",&f);
  return f;
}
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  if(f1<f2&&f1<f3)
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
