#include<iostream>
using namespace std;
class internal 
{
   int imarks;
public:
 int iget()
 {
  cout<<"emter marks of internal :\n" ;
   return 0; 
}
 int idisp()
{ cin>>imarks ;
  return imarks ;                                                  
 }
};
    
class external 
{
   int emarks;
public:
 int eget()
 {
  cout<<"emter marks of internal :\n" ;
  return 0;
 }
int edisp()
{
  cin>>emarks ;
  return emarks ; 
}

};

class total : public internal , public external 
{
 int tot;
 public:
   int disp()
    { 
     iget();
        if( idisp() >= 0 && idisp() <= 20 )
           {
            eget();
               {
                 if( edisp() >= 0 && edisp() <= 80 )
                                                                                                     
                   {         tot= idisp() + edisp() ;                                  
                            cout<<"total marks is: \n"<<tot;                                    
                   }
                 else 
                     tot=idisp() ;                
                      cout<<"total marks is :\n"<<tot;
               }         
          }
       else 
           tot= 0 ;
           cout<<"total marks is :\n"<<tot;        
    return 0 ;
   }
};

  int main()
{
    total t1;
       t1.disp();       
     return 0 ;  
}






 
