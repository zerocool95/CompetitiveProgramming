string rot(string s, int k)
{
	int lens = s.length();
	char ss[lens];
	rep(i,lens)
	{
		ss[(i+k)%lens] = s[i];
	}
	string ret(ss);
	ret = ret.substr(0,lens);
	return ret;
}


string rot(string s)
{
	string t = s;
	reverse(all(t));
	char gg = t[t.length()-1];
	t.pop_back();
	reverse(all(t));
	t += gg;
	return t;
}
