/* Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$> */

#include <unistd.h>
#include <stdio.h>

int get_repeat(char c)
{
    int repeat;

    repeat = 0;
    if (c >= 'a' && c <= 'z')
        repeat = c - 'a' + 1;
    else if (c >= 'A' && c <= 'Z')
        repeat = c - 'A' + 1;
    else
        repeat = 1;
    return (repeat);
}

int main(int argc, char *argv[])
{
    int index;
    int repeat;

    index = 0;
    repeat = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][index] != '\0')
    {
        repeat = get_repeat(argv[1][index]);
        while (repeat > 0)
        {
            write(1, &argv[1][index], 1);
            repeat--;
        }
        index++;
    }
    write(1, "\n", 1);
    return (0);
}