
#include<stdio.h>
float Simple_int(float p, float r, float t) // function for finding simple interest
{
    float si;   
    si = (p * r * t)/100; // formula
    return si; // returning yhe value of si
}
 int main()
{
    float a,b,c;
    float intrest;
    printf("\nEnter Prinicpal :\t");
    scanf("%f",&a);
    printf("\nEnter year:\t");
    scanf("%f",&b);
    printf("\nEnter Rate:\t");
    scanf("%f",&c); // taking all 3 values p,r and time
    intrest = Simple_int(a,b,c); // passing value in function
    printf("\nSimple Interest = %.2f\n", intrest); //output
    printf("\n");
    return 0;
}   
