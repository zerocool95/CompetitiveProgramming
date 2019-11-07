vector<string> split(string s)
{
	vector<string> gg; 
	int prev = 0;
	for(int i =0; i < s.length(); i++)
	{
		if(s[i]==';' or s[i]==',')
		{
			gg.pb(s.substr(prev, i-prev));
			prev = i+1;
		}
	}
	if(prev != s.length())gg.pb(s.substr(prev,s.length() - prev));
	else
		gg.pb("");
	//for(string x : gg)cout << x << " "; cout << endl;
	return gg;

}
