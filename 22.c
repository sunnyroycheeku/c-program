#include <stdio.h>  
   
int main()  
{  
    int rows, cols;  
          
    //Initialize matrix a  
    int a[][3] = {  
                    {1, 2 },  
                    {5,3  },
                };  
      
    //Calculates number of rows and columns present in given matrix  
    rows = (sizeof(a)/sizeof(a[0]));  
    cols = (sizeof(a)/sizeof(a[0][0]))/rows;  
      
    //Declare array t with reverse dimensions  
    int t[cols][rows];  
      
    //Calculates transpose of given matrix  
    for(int i = 0; i < cols; i++){  
        for(int j = 0; j < rows; j++){  
            //Converts the row of original matrix into column of transposed matrix  
            t[i][j] = a[j][i];  
        }  
    }  
      
    printf("Transpose of given matrix: \n");  
    for(int i = 0; i < cols; i++){  
        for(int j = 0; j < rows; j++){  
           printf("%d ", t[i][j]);  
        }  
        printf("\n");  
    }  
   
    return 0;  
}
