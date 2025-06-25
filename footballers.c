#include <stdio.h>
struct footballers
{
    char name[50];
    int jnum;
    int age;
    int wageperday;
};

int main()
{
    int i,p;
    printf("Enter how many Players :");
    scanf("%d",&p);
    struct footballers s[p];

    for (i = 0; i < p; ++i)
    {
        printf("info of footbller %d\n",i+1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("enter jersy number:");
        scanf("%d", &s[i].jnum);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter Wage per Day:");
        scanf("%d",&s[i].wageperday);

    }




    printf("\n\nDisplaying Information:\n\n");


    for (i = 0; i < p; ++i)
    {
        printf("info of footballer %d\n",i+1);
        printf("Name :");
        puts(s[i].name);
        printf("Jersey Number : %d\n", s[i].jnum);
        printf("Age : %d\n", s[i].age);
        printf("Daily income :%d $\n",s[i].wageperday);
        printf("Monthly income :%d $\n",s[i].wageperday*30);
        printf("Yearly income :%d $\n",s[i].wageperday*30*12);
        printf("\n");
    }
    return 0;
}



