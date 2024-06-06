#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define Employee struct emp
void add(FILE * fp);
void * del(FILE * fp);
void modify(FILE * fp);
void display_whole_list(FILE * fp);
void searchRecord(FILE * fp);
void printChar(FILE * fp);
void printHead();

struct emp
{
    int id;
    char name[100];
    char desgn[10];
    float sal;
    char jdate[8];
    char gender[10];
    char branch[50];
    char psaddr[200];
    char prtaddr[200];
    char phone[15];
    char mail[20];
};

int main()
{
    FILE * fp;
    Employee e;
    int option;
    char another;

    if((fp=fopen("employeeInfo.txt", "rb+"))==NULL)
}