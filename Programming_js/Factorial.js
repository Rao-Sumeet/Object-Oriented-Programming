function FirstFactorial(num) { 

  for ( var i=1 ; i<num ; i++ )
 { num*=i;
 }
  return num; 
         
}
   
// keep this function call here 
FirstFactorial(readline());