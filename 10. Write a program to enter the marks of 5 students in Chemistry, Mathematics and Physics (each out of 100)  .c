#include <stdio.h>
#include <string.h>
struct Marks
{
    char name[20];
    int roll_no;
    float chem_marks, maths_marks, phy_marks;
};
void display(struct Marks s)
{
    printf("%s  %d  %f  %f  %f", s.name, s.roll_no, s.chem_marks, s.maths_marks, s.phy_marks);
}
int main()
{
    struct Marks s[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d :- Enter Name , Roll No , Chem Marks , Math Marks , Phy Marks\n", i + 1);
        fflush(stdin);
        fgets(s[i].name, 20, stdin);
        s[i].name[strlen(s[i].name) - 1] = '\0';
        scanf("%d%f%f%f", &s[i].roll_no, &s[i].chem_marks, &s[i].maths_marks, &s[i].phy_marks);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Student No :- \n");
        float percentage = (s[i].chem_marks + s[i].maths_marks + s[i].phy_marks) / 3;
        if (s[i].chem_marks <= 100 && s[i].maths_marks <= 100 && s[i].phy_marks <= 100)
            printf("Percentage :- %f\n", percentage);
        else
            printf("error");
    }
}