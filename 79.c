#include<stdio.h>
struct point
{
   int a;
   float b;
};
int main()
{
   struct point p1={3,6.3};
   struct point *p2=&p1;
   printf("TechVidvan Tutorial: Pointer to structures!\n\n");
   printf("First value is: %d\n",p2->a);
   printf("Second value is: %0.1f",p2->b);
   return 0;
}
