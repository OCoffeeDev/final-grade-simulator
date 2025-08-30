#include "students_approval.h"

int main()
{
    // Open files
    FILE *file = fopen("students.txt", "r");
    FILE *out = fopen("final_grade.txt", "w");
    if (file == NULL || out == NULL)
    {
        printf("Error!\n");
        return (1);
    }

    Tests t;

    informations(&t);
    final_results(file, out, &t);

    // Close files
    fclose(file);
    fclose(out);
    return 0;
}