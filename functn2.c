#include<stdio.h>


void main()
{
  
  int a[5] , i ;
 printf("enter elements of array ") ;
 for( i=0 ; i<5 ; i++ ) 
  {
    scanf( "%d" , &a[i] ) ;  
  }    
sum(a) ;
  printf( "additon is : %d \t" ,  sum(a) ) ;
}
 int sum ( int *p ) //def
 {  
  int j , c=0 ;
  for(j=0 ; j<5 ; j++)
   { 
      c = c + *(p+j) ;
   }
 return c ;
 }


