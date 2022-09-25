#include<stdio.h>
int main()
{
    int first_exam[10] = {4,8,12,24,4,4,4,4,4,16};
    int second_exam[10] = {8,4,8,8,8,8,8,8,8,8};
    int final_exam[10] = {12,12,12,12,12,12,12,12,12,12};

    int i;
    double total_marks[10];
    for(i=0;i<10;i++)
    {
        total_marks[i] = ((first_exam[i]/4.0) + (second_exam[i]/4.0) + (final_exam[i]/2.0) );
    }
    for(i=0;i<10;i++)
    {
        printf("%.2lf\n",total_marks[i]);
    }

    return 0;
}
