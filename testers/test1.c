/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test1.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornac <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   created: 2022/10/18 13:53:19 by ncornac      #+#    #+#                 */
/*   Updated: 2022/10/25 11:28:53 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{   
    ft_printf("--------------------------------------\n");
    ft_printf("--------------------------------------\n");
    /*###############TESTER FOR %c###############*/
        ft_printf("TESTER FOR /%/c\n");
        if (ft_printf(" %c \n", 'a') != printf(" %c \n", 'a'))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %c \n", 'A') != printf(" %c \n", 'A'))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %c \n", '0') != printf(" %c \n", '0'))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %c \n", (char)0) != printf(" %c \n", (char)0))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %c \n", 'helo') != printf(" %c \n", 'helo'))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %c \n", 0) != printf(" %c \n", 0))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

    /*###########################################*/
    ft_printf("--------------------------------------\n");
    ft_printf("--------------------------------------\n");
    /*###############TESTER FOR %S###############*/
        ft_printf("TESTER FOR /%/s\n");

        if (ft_printf(" %s \n", "Allora") != printf(" %s \n", "Allora"))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %s \n", "DIOcANE") != printf(" %s \n", "DIOcANE"))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %s \n", "0") != printf(" %s \n", "0"))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %s \n", (char *)0) != printf(" %s \n", (char *)0))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %s \n", "") != printf(" %s \n", ""))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");


    /*###########################################*/
    ft_printf("--------------------------------------\n");
    ft_printf("--------------------------------------\n");
    /*###############TESTER FOR %P###############*/
    ft_printf("TESTER FOR /%/P\n");

        int     num = 65;
        char    *p = "Hello World";
        char    *c = "s";
        char    *h = "0xF111s7";
        int     *i = &num;
        void    *z = 0;

        if (ft_printf(" %p \n", &p) != printf(" %p \n", &p))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %p \n", &c) != printf(" %p \n", &c))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %p \n", &h) != printf(" %p \n", &h))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %p \n", (void *)0) != printf(" %p \n", (void *)0))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %p \n", &z) != printf(" %p \n", &z))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %p \n", &i) != printf(" %p \n", &i))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

    /*###########################################*/
    ft_printf("--------------------------------------\n");
    ft_printf("--------------------------------------\n");
    /*###############TESTER FOR %D/I#############*/
        ft_printf("TESTER FOR /%/d i\n");

        if (ft_printf(" %d \n", -42) != printf(" %d \n", -42))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %d \n", 0x7323) != printf(" %d \n", 0x7323))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %d \n", 42) != printf(" %d \n", 42))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %d \n", 0) != printf(" %d \n", 0))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %u \n", -2147483647) != printf(" %u \n", -2147483647))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %u \n", 2147483647) != printf(" %u \n", 2147483647))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");
        
        ft_printf("--------------------------------------\n");
        ft_printf("--------------------------------------\n");

        if (ft_printf(" %i \n", -42) != printf(" %i \n", -42))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %i \n", 0x7323) != printf(" %i \n", 0x7323))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %i \n", 42) != printf(" %i \n", 42))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %i \n", 0) != printf(" %i \n", 0))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %u \n", -2147483647) != printf(" %u \n", -2147483647))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %u \n", 2147483647) != printf(" %u \n", 2147483647))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");
        
    /*###########################################*/
    ft_printf("--------------------------------------\n");
    ft_printf("--------------------------------------\n");
     /*###############TESTER FOR %U###############*/
     ft_printf("TESTER FOR U\n");

        if (ft_printf(" %u \n", 42) != printf(" %u \n", 42))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

         if (ft_printf(" %u \n", -42) != printf(" %u \n", -42))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %u \n", 0x7323) != printf(" %u \n", 0x7323))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %u \n", 42) != printf(" %u \n", 42))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %u \n", 0) != printf(" %u \n", 0))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %u \n", INT_MAX) != printf(" %u \n", INT_MAX))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %u \n", UINT_MAX) != printf(" %li \n", UINT_MAX))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %u \n", LONG_MAX) != printf(" %u \n", LONG_MAX))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");
        
        if (ft_printf(" %u \n", ULONG_MAX) != printf(" %lu \n", ULONG_MAX))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");
    /*###########################################*/
    ft_printf("--------------------------------------\n");
    ft_printf("--------------------------------------\n");
    /*###############TESTER FOR %x###############*/
    ft_printf("TESTER FOR x\n");

        if (ft_printf(" %x \n", 42) != printf(" %x \n", 42))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

         if (ft_printf(" %x \n", -42) != printf(" %x \n", -42))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %x \n", 0x7323) != printf(" %x \n", 0x7323))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %x \n", 42) != printf(" %x \n", 42))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %x \n", 0) != printf(" %x \n", 0))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");;

        if (ft_printf(" %x \n", INT_MAX) != printf(" %x \n", INT_MAX))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %x \n", UINT_MAX) != printf(" %lx \n", UINT_MAX))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %x \n", LONG_MAX) != printf(" %x \n", LONG_MAX))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");
        
        if (ft_printf(" %x \n", ULONG_MAX) != printf(" %lx \n", ULONG_MAX))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");
    /*###########################################*/
    ft_printf("--------------------------------------\n");
    ft_printf("--------------------------------------\n");
    /*###############TESTER FOR %x/X###############*/
    ft_printf("TESTER FOR X\n");

         if (ft_printf(" %X \n", 42) != printf(" %X \n", 42))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

         if (ft_printf(" %X \n", -42) != printf(" %X \n", -42))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %X \n", 0x7323) != printf(" %X \n", 0x7323))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %X \n", 0) != printf(" %X \n", 0))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %X \n", INT_MAX) != printf(" %X \n", INT_MAX))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %X \n", UINT_MAX) != printf(" %lX \n", UINT_MAX))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");

        if (ft_printf(" %X \n", LONG_MAX) != printf(" %X \n", LONG_MAX))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");
        
        if (ft_printf(" %X \n", ULONG_MAX) != printf(" %lX \n", ULONG_MAX))
            return (1);
        else   
            ft_printf("OK!\n");
        ft_printf("\n");
		ft_printf("--------------------------------BAD CASE----------------------------------------------");
        ft_printf("\n");
        ft_printf("OUTPUT OF PERCENTAGE x3\n");
        int noom = ft_printf("%%%");
        printf("\n");
        int moon = printf("%%%");
        printf("\n");
        ft_printf("RETURN VALUE OF PERCENTAGE x3\n");
        ft_printf ("%d \n", noom);
        printf ("%d \n", moon);

        ft_printf("OUTPUT OF PERCENTAGE x3 and backslash zero\n");
        int alpha = ft_printf("%%%\0abc");
        printf("\n");
        int beta = printf("%%%\0abc");
        printf("\n");
        ft_printf("RETURN VALUE OF PERCENTAGE x3 and backslash zero\n");
        ft_printf ("%d \n", alpha);
        printf ("%d \n", beta);
}
