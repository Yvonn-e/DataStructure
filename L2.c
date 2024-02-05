#include <stdio.h>
#include <stdlib.h>

// Define structs for Course and Grade
struct Course {
    char course_code;
    char course_name;
};

struct Grade {
    int mark;
    char the_grade;
    int calculated; // Flag to check if grades are calculated
};

// Define struct for Student
struct Student {
    char registration_number[20];
    char name[50];
    int age;
    struct Course course;
    struct Grade grades;
};


// Function to calculate grades
void calculateGrades(struct Student *student) {
    // Check if grades are not already calculated
    if (!student->grades.calculated) {
        // Determine the grade based on the grading system
        if (student->grades.mark > 69)
            student->grades.the_grade = 'A';
        else if (student->grades.mark > 59)
            student->grades.the_grade = 'B';
        else if (student->grades.mark > 49)
            student->grades.the_grade = 'C';
        else if (student->grades.mark > 39)
            student->grades.the_grade = 'D';
        else
            student->grades.the_grade = 'E';

        student->grades.calculated = 1; // Set the calculated flag to true after calculation
    } else {
        printf("Grades already calculated for this student.\n");
    }
}

// Function to input student details
void inputStudentDetails(struct Student *student) {
    printf("Enter Registration Number: ");
    scanf("%s", student->registration_number);

    printf("Enter Name: ");
    scanf("%s", student->name);

    printf("Enter Age: ");
    scanf("%d", &student->age);

    printf("Enter Course Code: ");
    scanf("%s", student->course.course_code);

    printf("Enter Course Name: ");
    scanf("%s", student->course.course_name);

    printf("Enter Mark: ");
    scanf("%d", &student->grades.mark);

    student->grades.calculated = 0; // Set the calculated flag to false initially
}


// Function to display student details
void displayStudentDetails(struct Student student) {
    printf("\nRegistration Number: %s\n", student.registration_number);
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Course Code: %s\n", student.course.course_code);
    printf("Course Name: %s\n", student.course.course_name);
    printf("Mark: %d\n", student.grades.mark);
    printf("Grade: %c\n", student.grades.the_grade);
}

int main() {
    struct Student students[40];

    // Input data for each student
    for (int i = 0; i < 40; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        inputStudentDetails(&students[i]);
    }

    // Display the information for each student
    for (int i = 0; i < 40; i++) {
        printf("\nDetails for student %d:", i + 1);
        displayStudentDetails(students[i]);
    }

    // Edit a student's details
    int studentIndex;
    printf("\nEnter the index of the student you want to edit (1 to 40): ");
    scanf("%d", &studentIndex);

    if (studentIndex >= 1 && studentIndex <= 40) {
        printf("\nEnter new details for student %d:\n", studentIndex);
        inputStudentDetails(&students[studentIndex - 1]);

        printf("\nUpdated details for student %d:", studentIndex);
        displayStudentDetails(students[studentIndex - 1]);
    } else {
        printf("\nInvalid index. Please enter a valid index (1 to 40).");
    }

    // Add marks and calculate grades for a specific student
    int studentToUpdate;
    printf("\nEnter the index of the student to add marks and calculate grades (1 to 40 ");
    scanf("%d", &studentToUpdate);

    if (studentToUpdate >= 1 && studentToUpdate <= 40) {date);
        printf("\nEnter additional marks for student %d: ", studentToUp
        int additionalMarks;
        scanf("%d", &additionalMarks);

        students[studentToUpdate - 1].grades.mark += additionalMarks;

        // Calculate grades after adding marks
        calculateGrades(&students[studentToUpdate - 1]);

        printf("\nUpdated details for student %d after adding marks and calculating grades:", studentToUpdate);
        displayStudentDetails(students[studentToUpdate - 1]);
    } else {
        printf("\nInvalid index. Please enter a valid index (1 to 40).");
    }

    return 0;
}
