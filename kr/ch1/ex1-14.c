#include <stdio.h>

/* Program to print a histogram of the frequencies of different characters in
 * its input. */

main()
{
    int char_counts[26];
    char c;
    int i, j;

    /* initialize array */
    for (i = 0; i <= 25; ++i) {
        char_counts[i] = 0;
    }

    /* count number of lowercase characters in alphabet. */
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z')
            ++char_counts[c-'a'];
    }

    printf("char count histogram\n");
    for (i = 0; i <=25; ++i) {
        printf("%3c:", 'a' + i);
        for (j = 0; j < char_counts[i]; ++j) {
            printf("x");
        }
        printf("\n");
    }
}
