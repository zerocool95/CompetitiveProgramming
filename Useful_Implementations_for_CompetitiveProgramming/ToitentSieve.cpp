//number of coprime numbers less than i .
int totient[n + 1];
for (int i = 1; i <= n; ++i) totient[i] = i;
for (int i = 2; i <= n; ++i)
 if (totient[i] == i)
  for (int j = i; j <= n; j += i)
   totient[j] -= totient[j] / i;
