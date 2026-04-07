#include <stdlib.h>
#include "LIBFT_h.h"
char *what_char_lop(char *str)
{
    int i = 0;
    int  chek[256] = {0};
    char *sr = malloc(256 * sizeof(char)); if (!sr) return NULL;
    int r = 0;
    while(str[i])
    {
         if(chek[(unsigned char)str[i]] == 0)
         {
            sr[r] = str[i];
            chek[(unsigned char)str[i]] = 1;
            r++;
         }
         i++;
    }
    sr[r] = '\0';
    char *temp; 
    temp = realloc(sr,(r + 1) * sizeof(char));  if(temp) sr = temp;
    return sr;
}
