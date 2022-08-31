#include<stdio.h>
int main()
{
    int n, num, reminder, rev = 0;
    printf("Enter The Number: ");
    scanf("%d",&num);
    n = num;

    while(num > 0)
    {
        reminder = num % 10;
        rev =  rev*10 + reminder;
        num = num / 10;
    }


    if (n == rev)
    {
        printf("%d is a Palindrome\n\n", n);
    }
    else
    {
        printf("%d is Not a Palindrome\n\n", n);
    }


    printf("Revarge Number is %d\n", rev);



    return 0;
}
