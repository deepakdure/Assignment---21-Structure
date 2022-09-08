#include <stdio.h>
struct time
{
    int hrs, min, sec;
};
void different(struct time start, struct time stop, struct time *diff)
{
    while (stop.sec > start.sec)
    {
        --start.min;
        start.sec += 60;
    }
    diff->sec = start.sec - stop.sec;
    while (stop.min > start.min)
    {
        --start.hrs;
        start.min += 60;
    }
    diff->min = start.min - stop.min;
    diff->hrs = start.hrs - stop.hrs;
}
int main()
{
    struct time x;
    struct time start, stop, diff;
    printf("enter start time\n");
    scanf("%d%d%d", &start.hrs, &start.min, &start.sec);
    printf("enter end time\n");
    scanf("%d%d%d", &stop.hrs, &stop.min, &stop.sec);
    different(start, stop, &diff);
    printf("****************************\n");
    printf("Time Diff :- %d:%d:%d - ", start.hrs, start.min, start.sec);
    printf("%d:%d:%d ~~> ", stop.hrs, stop.min, stop.sec);
    printf("%d:%d:%d", diff.hrs, diff.min, diff.sec);
}