#include <stdio.h>

/* Program to count blanks, tabs, and newlines. */

main()
{
    int blank_count, newline_count, tab_count;
    blank_count = 0;
    newline_count = 0;
    tab_count = 0;
    char c;
    while((c = getchar()) != EOF){
        if (c == ' '){
            ++blank_count;
        }
        if (c == '\n'){
            ++newline_count;
        }
        if (c == '\t'){
            ++tab_count;
        }

    }
    printf("Blanks: %d\n", blank_count);
    printf("New lines: %d\n", newline_count);
    printf("Tabs: %d\n", tab_count);
}
