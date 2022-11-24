/*
 * FILENAME: 221124_1x4_tempconversionctf.c
 * PROGRAM: Temperature Conversion - Celsius to Fahrenheit
 * AUTHOR: Ashish Rai
 * DATE CREATED: 24/11/2022
 * DATE MODIFIED: 24/11/2022
 *
 * DESCRIPTION: Exercise 1-4 Write a program to print the corresponding
 * Celsius to Fahrenheit table.
 */

#include <stdio.h>

#define START 0
#define STOP 300
#define STEP 20

int main() {
    /* Fahrenheit = (9 / 5) * (Celsius + 32) */
    
    float celsius, fahrenheit;
    
    celsius = START;
    printf("Celsius\tFahrenheit\n");
    while (celsius <= STOP) {
        fahrenheit = (9.0 / 5.0) * celsius + 32; 
        printf("%3.0f\t%10.1f\n", celsius, fahrenheit);
        celsius = celsius + STEP;
    }
}
