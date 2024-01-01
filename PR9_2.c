/*
Q.2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
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

#include<stdio.h>
#include<string.h>

 struct student{
 	int rollno;
    char name[100]; 
	int chemistry;
	int mathematics ;
	int physics;
	

 };
 void main(){
 	struct student s1;
 	struct student s2;
 	struct student s3;
 	struct student s4;
 	struct student s5;
 	
 	s1.rollno = 10;
 	s2.rollno = 11;
 	s3.rollno = 12;
 	s4.rollno = 13;
 	s5.rollno = 14;
 
 	
 

	printf("enter name:-");
 	scanf("%s",&s1.name);
 	printf("enter chemistry:-");
 	scanf("%d",&s1.chemistry);
 	printf("enter Mathematics:-");
 	scanf("%d",&s1.mathematics);
 	printf("enter Physics:-");
 	scanf("%d",&s1.physics);
 	
 	printf("enter name:-\n");
 	scanf("%s",&s2.name);
 	printf("enter chemistry:-\n");
 	scanf("%d",&s2.chemistry);
 	printf("enter Mathematics:-\n");
 	scanf("%d",&s2.mathematics);
 	printf("enter Physics:-\n");
 	scanf("%d",&s2.physics);
 	
 	printf("enter name:-\n");
 	scanf("%s",&s3.name);
 	printf("enter chemistry:-\n");
 	scanf("%d",&s3.chemistry);
 	printf("enter Mathematics:-\n");
 	scanf("%d",&s3.mathematics);
 	printf("enter Physics:-\n");
 	scanf("%d",&s3.physics);
 	
 	printf("enter name:-\n");
 	scanf("%s",&s4.name);
 	printf("enter chemistry:-\n");
 	scanf("%d",&s4.chemistry);
 	printf("enter Mathematics:-\n");
 	scanf("%d",&s4.mathematics);
 	printf("enter Physics:-\n");
 	scanf("%d",&s4.physics);
 	
 	printf("enter name:-\n");
 	scanf("%s",&s5.name);
 	printf("enter chemistry\n:-");
 	scanf("%d",&s5.chemistry);
 	printf("enter Mathematics:\n-");
 	scanf("%d",&s5.mathematics);
 	printf("enter Physics:-\n");
 	scanf("%d",&s5.physics);
 	
 	
 	
 		printf("rollno is %d\n",s1.rollno);
 		printf("name is %s\n",s1.name);
 		printf("chemistryis %d\n",s1.chemistry);
 		printf("mathematics is %d\n",s1.mathematics);
 		printf("physics is %d\n",s1.physics);
 		
 		printf("rollno is %d\n",s2.rollno);
 		printf("name is %s\n",s2.name);
 		printf("chemistryis %d\n",s2.chemistry);
 		printf("mathematics is %d\n",s2.mathematics);
 		printf("physics is %d\n",s2.physics);
 		
 		printf("rollno is %d\n",s3.rollno);
 		printf("name is %s\n",s3.name);
 		printf("chemistryis %d\n",s3.chemistry);
 		printf("mathematics is %d\n",s3.mathematics);
 		printf("physics is %d\n",s3.physics);
 		
 		printf("rollno is %d\n",s4.rollno);
 		printf("name is %s\n",s4.name);
 		printf("chemistryis %d\n",s4.chemistry);
 		printf("mathematics is %d\n",s4.mathematics);
 		printf("physics is %d\n",s4.physics);
 		
 		printf("rollno is %d\n",s5.rollno);
 		printf("name is %s\n",s5.name);
 		printf("chemistryis %d\n",s5.chemistry);
 		printf("mathematics is %d\n",s5.mathematics);
 		printf("physics is %d\n",s5.physics);
 		
 		int total;
 		float percent;
 		
 		
 		total = s1.chemistry + s1.mathematics + s1.physics;
 		total = s2.chemistry + s2.mathematics + s2.physics;
 		total = s3.chemistry + s3.mathematics + s3.physics;
 		total = s4.chemistry + s4.mathematics + s4.physics;
 		total = s5.chemistry + s5.mathematics + s5.physics;
 		
 		
 		percent = total / 300 * 100;
 		
 		printf("total => %d/300\n",total);
 		printf("percent => %f total/ 300 * 100",percent);
 		
		 }
		 
 	
 	
 	
 	
 	
 
