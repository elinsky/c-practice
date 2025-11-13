#include <stdio.h>

main()
{
    int result;
    
    result = getchar() != EOF;
    printf("%1d\n", result);
}

