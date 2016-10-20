#include<stdio.h>             
void main()                //graetest among an array ;
{  
   int a[5] , i , great ;
  printf("enter value of aarray");
  for(i=0;i<5;i++)
 { 
   scanf( "%d" , &a[i] ) ;
 }

great = a[0] ;
 for(i=1;i<5;i++)
  {   
      if( great < a[i] )
    {
        great = a[i] ;
   
    }
       else  
    {
         great = a[i-1] ;
    }
  }
 printf("%d is greatest" , great) ;
}      
