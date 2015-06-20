/****************
*Finding PI to the Nth Digit
*By Tom Biju
****************/
#include <iostream>
#include <iomanip>	//for setting precision
#include <stdlib.h> 
using namespace std;
//Program to find PI to a specified number of decimal places
int main(int argc, char* argv[]){
  double PI=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
  int decimalPlaces;
  char* commandLine=argv[1];
  if(commandLine==NULL){
  cout<<"Enter how many decimal places of PI you would like to see (limit 100):  "<<endl;
  cin>>decimalPlaces;
  decimalPlaces+=1;
  }
   else{
	   decimalPlaces=atoi(commandLine);
	   decimalPlaces+=1;
   }
  cout<<setprecision(decimalPlaces)<<PI<<endl;
  return 0;
}
