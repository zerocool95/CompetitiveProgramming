int circularDiff(char f,char s)
{
	return min(abs(f - s),26 - abs(f - s));
}
