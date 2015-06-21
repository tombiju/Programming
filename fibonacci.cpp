/**********
 * Fibonacci Sequence
 * By Tom Biju
 *********/
#include <iostream>
using namespace std;
int fibonacci(int x);
int main(){
	int x;
	cout<<"How many fibonacci numbers would you like to display?"<<endl;
	cin>>x;
	fibonacci(x);
	return 0;
}
int fibonacci(int x){
	int a=0;
	int b=1;
	int counter=0;
	int temp;
	cout<<a<<" ";
	cout<<b<<" ";
	while(counter!=x-2){
		temp=b;
		b=a+b;
		cout<<b<<" ";
		a=temp;
		counter++;
	}
	cout<<endl;
}
