#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include "ft_printf.c"
#include "ft_printf.h"

// you should use "ft_print_c" and "ft_print_s" functions from
// ft_printf_utils.c OR replace those with your putstr etc.

int main()
{
    void *ponter;
    char *ponterr = "pontero";

    ft_print_s("\n--------------------------\n\n   ı~~~~~~~~~~~~~~~~~ı\n   |                 |\n   ~ ft_printf tests ~\n   |                 |\n   ı~~~~~~~~~~~~~~~~~ı\n");
    ft_print_c('\n');

    ft_print_s("\n*-- printf --*\n");
    ft_print_s(".  printf: \"");
    printf("=> (%d)\n",    printf(NULL, 42));
    ft_print_s("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(NULL, 42)); ft_print_c('\n');

    ft_print_s("\n*-- printf2 --*\n");
    ft_print_s(".  printf: \"");
    printf("=> (%d)\n",    printf(" test_case \"\n", 42) - 2);
    ft_print_s("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" test_case \"\n", 42) - 2); ft_print_c('\n');

    ft_print_s("\n*-- printf3 --*\n");
    ft_print_s(".  printf: \"");
    printf("=> (%d)\n",    printf("", 42));
    ft_print_s("ft_printf: \"");
    printf("=> (%d)\n", ft_printf("", 42)); ft_print_c('\n');

    ft_print_s("\n*-- printf4 --*\n");
    ft_print_s(".  printf: \"");
    printf("=> (%d)\n",    printf(" %K btuncer %w \"\n", 'A', 48, '0', NULL) - 2);
    ft_print_s("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %K btuncer %w \"\n", 'A', 48, '0', NULL) - 2); ft_print_c('\n');

    ft_print_s("\n*-- %c --*\n");
    ft_print_s(".  printf: \"");
    printf("=> (%d)\n",    printf(" %c %c %c %c %c %c \"\n", 'A', 48, '0', NULL, -42, 1024) - 2);
    ft_print_s("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %c %c %c %c %c %c \"\n", 'A', 48, '0', NULL, -42, 1024) - 2); ft_print_c('\n');

    ft_print_s("\n*-- %s --*\n");
    ft_print_s(".  printf: \"");
    printf("=> (%d)\n",    printf(" %s %s %s %s %s %s \"\n", "test_case", NULL, "intrabtuncer", "", " ", ponterr) - 2);
    ft_print_s("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %s %s %s %s %s %s \"\n", "test_case", NULL, "intrabtuncer", "", " ", ponterr) - 2); ft_print_c('\n');

    ft_print_s("\n*-- %p --*\n");
    ft_print_s(".  printf: \"");
    printf("=> (%d)\n",    printf(" %p %p %p %p %p %p %p %p \"\n", "ponter", ponter, NULL, "", -42, ponterr, LONG_MIN, LONG_MAX) - 2);
    ft_print_s("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %p %p %p %p %p %p %p %p \"\n", "ponter", ponter, NULL, "", -42, ponterr, LONG_MIN, LONG_MAX) - 2); ft_print_c('\n');

    ft_print_s("\n*-- %p2 (advanced: it's OK to fail these) --*\n");
    ft_print_s(".  printf: \"");
    printf("=> (%d)\n",    printf(" %p %p %p %p %p %p \"\n", LONG_MIN + 1, LONG_MIN + 2, LONG_MIN + 3, -ULONG_MAX, ULONG_MAX, ULONG_MAX - 1) - 2);
    ft_print_s("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %p %p %p %p %p %p \"\n", LONG_MIN + 1, LONG_MIN + 2, LONG_MIN + 3, -ULONG_MAX, ULONG_MAX, ULONG_MAX - 1) - 2); ft_print_c('\n');

    ft_print_s("\n*-- %d && %i --*\n");
    ft_print_s(".  printf: \"");
    printf("=> (%d)\n",    printf(" %d %d %d %d %d %d %d %d %d %i \"\n",
                                42, -42, INT_MIN, INT_MAX, NULL, "TEST", "", LONG_MIN, LONG_MAX, ponter) - 2);
    ft_print_s("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %d %d %d %d %d %d %d %d %d %i \"\n",
                                42, -42, INT_MIN, INT_MAX, NULL, "TEST", "", LONG_MIN, LONG_MAX, ponter) - 2); ft_print_c('\n');
    
    ft_print_s("\n*-- %u --*\n");
    ft_print_s(".  printf: \"");
    printf("=> (%d)\n",    printf(" %u %u %u %u %u %u %u \"\n", INT_MIN, 2147483650, -1, NULL, ULONG_MAX, LONG_MAX, LLONG_MAX) - 2);
    ft_print_s("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %u %u %u %u %u %u %u \"\n", INT_MIN, 2147483650, -1, NULL, ULONG_MAX, LONG_MAX, LLONG_MAX) - 2); ft_print_c('\n');

    ft_print_s("\n*-- %x --*\n");
    ft_print_s(".  printf: \"");
    printf("=> (%d)\n",    printf(" %x %x %x %x %x %x %x %x \"\n", NULL, INT_MIN, INT_MAX, 0, '0', LONG_MIN, LONG_MAX, LLONG_MAX) - 2);
    ft_print_s("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %x %x %x %x %x %x %x %x \"\n", NULL, INT_MIN, INT_MAX, 0, '0', LONG_MIN, LONG_MAX, LLONG_MAX) - 2); ft_print_c('\n');

    ft_print_s("\n*-- %X --*\n");
    ft_print_s(".  printf: \"");
    printf("=> (%d)\n",    printf(" %X %X %X %X %X %X %X %X \"\n", NULL, INT_MIN, INT_MAX, 0, '0', LONG_MIN, LONG_MAX, LLONG_MAX) - 2);
    ft_print_s("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %X %X %X %X %X %X %X %X \"\n", NULL, INT_MIN, INT_MAX, 0, '0', LONG_MIN, LONG_MAX, LLONG_MAX) - 2); ft_print_c('\n');

    ft_print_s("\n*-- %% --*\n");
    ft_print_s(".  printf: \"");
    printf("=> (%d)\n",    printf(" %% %%%|%%%%|%%%%% | %%%%%%%%%%%% %%%%% \"\n") - 2);
    ft_print_s("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %% %%%|%%%%|%%%%% | %%%%%%%%%%%% %%%%% \"\n") - 2); ft_print_c('\n');

    ft_print_s("\n\n   ░░░░░░░░░░░░░░░░░░░░\n   ░▄▀▄▀▀▀▀▄▀▄░░░░░░░░░\n   ░█░░░░░░░░▀▄░░░░░░▄░\n   █░░▀░░▀░░░░░▀▄▄░░█░█\n   █░▄░█▀░▄░░░░░░░▀▀░░█\n   █░░▀▀▀▀░░░░░░░░░░░░█\n   █░░░░░░░░░░░░░░░░░░█\n   █░░░░░░░░░░btuncer░█\n   ░█░░▄▄░░▄▄▄▄░░▄▄░░█░\n   ░█░▄▀█░▄▀░░█░▄▀█░▄▀░\n   ░░▀░░░▀░░░░░▀░░░▀░░░");

    ft_print_s("\n\n   ı~~~~~~~~~~~~~~~~~ı\n   |                 |\n   ~ ft_printf done  ~\n   |                 |\n   ı~~~~~~~~~~~~~~~~~ı\n\n--------------------------");
}