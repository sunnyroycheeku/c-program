#include<stdio.h>   
int main()  
{  
int a, b, sum;  
printf("Enter two numbers to be added ");  
    scanf("%d %d", &a, &b);  
    // calculating sum  
    sum = a + b;      
    printf("%d + %d = %d", a, b, sum);  
    return 0;  // return the integer value in the sum  
}
