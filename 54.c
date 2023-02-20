/* program to print mean of first n odd numbes and even numbers*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n, oddSum=0,evenSum=0,oddCount=0,evenCount=0;     
    double evenmean, oddmean;                                     
    printf("Enter the value for n: ");                     
    scanf("%d",&n);    
    for(i=1; i<=n; i++){                                   
    if(i % 2==0){                                         
        evenSum=evenSum+i;
        evenCount++;
    }
    else{                                       
        oddSum=oddSum+i;
        oddCount++;
    }
    }
evenmean=evenSum/evenCount;                
oddmean=oddSum/oddCount;
printf("mean of first n odd numbers is %.2f: \n",oddmean);   
printf("mean of first n even numbers is %.2f: ",evenmean);
    return 0;
}
