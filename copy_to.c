#include <stdlib.h>
#include "LIBFT_h.h"
#include <string.h>
char **string_compression(char *str)
{
    char *char_lop = what_char_lop(str); if(!char_lop) return NULL;
    int size = strlen(char_lop);
    int *arr = how_many_loop(str); if(!char_lop) return NULL;
    char **arr1 = int_str(arr,size);
    char **string = malloc((size + 1) *sizeof(char*)); if(!string) return NULL;
    int i = 0;
    while(i < size)
    {
        int len = strlen(arr1[i]);
        len++; // for char_lop
        string[i] = malloc((len + 1) * sizeof(char));
        if(!string[i])
        {
            while(i >= 0)
            {
                free(string[i]);
                i--;
            }
            free(string);
            return NULL;
        }
        i++;
    }
        int j = 0;
        int c = 0;
        i = 0;
        while(char_lop[i])
        {
            j = 0;
            string[i][j] = char_lop[i];
            j++;
            while(arr1[i][c])
            {
                string[i][j] = arr1[i][c];
                c++;
                j++;
            }
            string[i][j] = '\0';
            i++;
            c = 0;
        }
        string[i] = NULL;
        free(char_lop);
        free(arr);
        i = 0;
        while(i < size)
        {
            free(arr1[i]);
            i++;
        }
        free(arr1);
    return string;
}