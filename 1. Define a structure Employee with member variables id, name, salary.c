#include <stdio.h>
#include <string.h>
struct employ
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct employ e1, e2;

    printf("Information of 2nd employ\n");
    e1.id = 12345;
    strcpy(e1.name, "deepak");
    e1.salary = 20000.399;
    printf("ID = %d\n", e1.id);
    printf("Name = %s\n", e1.name);
    printf("Salary = %f\n\n", e1.salary);

    printf("Information of 2nd employ\n");
    e2.id = 5674;
    strcpy(e2.name, "singh");
    e2.salary = 38759.12;
    printf("ID = %d\n", e2.id);
    printf("NAME = %s\n", e2.name);
    printf("Salary = %f\n\n", e2.salary);
}