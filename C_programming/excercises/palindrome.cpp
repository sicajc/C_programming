#include<iostream>
#include<string>
#include<stdio.h>
#include<vector>
using namespace std;


bool palindromes(char* start,char* end)
{
      if( *start != *end ) return false;
      
      if( start == end || start+1 == end ) return true; 

      return palindromes(start+1,end-1);   

}


bool palindrome(char* s){

    char* p = s; //points to the first index of the string
    char* start = p; 
    char* end = NULL;

    while( *(p+1) != '\0') p++; //Find the end of the string
    end = p;    

    return palindromes(start,end);
     
}


int main(){

    char* a = "333";
    char* p = a;

    cout<<"------------------------Some_string_pointer_testings-------------------------"<<endl;
    cout<<"a[0] is:" << a[0] <<endl;
    cout<<"*p is now"<< *p <<endl;
    while( *p != '\0'){
      cout<<"*p is now: "<<*p <<endl; 
      p++; 

    }
    cout<<"*p is now: "<<*p <<endl;
    
    cout<<"*p is now: "<<*(p-1)<<endl;


    cout<<"-----------------------------Palindrome_testing--------------------------"<<endl;
    cout<<"Palindrome a returns the value of:"<<palindrome(a)<<endl;



    return 0;

}