#include <stdio.h>

/* Program that prints its input one word per line. */

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

main()
{
    int state;
    char c;
    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == '\n' || c == ' ') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        }
        else {
            putchar(c);
            state = IN;
        }
   }
}

