#include <stdio.h>
#include <string.h>
struct employ
{
    char id[20];
    char name[20];
    float salary;
};
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
void SortByName(struct employ e[], int x)
{
    int i, j;
    struct employ temp;
    for (i = 1; i < x; i++)
    {
        for (j = 0; j < x - i; j++)
        {
            if (strcmp(e[j].name, e[j + 1].name) > 0)
            {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
}
void display(struct employ e)
{
    printf("ID = %s  NAME = %s  SALARY = %f\n", e.id, e.name, e.salary);
}
int main()
{
    struct employ e[3];
    int i;
    for (i = 0; i < 3; i++)
        e[i] = input();
    printf("*************************\n");
    printf("After Sorting By Nane :- \n");
    SortByName(e, 3);
    for (i = 0; i < 3; i++)
        display(e[i]);
}
