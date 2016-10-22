#include<iostream>
using namespace std ;

class marks
{
   private:
   int a , b ;
   public: 
 
   int input(int x , int y) ;
   int greatest() ;
   int disp() ;
   
};                                                                                       
                                                                                                       
int marks :: input( int x , int y ) 
 {
         a = x ;
         b = y ;
      return 0 ;
 } 

int marks :: greatest()
{
   if(a>b)
   return a ;
   else 
   return b ;
} 

int marks :: disp() 
{
  cout<<"\n greatest no between a and b : \n"<< greatest() ;
  return 0 ;
} 

                                                                             
 int main()
{
  marks m1 ;

  m1.input(50 , 100) ;
  m1.disp() ;
  return 0 ;
}                                                                                              
                                                                                         
                                                                                                  
                                                                                                        
                                                                                     
                                                                                               
                                                                                         
                                                                                                  
                                                                                                        
                                                                                     
                                                                                               
                                                                                         
                                                                                                  
                                                                                                        
                                                                                     
                                                                                               
                                                                                         
                                                                                                  
                                                                                                        
                                                                                     
                                                                                               
                                                                                         
                                                                                                  
                                                                                                        
                                                                                     
                                                                                               
                                                                                         
                                                                                                  
                                                                                                        
                                                                                     
                                                                                               
                                                                                         
                                                                                                  
                                                                                                        
                                                                                     
                                                                                               
                                                                                         
                                                                                                  
                                                                                                  
                                                                                                            
  
