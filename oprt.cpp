#include<iostream.h>
class data 
{ 
  private: 
     int x ;
  public: 
             int get()
        {  
             cout<<"enter value of x :"<<endl;        
             cin>>x ; 
            return 0 ;        
         } 
  
  int disp() 
  {  
    cout << "value of x :" << x ; 
    return 0 ; 
   }
  
int data :: operator ++( ) 

  { 
     ++x ; 
     return 0 ;   
   } 
};           
         int main()
  {          
    data d1;
     d1.get();
     d1.disp();
      ++d1 ; 
     d1.disp();
     ++d1;
     d1.disp();  
     return 0;
}
