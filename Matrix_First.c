#include<stdio.h>
void main()
 { 
   int a[3][3] , i , j  ; 
   printf("enter matrix of 3 nos");
      for(i=0;i<3;i++)
       { 
           for(j=0;j<3;j++)
               {
                 scanf( "%d",&a[i][j] ) ; 
                }
        }
  printf("my matrix is:\n");
      for(i=0;i<3;i++)
       {  
         for(j=0;j<3;j++)
             {  
                printf( "%d" , a[i][j]  ) ;
                
              }
            printf("\n");
        }
 }
