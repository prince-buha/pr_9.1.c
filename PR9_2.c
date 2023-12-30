/*
.2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
For example,
Input:
Enter details of Student 1:
Roll no => 121
Name => Raj Patel
Chemistry => 95
Mathematics => 90
Physics => 88

Enter details of Student 2:
Roll no => 122
Name => Divya Sharma
Chemistry => 92
Mathematics => 80
Physics => 84

Enter details of Student 3:
Roll no => 123
Name => Piyush Mishra
Chemistry => 72
Mathematics => 87
Physics => 93

Enter details of Student 4:
Roll no => 124
Name => Vatsal Mangukiya
Chemistry => 68
Mathematics => 96
Physics => 85

Enter details of Student 5:
Roll no => 125
Name => Sagar Trivedi
Chemistry => 91
Mathematics => 89
Physics => 77

Output:
Raj Patel (121)
Chemistry => 95
Mathematics => 90
Physics => 88
Total => 273/300
Percent => 91.00%

Divya Sharma (122)
Chemistry => 92
Mathematics => 80
Physics => 84
Total => 256/300
Percent => 85.33%

Piyush Mishra (123)
Chemistry => 72
Mathematics => 87
Physics => 93
Total => 252/300
Percent => 84.00%

Vatsal Mangukiya (124)
Chemistry => 68
Mathematics => 96
Physics => 85
Total => 249/300
Percent => 83.00%

Sagar Trivedi (125)
Chemistry => 91
Mathematics => 89
Physics => 77
Total => 257/300
Percent => 85.66%
*/
#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    int chem;
    int maths;
    int phy;
};

void main() {
	int i;
    struct Student s[5];
    for(i=1;i<=5;i++) {
        printf("Enter details for student %d:\n",i);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
		printf("Name: ");
        scanf("%s", s[i].name);
		printf("Chemistry Marks: ");
        scanf("%d", &s[i].chem);
		printf("Mathematics Marks: ");
        scanf("%d", &s[i].maths);
		printf("Physics Marks: ");
        scanf("%d", &s[i].phy);
		printf("\n");
    }
    printf("\n\nMark Sheets:\n");
    for (i=1;i<=5;i++) {
        printf("\nStudent %d:\n",i);
        printf("Roll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Chemistry Marks: %d\n", s[i].chem);
        printf("Mathematics Marks: %d\n", s[i].maths);
        printf("Physics Marks: %d\n", s[i].phy);
        float percentage = (s[i].chem+s[i].maths+s[i].phy)/3;
        printf("Percentage: %f\n",percentage);
		printf("\n");
    }
}
