#include<stdio.h>
#include<string.h>
struct employee{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];	
};
int main(){
	struct employee emp = {
		"john doe",
		12345,
		"human resources",
		55000.50,
		"john.doe@company.com"
	};
	printf("Employee details: \n");
	printf("Name: %s\n", emp.name);
	printf("ID: %d\n", emp.id);
	printf("Department: %s\n", emp.department);
	printf("salary: %.2f\n", emp.salary);
	printf("Email: %s\n", emp.email);
	return 0;
}