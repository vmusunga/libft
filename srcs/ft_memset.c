#include "libft.h"

char*   ft_memset(void *b, int c, size_t len)
{
    size_t i;
    
    i = 0;
    while (i < len)
    {
        ((unsigned char*)b)[i] = c;
        i++;
    }
    return (b);
}

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'$',7);
   puts(str);
   
   return(0);
}