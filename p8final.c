struct _fraction
{
int num,den;
};
typedef _fraction Fraction;
int find_gcd(int a, int b);
Fraction input_fraction();
void input_in_fractions(int n, Fraction f[n]);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n,Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main()
{
  Fraction f1,f2,sum;
  f1=input_fraction();
}