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

int main() {
    // Fahrenheit = (9 / 5) * Celsius + 32

    float cels;

    printf("Celsius\tFahrenheit\n");  // heading
    for (int cels = 300; cels >= 0; cels = cels - 20) {
        printf("%3d\t%d\n", cels, (9 * cels / 5 + 32));
    }
}
