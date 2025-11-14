#include <stdio.h>

int main();
float fahr_to_celsius(float fahr);
void print_table(int lower, int upper, int step);

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
int main()
{
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    print_table(lower, upper, step);
    return 0;
}

float fahr_to_celsius(float fahr)
{
    float celsius;

    return 5 * (fahr-32) / 9;
}

void print_table(int lower, int upper, int step)
{
    float celsius;
    float fahr;

    fahr = lower;
    while (fahr <= upper) {
        celsius = fahr_to_celsius(fahr);
        printf("%f\t%f\n", fahr, celsius);
        fahr = fahr + step;
    }
}