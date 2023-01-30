#include <stdio.h>
int rev_Int(int);
int main()
{
    int Num, Rev = 0;   
    printf("\nEnter the number to reverse: ");
    scanf("%d", &Num);   
    Rev = rev_Int (Num);
    printf("Reverse of %d is = %d\n", Num, Rev);
    return 0;
}
int rev_Int (int Num)
{
    int remainder, Rev = 0;    
    while (Num > 0)
	{

        remainder = Num %10;
        Rev = Rev *10+ remainder;
        Num = Num /10;
    }    
    return Rev;
}
