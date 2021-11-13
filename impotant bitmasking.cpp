#include<bits/stdc++.h>
using namespace std;
//print binary number
void printbinarynumber(int num){
	for(int i=10; i>=0; i--){
		cout<<((num>>i)&1);
	}cout<<endl;
}
int main(){

printbinarynumber(9);

// checking setbit or not
    int a=9;
	int i=3;
	if((a&(1<<i)) !=0){
		cout<<"set bit"<<endl;
	}else{
		cout<<"not set bit"<<endl;
	}
	
	
   // making set of any bit
   int b=1;  // making first bit set
   printbinarynumber(a|(1<<b));
   
   
   
   // using tilda operator for inverting bit
   
   printbinarynumber(~a);
   
   
   
   // making unset of any bit
   int c=3;
   printbinarynumber(a&(~(1<<c)));
   
   // making toggle bit means 1 to 0 and 0 to 1 of a bit
   
   int d=2;
   printbinarynumber(a^(1<<d));
   
   // counting bit set
   int cnt=0;
   for(int i=31; i>=0; i--){
   	if((a&(1<<i)) !=0){
	   	cnt++;
	   }
   }
   cout<<cnt<<endl;
   
   
   
}
