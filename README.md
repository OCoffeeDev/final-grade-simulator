# Final Grade Calculator

This is a simple **C program** that calculates the final grade of students based on their test scores and determines whether they are **approved** or **not approved** according to a minimum passing grade.

## Features
- Reads student names and their test scores from an input file (`students.txt`).
- Asks the user:
  - How many tests each student took.
  - The minimum score required for approval.
- Calculates the **average grade** for each student.
- Writes the results to an output file (`final_grade.txt`), including:
  - Student name
  - Final grade
  - Approval status (Approved / Not approved)

## Example

### Input (`students.txt`)
```
Exemple 1
10 10 10
Exemple 2
5 6 7 
Exemple 3
1 10 4
```

### Program execution
```
========/Welcome to Final Grade Calculator/========
How many tests did the students take?
3
What is the minimum passing grade?
6
```

### Output (`final_grade.txt`)
```
Student: Exemple 1 | Final grade: 10.00 | Approved
Student: Exemple 2 | Final grade: 6.00 | Approved
Student: Exemple 3 | Final grade: 5.00 | Not approved
```

## Compilation & Execution

Use **GCC** to compile:

```bash
gcc main.c students_approval.c -o final_grade
```

Run the program:

```bash
./final_grade
```

Make sure that `students.txt` is in the same directory as the executable.
