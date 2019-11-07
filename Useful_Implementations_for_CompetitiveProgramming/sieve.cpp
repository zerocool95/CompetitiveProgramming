//isPrime[i] = 1 if "i" is prime
bool isPrime[1000010];
void sieve()
{
	memset(isPrime,true,sizeof(isPrime));
	isPrime[0] = 0;
	isPrime[1] = 0;
	for(int i = 2; i < 1000001; i++)
	{
		if(isPrime[i])
		{
			for(int j = 2; j< 1000001 and i*j < 1000001; j++)
			{
				isPrime[i*j] = false;
			}
		}
	}
}
