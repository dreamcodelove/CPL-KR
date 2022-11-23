/*
 * FILENAME: 221123_1x3_tempconversionwithhead.c
 * PROGRAM: Temperature Conversion with Heading
 * AUTHOR: Ashish Rai
 * DATE CREATED: 23/11/2022
 * LAST MODIFIED: 23/11/2022
 *
 * DESCRIPTION: Exercise 1-3 Modify the temperature conversion program to 
 * print a heading above the table.
 */

#include <stdio.h>

#define START 0
#define STOP 300
#define STEP 20

int main() {
    /* Celsius = (5 / 9) * (Fahrenheit - 32) */

    float celsius, fahrenheit;
    fahrenheit = START;

    printf("Fahrenheit\tCelsius\n");  // print heading
    while (fahrenheit <= STOP) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%3.0f\t%15.1f\n", fahrenheit, celsius);  // print table
        fahrenheit = fahrenheit + STEP;
    }
}
