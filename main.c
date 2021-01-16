/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 19:26:39 by vmusunga          #+#    #+#             */
/*   Updated: 2021/01/15 16:30:45 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//ft_atoi.c
int main()
{
	char *x = "-9223372036854775809";
	printf("%d\n", ft_atoi(x));
	printf("%d",atoi(x));
	return (0);
}

//ft_bzero.c 
int main () 
{
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_bzero(str,7);
   puts(str);
   
   return(0);
}

//ft_calloc.c 
int main () {
   int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)ft_calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free( a );
   
   return(0);
}

//ft_isalnum.c 
int main()
{
	char c;
	c = 'Q';
	printf("\nResult when uppercase alphabet is passed: %d", ft_isalnum(c));

	c = 'q';
	printf("\nResult when lowercase alphabet is passed: %d", ft_isalnum(c));

	c='5';
	printf("\nResult when number character is passed: %d", ft_isalnum(c));

	return 0;
}

//ft_isalpha.c 
int main()
{
	char c;
	c = 'Q';
	printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

	c = 'q';
	printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

	c='+';
	printf("\nResult when non-alphabetic character is passed: %d", ft_isalpha(c));

	return 0;
}

//ft_isascii.c 

//ft_isdigit.c 
int main()
{
    int c;
    c = 2;
    printf("\nResult when number is passed: %d", ft_isdigit(c));

    c = 'r';
    printf("\nResult when lowercase alphabet is passed: %d", ft_isdigit(c));

    c = 72;
    printf("\nResult when digit character is passed: %d", ft_isdigit(c));

    return 0;
}

//ft_isprint.c 

//ft_itoa.c 
int main()
{
	int x;
	x = 0;

	printf("%s", ft_itoa(x));
	return (0);
}

//ft_memccpy.c 
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

//ft_memchr.c 
int main () 
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}

//ft_memcmp.c
int main () 
{
   char str1[15];
   char str2[15];
   int ret;
   int ret2;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);
   ret2 = memcmp(str1, str2, 5);
	printf("MINE : %d\n", ret);
	printf("OFFICIAL : %d", ret);
   
   return(0);
}

//ft_memcpy.c
int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}

//ft_memmove.c
int main () 
{
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}

//ft_memset.c
int main () {
	char str[50];

	strcpy(str,"This is string.h library function");
	puts(str);

	ft_memset(str,'$',7);
	puts(str);
	
	return(0);
}

//ft_putchar_fd.c 

//ft_putendl_fd.c
int		main()
{
	char *ptr = "Hello";
	ft_putendl_fd(ptr, 1);
	return (0);
}

//ft_putnbr_fd.c
int main ()
{
	ft_putnbr_fd(2147483647, 1);
	return (0);
}

//ft_putstr_fd.c 
int		main()
{
	char *ptr = "Hello";
	ft_putstr_fd(ptr, 1);
	return (0);
}

//ft_split.c
int main()
{
	char **test;
	char *str = "abc-defgh-ijkl-m";
	char sep = '-';
	int x;
	int i;

	i = 0;
	x = 0;
	test = ft_split(str, sep);
	while (test[x])
	{
		ft_putstr(test[x]);
		write(1, "\n", 1);
		x++;
	}
	return(0);
}

//ft_strchr.c
int main () 
{
   const char str[] = "http://www.tutorialspoint.com\0ugyb";
   const char ch = '\0';
   char *ret;


   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}

//ft_strdup.c
int main()
{
	const char *ptr = "brrt";
	printf("%s\n",ft_strdup(ptr));
	return (0);
}

//ft_strjoin.c 

//ft_strlcat.c
int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}

//ft_strlcpy.c
int main()
{
	char *src = "abc";
	char dst[10];
	int size = 4;

	ft_strlcpy(dst, src, size);
	ft_putstr(dst);
	write(1, "\n", 1);
	return (0);
}

//ft_strlen.c 

//ft_strmapi.c
char	ft_test(int x, char c)
{
	c += 32;
	return (c);
}
int main ()
{
	char *ptr = "abcd";
	ft_strmapi(ptr, ft_test());
	return (0);
}

//ft_strncmp.c
int main()
{
	char *x;
	char *y;
	x = "aAaa";
	y = " A";
	printf("%d\n", ft_strncmp(x,y,3));
	printf("%d\n", strncmp(x,y,3));
	return (0);
}

//ft_strnstr.c
int main()
{
	int i;
	char *x;
	char *y;
	char *ptr;

	i = 0;
	x = "";
	y = "-";
	ptr = ft_strnstr(x,y,4);
	printf("%s\n", ptr);
	return (0);
}

//ft_strrchr.c
int main () 
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;


   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}

//ft_strtrim.c
int main ()
{
	char *x = "  \t \t \n   \n\n\n\t";
	char *y = " \n\t";
	printf("%s\n", ft_strtrim(x, y));
	return (0);
}

//ft_substr.c
int main()
{
	char *ptr = "123456789";
	printf("%s", ft_substr(ptr, 3, 6));
	return (0);
}

//ft_tolower.c
int main() 
{ 
	char ch; 

	// letter to convert to lowercase
	ch = 'A'; 

	printf("%c -------> %c\n", ch, ft_tolower(ch)); 
	return 0; 
}

//ft_toupper.c
int main() 
{ 
	char ch; 

	// letter to convert to uppercase
	ch = 'a'; 

	printf("%c --------> %c\n", ch, ft_toupper(ch));
	return 0; 
}

//ft_lstadd_back.c 

//ft_lstadd_front.c 

//ft_lstclear.c 

//ft_lstdelone.c 

//ft_lstiter.c 

//ft_lstlast.c 

//ft_lstmap.c 

//ft_lstnew.c 

//ft_lstsize.c 
