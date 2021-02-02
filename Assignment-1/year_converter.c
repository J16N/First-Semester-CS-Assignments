#include <stdio.h>
 
int main(int argc, char *argv[])
{
    int days = 0, years = 0, weeks = 0;
 
    printf("\n------ Days conversion ------\n");
    printf(" No. of days: "); scanf("%d", &days);
 
    years = days / 365;
    weeks = (days % 365) / 7;
    days = (days % 365) % 7;
    printf("\n %d %s, %d %s, %d %s.\n\n", 
        years, (years > 1 ? "years" : "year"), 
        weeks, (weeks > 1 ? "weeks" : "week"), 
        days, (days > 1 ? "days" : "day"));
 
    return 0;
}