#include <bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define vp vector<pair<ll,ll> >
#define se second
#define fi first
#define vi vector<ll>
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define fab(i,a,b) for(int i=a;i<=b;i++)
#define inp(n,a) for(int i=0;i<n;i++){cin>>a[i];}
#define FASTER std::ios::sync_with_stdio(false)
#define DEBUG(x) cout<<#x<<" = "<<x<<endl
#define MOD 10007
#define strToInt(x,z) istringstream y(x);y>>z  //(string,integer)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b / __gcd(a,b);

using namespace std;

set <int> gg;
void primeFactors(int n)
{
    while (n%2 == 0)
    {
        gg.insert(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            gg.insert(i);
            n = n/i;
        }
    }
    if (n > 2)
        gg.insert(n);
}

int main()
{
		int n;
		cin>>n;
		int ans = n;
		gg.clear();
		primeFactors(n);

		for(auto x : gg)
		{
			ans*=(1.0 - (1.0 / (float) x));
		}
	cout<<ans<<endl;
}
