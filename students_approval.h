#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 3

typedef struct
{
    int total_tests;
    float minimum_score;
} Tests;

void final_results(FILE *file, FILE *out, Tests *t);