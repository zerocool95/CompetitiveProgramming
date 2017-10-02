#include <bits/stdc++.h>

#define scan(x) scanf("%d",&x)
#define scan2(x,y) scanf("%d%d",&x,&y)
#define scan3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define FASTER std::ios::sync_with_stdio(false)
#define DEBUG(x) cout<<#x<<" = "<<x<<endl

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
#define fab(i,a,b) for(ll i=a;i<=b;i++)
#define inp(n,a) for(ll i=0;i<n;i++){cin>>a[i];}
#define strToInt(x,z) istringstream y(x);y>>z  //(string,integer)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b / __gcd(a,b);
#define MOD 1000000007
#define pi 3.14159265

using namespace std;

const int INF = 2147483647;
const int MAXN = 50005;
int d[MAXN], n; // d[i] = shortest dist of i from source , n = number of nodes
vector<pair<int,int> > graph[MAXN]; // <dist , node>

void dijkstra()
{
	for(int i = 1 ; i <=n ; i++)d[i] = INF;
	d[1] = 0;
	
	priority_queue< pair<int,int> , vector<pair<int, int>> , greater<pair<int,int>> > pq; //min-heap

	pq.push({0,1});

	while(!pq.empty())
	{
		pair<int,int> p = pq.top();
		pq.pop();

		int u = p.second;
		int dist = p.first;
		
		for(pair<int,int> x : graph[u])
		{
			int v = x.second;
			int newDist = x.first + dist;

			if(newDist < d[v])
			{
				d[v] = newDist;
				pq.push({newDist,v});
			}
		}
	}

}