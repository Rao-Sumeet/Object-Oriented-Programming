#include<iostream>
using namespace std ;
class data1 ;
class data 
{
  int salary ;
public:
  void get () 
{
  cout<<"enter value of first salary : \n" ; 
  cin>>salary ;
}
  friend int disp ( data , data1 ) ;

};

class data1 
{
  int salary1 ;
public:
  void get1 () 
{
  cout<<"enter value of second salary : \n" ; 
  cin>>salary1 ;
}
  friend int disp ( data , data1 ) ;

};

  int disp ( data d , data1 d1 )
{
   int sum  = d.salary + d1.salary1 ;
}
  
int main()
{
  data k ; data1 w ;
 k.get();
 w.get1();
 cout<<"total salary is : \n"<< disp( k , w ) ;
return 0 ;
}



  
