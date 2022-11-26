/*
 * FILENAME: 221126_1x8_countbtn.c
 * PROGRAM: Count blanks, tabs and newlines
 * AUTHOR: Ashish Rai
 * DATE CREATED: 26/11/2022
 * DATE MODIFIED: 26/11/2022
 *
 * DESCRIPTION: Exercise 1-8 Write a program to count blanks, tabs & newlines.
 */

#include <stdio.h>
int main() {
    int c, bl, tb, nl;
    
    // initialize counters to 0
    bl = 0;
    tb = 0;
    nl = 0;

    while ((c = getchar()) != EOF) {
        // count blanks
        if (c == ' ')
            ++bl;
        // count tabs
        if (c == '\t')
            ++tb;
        // count newline
        if (c ==  '\n')
            ++nl;
    }

    printf("\nBlanks: %d\nTabs: %d\nNewlines: %d\n", bl, tb, nl);
}
