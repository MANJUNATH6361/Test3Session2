
#include<stdio.h>
typedef struct _fraction
{
int num,den;
} Fraction;

int gcd(int a, int b)
{
  int t;
  while(b!=0)
    {
      t=b;
      b=a%b;
      a=t;
    }
  return a;
}
Fraction input_fraction()
{
  Fraction a;
  printf("enter the no of first num and den :");
  scanf("%d %d",&a.num,&a.den);
  return a;
    
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
 Fraction sum;
  sum.num=f1.num*f2.den+f2.num*f1.den;
  sum.den=f1.den*f2.den;
  int g=gcd(sum.num,sum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
  
  
}
void output(Fraction f1, Fraction f2,Fraction sum)
{
  sum=add_fractions(f1,f2);
  printf("the add of two fractions is %d/%d",sum.num,sum.den);
}
 int main()
{
 Fraction f1,f2,f3,sum;
  f1=input_fraction();
  f2=input_fraction();
  output(f1,f2,sum);
  }