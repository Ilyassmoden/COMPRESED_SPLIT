#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "LIBFT_h.h"
int *how_many_loop(char *str)
{
    int i = 0;
    int slen = strlen(str);
    int *arr = malloc(slen * sizeof(int)); if(!arr) return NULL;
    int chek[256] = {0};
    int  x = 0;
    while(str[i])
    {
        if(chek[str[i]] == 0)
        {
            char c = str[i];
            int j  = i;
            int len = 0;
            while(str[j])
            {
                if(str[j] == c)
                {
                    len++;
                }
                j++;
            }
            arr[x] = len;
            x++;
            chek[str[i]] = 1;
        }
        i++;
    }
    int *temp;
    temp = realloc(arr,x *sizeof(int)); if(temp) arr = temp;
    return arr;
}