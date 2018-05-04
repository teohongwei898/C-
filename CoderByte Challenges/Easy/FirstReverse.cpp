#include <iostream>
using namespace std;

string FirstReverse(string str) { 

  // code goes here   
  for (int i=0;i<str.length()/2;i++) swap(str[i],str[str.length()-i-1]);
  return str; 
            
}

int main() { 
  
  // keep this function call here
  cout << FirstReverse(gets(stdin));
  return 0;
    
} 















  
