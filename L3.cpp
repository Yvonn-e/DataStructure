#include <iostream>

#include <iostream>

using namespace std;

struct Course {
    string course_code;
    string course_name;
};

struct Grade {
    int mark;
    char the_grade;
};

class Student {
private:
    string registration_number;
    string name;
    int age;
    Course course;
    Grade grade;

public:
    // Function to add a student
    void addStudent(string reg_num, string student_name, int student_age, Course student_course)
    {
        registration_number = reg_num;
        name = student_name;
        age = student_age;
        course = student_course;
    }

    // Function to edit a student's details
    void editStudentDetails(string new_reg_num, string new_student_name, int new_student_age, Course new_student_course)
    {
        registration_number = new_reg_num;
        name = new_student_name;
        age = new_student_age;
        course = new_student_course;
    }

    // Function to add marks and calculate grades
    void addMarksAndCalculateGrade(int mark)
    {
        grade.mark = mark;

        if (mark > 69)
            grade.the_grade = 'A';
        else if (mark > 59)
            grade.the_grade = 'B';
        else if (mark > 49)
            grade.the_grade = 'C';
        else if (mark > 39)
            grade.the_grade = 'D';
        else
            grade.the_grade = 'E';
    }

    // Function to display student details
    void displayStudentDetails()
    {
        cout << "Registration Number: " << registration_number << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course Code: " << course.course_code << endl;
        cout << "Course Name: " << course.course_name << endl;
        cout << "Mark: " << grade.mark << endl;
        cout << "Grade: " << grade.the_grade << endl;
    }
};

int main() {
    // Create an array of students
    Student students[40];

    // Add a sample student
    Course sample_course = {"ICS 2105", "Data Structures And Algorithms"};
    students[0].addStudent("SCT001", "Quinter Maru", 20, sample_course);

    // Edit the sample student's details
    Course new_sample_course = {"ICS-2203", "Internet Application Programming"};
    students[0].editStudentDetails("SCT002", "Yve Kwaya", 21, new_sample_course);

    // Add marks and calculate grades for the sample student
    students[0].addMarksAndCalculateGrade(75);

    // Display the sample student's details
    students[0].displayStudentDetails();

    return 0;
}
