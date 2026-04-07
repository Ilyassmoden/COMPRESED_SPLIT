#include "LIBFT_h.h"
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char str[] = "aabbddjjjccc";
    char **string = string_compression(str);
    if(!string)
    {
        return 1;
    }
    int i = 0;
    while(string[i] != NULL)
    {
        printf("str[%d]--->%s\n",i,string[i]);
        i++;
    }
    i--;
    while(i >= 0)
    {
        free(string[i]);
        i--;
    }
    free(string);
   

}