#include<stdio.h>

  void main()      //print reverse of string;
{ 
  char str[10] ; 
  int i , l = 0 ;

 printf("enter string \n ") ;
 scanf("%s" , &str) ;
 
 for( i=0 ; str[i]!='\0' ; i++ )
   {
      l++;
   }
 
  printf("reverse of string is : \n") ;

 for( i=l ; i >0  ; i-- )
   { 
     printf( "%c " , str[i] ) ;
     printf("\n") ; 
   }
}    
