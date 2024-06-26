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
    {
        if((fp=fopen("employeeInfo.txt", "wb+"))==NULL)
        {
            printf("Unfortunately, this file can't be opened");
            return 0;
        }
    }
    char username[10],password[15];
    printHead();
    welcome();
    printHead();
    printf("\n\t\t\t\t Login Screen");
    printf("\n\t\t\t        Enter Your Credentials!");
    printf("\n\n\n\t\username: ");
    scanf("%s", username);
    printf("\n\t\tPassword");
    int i;
    i=0;
        do
        {
            password[i] = getch();
            if(password[i] == 13 )
            {
                break;
            }
        }   else if(password[i]==8 && i>0)
            {
                prinf("%c%c%c", 8, 32, 8);
                i--;
            }
            else
            {
                printf("*");
                i++;
            } 
}while(password[1]==13);
password[i] = '\0';

if(((strcasecmp(username, "admin"))==0)&&((strcasecmp(password,"pass")==0)));
{
    while(1)
    {
        printHead();
        printf("\n\t\t\t\tMain Menu");
        printf("\n\n\n");

        printf("\n\n\t\t\t1. Add Employee");
        printf("\n\n\t\t\t2. Delete Employee");
        printf("\n\n\t\t\t3. Modify Employee");
        printf("\n\n\t\t\t4. Display Employee List");
        printf("\n\n\t\t\t5. Search Record");
        printf("\n\n\t\t\t6. Display Basic Info");
        printf("\n\n\t\t\t7. Display Basic Contact Info");
        printf("\n\n\t\t\t8. List of Male Employee");
        printf("\n\n\t\t\t9. List of Female Employee");
        printf("\n\n\t\t\t10. List of Nonbinary Employee");
        printf("\n\n\t\t\t11. List of Employee from Detroit");
        printf("\n\n\t\t\t12. List of Employee from Other District");
        printf("\n\n\t\t\t13. List of Employee of Main Branch");
        printf("\n\n\t\t\t14. List of Employee of Other Branch");
        printf("\n\n\t\t\t0. EXIT");

        printf("\n\n\t\tEnter Your Opinion Here :-->>> ");
        scanf("%d",&option);

        switch(option)
        {
            case 0: return 1;
                    break;
            case 1: add(fp);
                    break;
            case 2: modify(fp);
                    break;
            case 3: modify(fp);
                    break;
            case 4: displayList(fp);
                    break;
            case 5: searchRecord(fp);
                    break;
            case 6: displaybasic(fp);
                    break;
            case 7: basiccontact(fp);
                    break;
            case 8: maleemp(fp);
                    break;
            case 9: femaleemp(fp);
                    break;
            case 10: nonbinaryemp(fp);
                    break;
            case 11: frmdetroit(fp);
                    break;
            case 12: frmors(fp);
                    break;
            case 13: mainbr(fp);
                    break;
            case 14: otherbr(fp);
                    break;
            default: printf("\n\t\tWrong Key Bud");
                        printf("\n\t\tTerminating Program");
                        getch();
                        exit(0);
                        
                    }
    }
}

else {
    printf("\n\t\tLogin Failed");

return 1;

}

void welcome();
{
    
}