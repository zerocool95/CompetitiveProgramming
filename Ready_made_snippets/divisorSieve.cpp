//divisor[i] gives number of divisors of i.
int divisors[n + 1];
for (int i = 1; i <= n; ++i)
 for (int j = i; j <= n; j += i)
  ++divisors[j];
