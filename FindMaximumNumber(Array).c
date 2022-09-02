#include<stdio.h>
int main()
{
    int i, n, max, num[100];
    printf("How Many Number: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    max = num[0];

    for(i=1; i<n; i++)
    {
        if(max<num[i])
        {
            max = num[i];
        }
    }
    printf("The Maximum Number is %d",max);


    return 0;
}
