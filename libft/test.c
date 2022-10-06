/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 08:25:39 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/06 09:33:18 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int main(void)
{
    int alpha = 82;
    int error = 42;
    int digit = 52;
	int alnum = 48;
    int ascii = 129;
    int print = 8;

	char	*s1 = "dio bestia";
	char	s2[20] = "dio bestia";
	char 	s3[20] = "hellooooo";
	char	s4[20] = "VIVALAFIGA";
	char	s5[100];
	char	s6[20] = "bastardomaledetto";
	char	s7[100];
	char	s8[20] = "Hello";
	char	s9[30];

	char	src[20] = "Hello";
	char	dest[20] = "gg";

	char	str[] = "this is a sample";
	char	str2[] = "this is a sample";

	char	str3[] = "roses are read, violets are blue";
	char	str4[] = "roses are read, violets re blue";
	char	str5[] = "roses are read, violets are blue";
	
	const char	big[] = "Foo Bar baz";
	const char	little[] = "Bar";

	

    printf("82 is alphabet?: %d\n", ft_isalpha(alpha));
    printf("42 is alphabet?: %d\n", ft_isalpha(error));

    printf("\n45 is digit?: %d\n", ft_isdigit(digit));
    printf("53 is digit?: %d\n", ft_isdigit(error));

    printf("\n48 is alphanum?: %d\n", ft_isalnum(alnum));
    printf("42 is alphanum?: %d\n", ft_isalnum(error));

    printf("\n48 is ascii?: %d\n", ft_isascii(alnum));
    printf("129 is ascii?: %d\n", ft_isascii(ascii));

    printf("\n42 is print?: %d\n", ft_isprint(error));
    printf("8 is print?: %d\n", ft_isprint(print));



	printf("\nThe string lenght of the string is: %zu\n", ft_strlen(s1));

	printf("\nthe new memory is %s\n", ft_memset(s2, '*', 5));

	ft_bzero(s3, 3);
	printf("\nThe new string is %s\n", s3);

	printf("\nThe src is: %s\n", s4);
	printf("the new destination is: %s\n", ft_memcpy(s5, s4, 7));

    printf("\nThe src is: %s\n", s6);
    printf("the new destination is: %s\n", ft_memmove(s7, s6, 7));

	printf("\nthe lenght is: %lu\n", ft_strlcpy(s9, s8, 3));
	printf("the string is %s\n", s9);
	
	printf("\nthe function returns: %lu\n", ft_strlcat(dest, src, 7));
	printf("the final string is: %s", dest);
	

	printf("\n\nf in uppercase is: %c", ft_toupper(102));
	printf("\nF in lowercase is: %c", ft_tolower(70));

	printf("\n\nthe original string: %s", str);
	printf("\nthe new string is: %s", ft_strchr(str, 115));

	printf("\n\nthe original string: %s", str2);
	printf("\nthe new string is: %s", ft_strrchr(str2, 115));


	printf("\n\nthe original string is: %s", str3);
	printf("\nthe string after the function is: %s", ft_memchr(str3, 118, 20));

	printf("\n\n the two strings are: %s and %s", str4, str5);
	printf("\n the result of the comparison is: %d", ft_memcmp(str4, str5, 20));

	printf("\n\n the large string is: %s, and the little one is: %s", big, little);
	printf("\n\n the function returns %s", ft_strnstr(big, little, 20));
    return (0);
}
