#include<stdio.h>
#include<string.h>

struct Subjects{
	char code[20];
	char title[50];
	char instructor[50];
	char schedule[50];
	float units;
};

int Set_Subject(struct Subjects *course, char code[], char title[], char instructor[], char schedule[], int units){
	strcpy(course->code,code);
	strcpy(course->instructor, title );
	strcpy(course->title, instructor );
	strcpy(course->schedule, schedule );
	course->units = units;
}

int main(void){

	struct Subjects Sub1;
	struct Subjects Sub2;
	struct Subjects Sub3;
	struct Subjects Sub4;
	
	Set_Subject(&Sub4,"CIS 2106","Blasminda Catubig Mayol","Computer Hardware Servicing NC II","T,Th",3);
	Print_Subject(&Sub4);
	
	/* 1st sub */
	strcpy(Sub1.code, "CIS 1201");
	strcpy(Sub1.title, "Programming II");
	strcpy(Sub1.instructor, "Fillo, Fr. Peter");
	strcpy(Sub1.schedule, "T 06:00 PM - 09:00 PM / Th 06:00 PM - 08:00 PM");
	Sub1.units = 3;
	
	/* 2nd sub */
	strcpy(Sub2.code, "CIS 1204");
	strcpy(Sub2.title, "Information Management I");
	strcpy(Sub2.instructor, "Pepito, Glenn B.");
	strcpy(Sub2.schedule, "M W 04:30 PM - 06:00 PM");
	Sub2.units = 3;
	
	/* 3rd sub */
	strcpy(Sub3.code, "CIS 2105");
	strcpy(Sub3.title, "Networking II");
	strcpy(Sub3.instructor, "Sebial, Archival J.");
	strcpy(Sub3.schedule, "T 10:30 AM - 1:30 PM / Th 10:30 AM - 12:30 PM");
	Sub3.units = 3;
	
	/*print 1st sub*/
	printf("\nSubject 1 Code: %s\n", Sub1.code);
	printf("Subject 1 Title: %s\n", Sub1.title);
	printf("Subject 1 Instructor: %s\n", Sub1.instructor);
	printf("Subject 1 Schedule: %s\n", Sub1.schedule);
	printf("Subject 1 Unit/s: %.2f\n", Sub1.units);
	
	/*print 2nd sub*/
	printf("\nSubject 2 Code: %s\n", Sub2.code);
	printf("Subject 2 Title: %s\n", Sub2.title);
	printf("Subject 2 Instructor: %s\n", Sub2.instructor);
	printf("Subject 2 Schedule: %s\n", Sub2.schedule);
	printf("Subject 2 Unit/s: %.2f\n", Sub2.units);
	
	/*print 3rd sub*/
	printf("\nSubject 3 Code: %s\n", Sub3.code);
	printf("Subject 3 Title: %s\n", Sub3.title);
	printf("Subject 3 Instructor: %s\n", Sub3.instructor);
	printf("Subject 3 Schedule: %s\n", Sub3.schedule);
	printf("Subject 3 Unit/s: %.2f\n", Sub3.units);
}
