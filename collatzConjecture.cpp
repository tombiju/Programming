/**********
*Collatz Conjecture
*By Tom Biju
**********/
#include <iostream>

using namespace std;

int collatz(int x);

int main(){
	int x;
	cout<<"Enter an integer to find the collatz conjecture of: "<<endl;
	cin>>x;
	cout<<"The number of steps it takes to reach one is: "<<collatz(x)<<endl;
}
int collatz(int x){
	int steps;
	while(x!=1){
		if(x%2==0){
			x=x/2;
			steps++;
		}
		else{
			x=(x*3)+1;
			steps++;
		}
	}
	return steps;
}
