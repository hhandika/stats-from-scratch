/*
Heru Handika
6 October 2020
Work on parsing csv file
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 1000
#define MAX_LINE 1000

typedef struct {
    char * id;
    char * species;
} Species;

Species shrews[MAX_LINE];

int main (void) {
    int ch;
    FILE * fp;
    char * filename = "data/tissue.csv";
    
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Failed to open the file");
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF) {
        printf("%c", ch);
    }
    return EXIT_SUCCESS;
}

