#include <stdio.h>

/* Program to print a histogram of the lengths of words in its input. */

#define IN  1    /* inside a word */
#define OUT 0    /* outside a word */


main()
{
    /* max size of a word will be 10. */
    int word_len;
    int word_len_counts[11];
    char c;
    int state;
    int i, j;

    state = OUT;
    word_len = 0;
    for (i = 0; i <= 10; ++i) {
        word_len_counts[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (word_len > 0) {
                if (word_len >= 10)
                    ++word_len_counts[10];
                else
                    ++word_len_counts[word_len];
            }
            word_len = 0;
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            ++word_len;
        }
        else /* in word; normal char */
            ++word_len;
    }

    printf("Word length histogram\n");
    for (i = 1; i <= 10; ++i) {
        printf("%3d:", i);
        for (j = 0; j < word_len_counts[i]; ++j) {
            printf("x");
        }
        printf("\n");
    }
}
