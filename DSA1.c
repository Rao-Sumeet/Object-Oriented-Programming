#include<stdio.h>         //lower triangular sparse matrix [ ltsm ]
void main() 
{ 
  int a[3][3] ,i ,j ;
printf("enter matrix :\n");
for(i=0;i<3;i++) 
 {  
   for(j=0;j<3;j++) 
     {   scanf("%d", &a[i][j] );
            
            
     }   
 }

printf("lower sparse matrix is :\n");
for(i=0;i<3;i++) 
 {  
   for(j=0;j<3;j++) 
    {    
       if( i > j )    
          { 
           a[i][j]=0;                          
          }
       printf("%d", a[i][j] );                      
    }
    printf("\n");                                    
  }
}
