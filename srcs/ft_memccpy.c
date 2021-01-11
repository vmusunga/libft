/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 11:45:32 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/11 17:37:37 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char*)src)[i] != ((unsigned char)c))
        {
            ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
            i++;
        }
        else
        {
            ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
            return (&dst[i]);
        }
    }
    return (0);
}

int main()
{
   const char * text = "Ceci est ma première phrase. Et ceci est ma seconde";
   size_t length = strlen( text );
   // On essaye de trouver la première phrase dans le texte.
   char firstSentence[ length ];
   char * res = ft_memccpy( firstSentence, text, '.', length );
   // On affiche le resultat.
   if ( res != NULL ) {
      printf( "Une phrase entière a été trouvée.\n" );
      printf( "\t%s\n", firstSentence );
   } else {
      printf( "Aucune phrase entière trouvée.\n" );
   }
   return EXIT_SUCCESS;
}

/*
int main( void )
{
    char* msg = "This is the string: not copied";
    char buffer[80];

    memset( buffer, '\0', 80 );
    ft_memccpy( buffer, msg, ':', 80 );

    printf( "%s\n", buffer );
    
    return EXIT_SUCCESS;
}*/