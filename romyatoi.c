int        ft_atoi(char *str)
{
    int digits;
    int sign;
    int i;

    digits = 0;
    sign = 1;
    i = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = sign * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        digits = digits * 10 + str[i] - '0';
        i++;
    }
    return (digits * sign);
}
