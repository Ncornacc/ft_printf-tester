/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   official_test.c                                     :+:    :+:    	      */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 08:11:10 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/06 08:52:41 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <strings.h>
#include <string.h>

int main(void)
{
    int alpha = 82;
    int error = 42;
    int digit = 52;
	int	alnum = 48;
    int ascii = 129;
    int print = 8;
	char *s1 = "dio bestia";
	char s2[20] = "dio bestia";
	char s3[20] = "helloooo";
	char    s4[20] = "VIVALAFIGA";
    char    s5[100];
	char    s6[20] = "bastardomaledetto";
    char    s7[100];
    char    s8[20] = "Hello";
    char    s9[30];

	char	dest[20] = "gg";
	char	src[20] = "Hello";

	char    str3[] = "roses are read, violets are blue";
    char    str4[] = "roses are read, violets re blue";
    char    str5[] = "roses are read, violets are blue";

	

    printf("82 is alphabet?: %d\n", isalpha(alpha));
	printf("42 is alphabet?: %d\n", isalpha(error));

	printf("\n45 is digit?: %d\n", isdigit(digit));
	printf("53 is digit?: %d\n", isdigit(error));

	printf("\n48 is alphanum?: %d\n", isalnum(alnum));
	printf("42 is alphanum?: %d\n", isalnum(error));

	printf("\n48 is ascii?: %d\n", isascii(alnum));
	printf("129 is ascii?: %d\n", isascii(ascii));

	printf("\n42 is print?: %d\n", isprint(error));
	printf("8 is print?: %d\n", isprint(print));


    printf("\nThe string lenght of the string is: %zu\n", strlen(s1));

	printf("\nthe new memory is: %s\n", memset(s2, '*', 5));

	bzero(s3, 3);
	printf("\nthe new string is: %s\n", s3);

	printf("\nThe src is: %s\n", s4);
    printf("the new destination is: %s\n", memcpy(s5, s4, 7));

	printf("\nThe src is: %s\n", s6);
    printf("the new destination is: %s\n", memcpy(s7, s6, 7));

    printf("\nthe lenght is: %lu\n", strlcpy(s9, s8, 3));
    printf("the string is %s\n", s9);

	printf("\nthe lenght is: %lu", strlcat(dest, src, 7));
	printf("\nthe string is: %s", dest);

	printf("\n\nthe original string is: %s", str3);
    printf("\nthe string after the function is: %s", memchr(str3, 118, 20));

    printf("\n\n the two strings are: %s and %s", str4, str5);
    printf("\n the result of the comparison is: %d", memcmp(str4, str5, 20));

	return (0);
}
