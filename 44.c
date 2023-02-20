#include <stdio.h>
int main()
{
    int phy, chem, bio, math; 
    float per; 
    /* Input marks of four subjects from user */
    printf("Enter four subjects marks: ");
    scanf("%d%d%d%d", &phy, &chem, &bio, &math);
    /* Calculate percentage */
    per = (phy + chem + bio + math ) / 4.0;
    printf("Percentage = %.2f\n", per);
    /* Find grade according to the percentage */
    if(per >= 75)
    {
        printf("distction");
    }
    else if(per >= 65)
    {
        printf("first division");
    }
    else if(per >= 50)     
    {
        printf("second division");
    }
    else if(per >= 40)
    {
        printf("third division");
    }
    else if(per <40)
    {
        printf("Grade E");
    }

return 0;
}
