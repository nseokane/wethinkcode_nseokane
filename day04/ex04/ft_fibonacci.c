#include<stdio.h> 

int ft_fibonacci(int index){
   
  int i = 2, a = 0, b = 1, c; 

  if( index == 0){
    return a; 
  }



  for (i = 2; i <= index; i++) { 
      c = a + b; 
      a = b; 
      b = c; 
  } 

  return b; 
} 
  
int main () 
{ 
  int n = 9; 
  printf("%d",  ft_fibonacci(n)); 
  getchar(); 
  return 0; 
} 