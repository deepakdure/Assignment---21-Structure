#include <stdio.h>
#include <string.h>
#include <conio.h>
struct employ
{
    char id[20];
    char name[20];
    float salary;
};
void display(struct employ x)
{
    printf("ID :- %s  NAME :- %s  SALARY :- %f\n", x.id, x.name, x.salary);
}
void highest(struct employ e[], int size)
{
    int i;
    struct employ t;
    for (i = 0; i < size; i++)
    {
        {
            if (e[0].salary < e[i].salary)
            {
                e[0] = e[i];
            }
        }
    }
}
struct employ input()
{
    struct employ e1;
    fflush(stdin);
    printf("enter id = ");
    fgets(e1.id, 20, stdin);
    e1.id[strlen(e1.id) - 1] = '\0';
    fflush(stdin);
    printf("enter name = ");
    fgets(e1.name, 20, stdin);
    e1.name[strlen(e1.name) - 1] = '\0';
    printf("enter salary = ");
    scanf("%f", &e1.salary);
    return e1;
}
int main()
{
    struct employ e[10];
    int i;
    for (i = 0; i < 10; i++)
        e[i] = input();
    printf("\nHighest salary employee is :-\n");
    highest(e, 10);
    display(e[0]);
    getch();
}