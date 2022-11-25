/*
 * FILENAME: 221125_1x5_tempconversionreverse.c
 * PROGRAM: Temperature Conversion - Celsius to Fahrenheit (Reversed)
 * AUTHOR: Ashish Rai
 * DATE CREATED: 25/11/2022
 * DATE MODIFIED: 25/11/2022
 *
 * DESCRIPTION: Exercise 1-5 Modify the temperature conversion program to
 * print the table in reverse order, i.e., from 300 degrees to 0.
 */

#include <stdio.h>

#define START 300
#define STOP 0
#define STEP 20

int main() {
    /* Fahrenheit = (9 / 5) * Celsius + 32 */

    float celsius, fahrenheit;

    celsius = START;
    printf("Celsius\tFahrenheit\n");
    while (celsius >= STOP) {
        fahrenheit = (9.0 / 5.0) * celsius + 32;
        printf("%3.0f\t%.1f\n", celsius, fahrenheit);
        celsius = celsius - STEP;
    }
}
