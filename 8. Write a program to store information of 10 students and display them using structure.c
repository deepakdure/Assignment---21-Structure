#include <stdio.h>
#include <string.h>
struct students
{
    char name[20];
    int class;
    int roll_no;
    char section;
    float marks;
};
int main()
{
    int i;
    struct students s[3];
    for (i = 0; i < 3; i++)
    {
        printf("%d :- Enter Name , Class , Roll No , Section and Marks\n", i + 1);
        fflush(stdin);
        fgets(s[i].name, 20, stdin);
        s[i].name[strlen(s[i].name) - 1] = '\0';
        scanf("%d%d", &s[i].class, &s[i].roll_no);
        fflush(stdin);
        scanf("%c", &s[i].section);
        scanf("%f", &s[i].marks);
    }
    printf("**********************************\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d :- %s  %d  %d  %c  %f\n", i + 1, s[i].name, s[i].class, s[i].roll_no, s[i].section, s[i].marks);
    }
}