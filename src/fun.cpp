unsigned int faStr1(const char *str)
{int i = 0;
    int kol = 0;
	bool slov = false;
	bool chis = false;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && slov == false)
		{
			slov = true;
		}
		if (slov && str[i] >= 48 && str[i] <= 57)
		{
			chis = true;
		}
		if (str[i] == ' ' && slov)
		{
			if (!chis)
			{
				kol++;
			}
			slov = false;
			chis = false;
		}
		i++;
	}
	if (slov && !chis)
	{
		kol++;
	}
    return kol;
}
unsigned int faStr2(const char *str)
{int i = 0;
	int kol = 0;
	bool slov = false;
	bool zag = false;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && slov == false)
		{
			slov = true;
			if (str[i] >= 65 && str[i] <= 90)
			{
				zag = true;
			}
		}
		else
		{
			if (zag && !(str[i] >= 97 && str[i] <= 122) && str[i] != ' ')
			{
				zag = false;
			}
		}
		if (str[i] == ' ' && slov)
		{
			if (zag)
			{
				kol++;
			}
			slov = false;
			zag = false;
		}
		i++;
	}
	if (slov && zag)
	{
		kol++;
	}
    return kol;
}
unsigned int faStr3(const char *str)
{int i = 0;
	bool slov = false;
	double buk = 0;
	double slova = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && slov == false)
			slov = true;
		if (str[i] == ' ' && slov)
		{
			slova++;
			slov = false;
		}
		else
			if (slov)
				buk++;
		i++;
	}
	if (slov)
	{
		slova++;
	}
	if (slova != 0)
	{
		return round(buk / slova);
	}
    return 0;
}
