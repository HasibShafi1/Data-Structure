#include <stdio.h>
struct customer
{
    char firstName[50];
    int nid;
    int age;
    char occupation[100];
    float acbalance;
};

int main()
{
    int i,p;
    printf("Enter how many customer:\n");
    scanf("%d",&p);
    struct customer s[p];
    float r,t;

    for (i = 0; i < p; ++i)
    {
        printf("info of person %d\n",i+1);
        printf("enter NID:");
        scanf("%d", &s[i].nid);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter occupation: ");
        scanf("%s", s[i].occupation);
        printf("Enter account balance: ");
        scanf("%f", &s[i].acbalance);
        printf("Enter Interest Rate :");
        scanf("%f",&r);
        printf("Enter Time in Years :");
        scanf("%f",&t);

    }




    printf("\n\nDisplaying Information:\n\n");


    for (i = 0; i < p; ++i)
    {
        printf("info of person %d\n",i+1);
        printf("\nNID number : %d\n", s[i].nid);
        printf("First name : ");
        puts(s[i].firstName);
        printf("Age : %d", s[i].age);
        printf("Occupation :");
        puts(s[i].occupation);
        printf("Account balance: %.3f\n",s[i].acbalance);
        printf("interest :%.2f\n",(r*t*s[i].acbalance)/100);
        printf("Balance After interest:%.2f ",((r*t*s[i].acbalance)/100)+s[i].acbalance);
        printf("\n");
    }
    return 0;
}


