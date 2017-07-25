bool v[1000001];
int len, sp[1000001];

void Sieve(){
	for (int i = 2; i < 1000001; i += 2)	sp[i] = 2;
	for (ll i = 3; i < 1000001; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (ll j = i; (j*i) < 1000001; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}


vector <int> factorize(int k) 
{
	vector <int> ans;
	while(k>1) {
		ans.push_back(sp[k]);
		k/=sp[k];
	}
	return ans;
}

