#include<stdio.h>

void main()
{
  int div(int);     //declaration of user-defined functn :
   int n , result ;  
  printf("enter any no :");
  scanf("%d", &n) ;
  result = divi(n) ;      //caling of ............ functn :
    if(result == 1)
      {  printf("no is divisible");    
      }
    else
      { printf("no is not divisible");
      } 
}
   int divi(int n)   //defenation of user-defined functn :
  {
    if( n%10==0 )
       return 1 ;
    else 
       return 0 ;  
   } 

