#include<bits/stdc++.h>
using namespace std;
//print binary number
void printbinarynumber(int num){
	for(int i=10; i>=0; i--){
		cout<<((num>>i)&1);
	}cout<<endl;
}
int main(){

printbinarynumber(59);


// binary  small of letter

for(char c='a'; c<='z'; c++){
	cout<<c<<endl;
	printbinarynumber(int(c));
}

// upper case conversion
 char B='B';
 char bb=B|' ';
 cout<<bb<<endl;
  
  //lower case to upper case
  char d='d';
  char D=(d&'_');
  cout<<D<<endl;
  
// unset all lcb till ith bit

int a=59;
int i=4;
int b=(a&(~((1<<(i+1))-1)));

printbinarynumber(b);

   // unset all msb till ith bit
   i=3;
   int c=(a&((1<<(i+1))-1));
   printbinarynumber(c);
   
   //checking power of 2
   
   int n=16;
   if(n&(n-1)){
   	cout<<"not power of two"<<endl;
   }else{
   	cout<<"power of two"<<endl;
   }
}
