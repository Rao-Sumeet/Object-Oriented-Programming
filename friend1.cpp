#include<iostream.h>
using namespace std;
class data
{  
   int x;
   friend void show(data) ;

public: 
   void get()
  {    
      cout<<enter value of x"; 
      cin>>x; 
  }      
};
 
  void show(data d1)   
 { 
   cout<<"private data is :"<<d1.x;
                                    
 }   
    
 void main() 
{  
    data d2;
    d2.get();
    show(d2); 
}    


              
                    
                        























