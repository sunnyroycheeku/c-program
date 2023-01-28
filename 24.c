#include<stdio.h>
#include<conio.h>
int main()
{
    int num, rev = 0, rem;
    printf("Enter the number to reverse: ");
    scanf("%d", &num);    
    while (num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10;
}    
printf("The reversed number is: %d", rev);
getch();
}
