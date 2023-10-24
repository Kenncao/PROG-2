#include<stdio.h>
#include<stdlib.h>

struct Student{
	char name[20];
	int age;
	float height;
	float grade;
};
void showStud(char name[], int age, float height, float grade){
	printf("%s\n%d\n%.1f\n%.1f\n\n",name,age,height,grade);
}

int main(){
	struct Student s1 = {"Kenn", 21, 176.5, 1.7};
	struct Student s2 = {"Brandon", 23, 176.4, 1.4};
	struct Student s3 = {"Guts", 28, 194.2, 1.9};
	struct Student s4 = {"Musashi", 35, 174.7, 1.2};
	showStud(s1.name, s1.age, s1.height, s1.grade);
	showStud(s2.name, s2.age, s2.height, s2.grade);
	showStud(s3.name, s3.age, s3.height, s3.grade);
	showStud(s4.name, s4.age, s4.height, s4.grade);
	
	return 0;
}
