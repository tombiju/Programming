/***********************************
Palindrome Checker
Created By Tom Biju
***********************************/
#include <iostream>   
#include <cstring>   
using namespace std;   
int main()   
{   
   char str[20];  
   cout<<"\nEnter a string : ";  
   cin.getline(str,20);  
   int x=0;
   string check="Output: ";
    for(int i=strlen(str)-1;i>=0;i--){  //Starting from the last letter of the string, we will compare that letter to the first letter and then work our way inwards. So, next we will compare the second to last character with the second character, and so on.
        if(tolower(str[i])==tolower(str[x])){       //tolower() is used so that the program can be case insensitive
            x++;        //if the characters are the same, we will increment the value of x so that we will compare the next corresponding  characters. "i" is decremented by the for loop, so nothing needs to be done to i.
        }
        else if(tolower(str[i])!=tolower(str[x])){
            check+="The entered string is not a palindrome"; //if the characters do not match up, we make our output "0", indicating "false"; the string is not a palindrome
            break;  //since the string is confirmed as not being a palindrome, we can break out of the for loop
        }
        if(x==strlen(str)-1){ // if the characters up to the length of the string have been checked, as in we traversed through all of the characters and performed comparisons, we can make the output true, or "1"
            check+="The entered string is a palindrome";
        }
    }
   cout<<check<<endl;   //the output is printed
   return 0;  
}   
