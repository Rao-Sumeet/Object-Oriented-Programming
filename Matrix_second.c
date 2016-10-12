#include<stdio.h>
void main()
 { 
   int a[3][3] , i , j  ; 
   printf("enter matrix nos here : \n");
      for(i=0;i<3;i++)
        { 
           for(j=0;j<3;j++)
               {
                 scanf( "%d",&a[i][j] ) ; 
                }
        }
  printf("after transporse matrix is: \n");
      for(i=0;i<3;i++)
        {  
           for(j=0;j<3;j++)
              {  
                printf( "%d" , a[j][i]  ) ;
              }  
              
            printf("\n");
        }
 }
