/*
 * FILENAME: 221125_1x6_verifygetcharzo.c
 * PROGRAM: Zero or One
 * AUTHOR: Ashish Rai
 * DATE CREATED: 25/11/2022
 * DATE MODIFIED: 25/11/2022
 *
 * DESCRIPTION: Exercise 1-6 Verify that the expression getchar() != EOF is 0
 * or 1.
 */

#include <stdio.h>
int main() {
    int c = getchar();
    printf("getchar() != EOF is %d\n", (c != EOF));
}
