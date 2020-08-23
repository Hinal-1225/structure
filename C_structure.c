#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int empno;
    char empname[20];
    char deptname[20];
    int salary;
}e[20];
void disp_fun(struct employee e[],int n);
int main()
{
    system("cls");
    int n,i;
    printf("\nEnter number of employee u want to enter : ");
    scanf("%d",&n);
    printf("\nEnter employee details ");
    for(i=0;i<n;i++)
    {
        printf("\nEnter emp no :");
        scanf("%d",&e[i].empno);
        printf("\nEnter emp name :");
        scanf("%s",&e[i].empname);
        printf("\nEnter emp department name :");
        scanf("%s",&e[i].deptname);
        printf("\nEnter emp salary :");
        scanf("%d",&e[i].salary);
        printf("\n-------------------------------");
    }
    disp_fun(e,n);
    system("pause");
	return 10;
}
void disp_fun(struct employee e[],int n)
{
    int i;
    printf("\nEmpno\tEmpname\tDeptname  Empsalary\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",e[i].empno);
        printf("%s\t",e[i].empname);
        printf("%s\t",e[i].deptname);
        printf("  %d\n",e[i].salary);
    }
}
