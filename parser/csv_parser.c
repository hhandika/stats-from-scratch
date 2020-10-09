/*
Heru Handika
6 October 2020
Work on parsing csv file
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int ch;
    FILE * fp;
    char * filename = "data/tissue.csv";
    
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Failed to open the file\n");
        exit(EXIT_FAILURE);
    }


    while ((ch = getc(fp)) != EOF) {
        printf("%c", ch);
    }
    return EXIT_SUCCESS;
}

