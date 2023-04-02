

#include<stdio.h>
#include<string.h>
struct employee
{
	char name[50];
	char gender[10];
	char address[3000];
	int age;
	long int salary;
	long long int mobno;
	char company[50];
	char dob[50];
	char desgn[50];
	int exp;
	char dept[50];
}e[10];
void main()
{
	int i, n;
	printf("ENTER THE NO. OF EMPLOYEE'S DETAILS YOU WANT TO COLLECT :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("EMPLOYEE-%d :\n",i);
		printf("NAME : ");
		scanf("%s",e[i].name);
		printf("GENDER :");
		scanf("%s",e[i].gender);
		printf("ADDRESS :");
		scanf("%s",e[i].address);
		//fgets(e[i].address,sizeof(e[i].address,);
		printf("AGE :");
		scanf("%d",&e[i].age);
		printf("SALARY :");
		scanf("%ld",&e[i].salary);
		printf("MOBILE NUMBER :");
		scanf("%lld",&e[i].mobno);
		printf("COMPANY :");
		scanf("%s",e[i].company);
		printf("DATE OF BIRTH :");
		scanf("%s",e[i].dob);
		printf("DESIGNATION :");
		scanf("%s",e[i].desgn);
		printf("EXPERIENCE :");
		scanf("%d",&e[i].exp);
		printf("DEPARTMENT :");
		scanf("%s",e[i].dept);
	}
	for(i=1;i<=n;i++)
	{
		printf("********EMPLOYEE %d DETAILS************\n",i);
	    printf("NAME : %s\n",e[i].name);
	    printf("GENDER : %s\n",e[i].gender);
	    printf("ADDRESS :%s\n",e[i].address);
	    printf("AGE :%d\n",e[i].age);
	    printf("SALARY :%ld\n",e[i].salary);
	    printf("MOBILE NUMBER :%lld\n",e[i].mobno);
	    printf("COMPANY :%s\n",e[i].company);
	    printf("DATE OF BIRTH :%s\n",e[i].dob);
	    printf("DESIGNATION :%s\n",e[i].desgn);
	    printf("EXPERIENCE :%d\n",e[i].exp);
	    printf("DEPARTMENT :%s\n",e[i].dept);
	}
}

