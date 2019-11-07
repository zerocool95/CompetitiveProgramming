ll mulmod(ll a, ll b){
	ll ans = 0;
	while(b){
		if(b & 1)
			ans += a;
		a += a;
		if(ans > mod)	ans -= mod;
		if(a > mod)	a -= mod;
		b /= 2;
	}
	return ans;
}


ll powmod(ll a, ll b){
	ll ans = 1;
	while(b){
		if(b & 1)
			ans = mulmod(ans, a);
		a = mulmod(a, a);
		if(ans > mod)	ans -= mod;
		if(a > mod)	a -= mod;
		b /= 2;
	}
	return ans;
}
