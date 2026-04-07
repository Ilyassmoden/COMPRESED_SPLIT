#include <stdio.h>
#include <stdlib.h>
#include "LIBFT_h.h"
char **int_str(int *arr,int size)
{
    int i = 0;
    char **str = malloc((size + 1) *sizeof(char *));
    if(!str)
    {
        return NULL;
    }
    while(i < size)
    {
        str[i] = __itoa(arr[i]);
        i++;
    }
    str[i] = NULL;
    return str;
}