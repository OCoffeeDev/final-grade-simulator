#include "students_approval.h"

void informations(Tests *t)
{
    printf("========/Welcome to Final Grade Calculator/========\n");
    printf("How many tests did the students take?\n");
    scanf("%d", &t->total_tests);
    printf("What is the minimum passing grade?\n");
    scanf("%f", &t->minimum_score);
}

void final_results(FILE *file, FILE *out, Tests *t)
{
    char line[200];

    while (fgets(line, sizeof(line), file) != NULL)
    {
        line[strcspn(line, "\n")] = '\0';
        fprintf(out, "Student: %s | ", line);

        if (fgets(line, sizeof(line), file) != NULL)
        {
            line[strcspn(line, "\n")] = '\0';
            float scores[50];
            char *ptr = line;
            int k = 0;

            while (k < t->total_tests && sscanf(ptr, "%f", &scores[k]) == 1)
            {
                while (*ptr != ' ' && *ptr != '\0')
                    ptr++;
                if (*ptr == ' ')
                    ptr++;
                k++;
            }

            if (k != t->total_tests)
            {
                exit(1);
            }

            float average = 0.0;
            int j;
            for (j = 0; j < k; j++)
                average += scores[j];
            average = average / k;

            if (average >= t->minimum_score)
                fprintf(out, "Final grade: %.2f | Approved\n", average);
            else
                fprintf(out, "Final grade: %.2f | Not approved\n", average);
        }
    }
}