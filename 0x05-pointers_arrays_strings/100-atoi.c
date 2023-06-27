#include "main.h"

/**
 * _atoi - This project converts a string to integer
 * @s: string
 *
 * Return:int
 */
int _atoi(char *s)
{
        int a, b, c, le, m, dig;

        a = 0;
        b = 0;
        c = 0;
        le = 0;
        m = 0;
        dig = 0;

        while (s[le] != '\0')
                le++;

        while (a < le && m == 0)
        {
                if (s[a] == '-')
                        ++b;

                if (s[a] >= '0' && s[a] <= '9')
                {
                        dig = s[a] - '0';
                        if (b % 2)
                                dig = -dig;
                        c = c * 10 + dig;
                        m = 1;
                        if (s[a + 1] < '0' || s[a + 1] > '9')
                                break;
                        m = 0;
                }
                a++;
	}
	if(m == 0)
		return(0);
	return(c);
}
