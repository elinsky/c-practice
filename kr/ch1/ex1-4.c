#include <stdio.h>

/* print Celcius-Fahrenheit table
    for celsius = 0, 10, ..., 150; floating point version */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 150;    /* upper limit */
    step = 10;      /* step size */

    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius * 9.0/5.0 + 32.0;
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
