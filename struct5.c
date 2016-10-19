#include<stdio.h>
struct record 
{
  char name[20] ;
  float literacy ;
  float income ;
} s1[3] ;               //record of state per-capita income and literacy rate ; 
  
void main()
{
  int count=0 ,  t=0 , i ;
  float Imax , Lmax ;
  printf("enter information of states :\n") ;
  for(i=0 ;i<3; i++)
  	{
   	printf( "enter %d state name\n" , i+1 ) ;
   	scanf( "%s" , &s1[i].name ) ;
   	printf("enter %d state litercy rate\n",i+1);
   	scanf( "%f" , &s1[i].literacy);
   	printf("enter %d state income \n",i+1 );
   	scanf( "%f" , &s1[i].income);
  	}
Imax = s1[0].income;
Lmax = s1[0].literacy ;
for(i=1 ; i<3 ; i++ )
   {
     if( Imax < s1[i].income ) 
       { Imax = s1[i].income ; 
         t++ ; }  
     if( Lmax < s1[i].literacy )
       {  Lmax = s1[i].literacy ;
           count++ ; }  
   } 
  printf(" all details are here :- ") ;
  for(i=0 ; i<3 ; i++ )
   {
     printf("name of %d state is : \t %s \n" , i+1 , s1[i].name ) ;      
     printf("literacy rate %d state is : \t %f \n" , i+1 , s1[i].literacy ) ;
     printf("income of %d state is : \t %f \n" , i+1 , s1[i].income ) ;
   }   
printf("Highest literacy containing state is %s with %f percentage \n" , s1[count].name , Lmax ) ;
printf("Highest income containing state is %s with %f per-capita income \n" , s1[t].name , Imax ) ;

}



