#include <stdio.h>

/* Program to copy its input to its output, replacing
 * each string of one or more blanks by a single blank. */

main()
{
    char curr;
    char prev;
    curr = getchar();
    putchar(curr);
    prev = curr;
    while ((curr = getchar()) != EOF) {
        if (curr == ' ' && prev != ' ') {
            putchar(curr);
        }
        if (curr != ' ') {
            putchar(curr);
        }
        prev = curr;
    }
}
