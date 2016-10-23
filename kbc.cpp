#include<iostream>
using namespace std;
class ques1
{
  char e,a,b,c;
public:
void show1()
{
cout<<"1st quest is : "<<"who is known as the father of computer ?"<<endl;
cout<<"options are :\n"<<endl;
cout<<"a = charless babbage \n";
cout<<"b = sumit \n" ;
cout<<"c = cook \n" ;
return 0;
}
void input1()
{ 
cout<<"answer is :";
cin>>e;
return 0;
} 
void cond1()
{
   if(e==a)
  { 
   cout<<"a is correct";
   cout<<"we will go further";
  }  
     if(e==b)
  { 
   cout<<"b is not correct";
   cout<<"we will quiet ";
  }  
      if(e==c)
  { 
   cout<<"c is not correct";
   cout<<"we will quiet ";
  } 
return 0;
}
};

void main()
{
  ques1 q1;
  q1.get1();
  q1.input1();
  cout<<q1.input1() ;
  if( input1()==q1.a  ) 
{   
   cout<<"okk";
}
  else
   break ; 
 
 return 0;
}
