#include<iostream>
using namespace std ;
class data2 ;
class data1
{ 
   float x ;
 public:
   int get()
  {  
    cout<<"enter value of x \n";
    return 0;
  }
   friend float add( data1 , data2 );
};
  
  
class data2 
{ 
   float y ;
 public:
   int get1()
   { 
      cout<<"enter value of y";
   return 0 ;
   } 
    friend float add( data1 , data2 );
};   
  
float add(data1 d1 , data2 d2) 
{
  cin>>d1.x>>d2.y ;
  if(d1.x > d2.y)
     return d1.x ;           
  else 
     return d2.y ;
}

    int main()
  { 
    data1 r1 ; data2 r2 ;
    r1.get();
    r2.get1();
    cout<<"greater no is :\n"<<add(r1 , r2) ;         
    return 0 ;    
  }

