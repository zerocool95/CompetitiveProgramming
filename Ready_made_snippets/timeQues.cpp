
vector<string> good;

void generate_vals(int a, int b)
{
	string st;
	st += char(a / 10 + 48);
	a %= 10;
	st += char(a + 48);
	st += ":";
	st += char(b / 10 + 48);
	st += char(b % 10 + 48);
	good.push_back(st);
}


if (tp == 12)
	{
		for (int i = 1; i <= 12; i++)
		{
			for (int j = 0; j < 60; j++)
			{
				generate_vals(i, j);
			}
		}
	}
	else
	{
		for (int i = 0; i < 24; i++)
		{
			for (int j = 0; j < 60; j++)
			{
				generate_vals(i, j);
			}
		}
	}

