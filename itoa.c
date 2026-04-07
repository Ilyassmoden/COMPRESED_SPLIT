#include <stdlib.h>
int git_len(long n)
{
    int len  = 0;
    if(n <= 0) len++;
    while(n != 0)
    {
         n /= 10;
         len++;
    }
    return len;
}
#include "LIBFT_h.h"
char *__itoa(long n)
{
    int len = git_len(n);
    char *str = malloc((len + 1)); if(!str) return NULL;
    str[len] = '\0';
    if(n == 0)
    {
        str[0] = '0';
    }
    if(n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    while(n > 0)
    {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }
    return str;
}