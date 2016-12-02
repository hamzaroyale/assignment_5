/* 
 * File:   main.cpp
 * Author: Hatim, Muhamamd
 * Created on: September 2016
 * Purpose: determine if a number if a prime number or not.
 */

//System Libraries
#include <iostream>  //Input/Output objects
#include <cmath>
using namespace std; //Name-space used in the System Library

//User Libraries
//Global Constants
//Function prototypes
bool isPrime(int);

//Execution Begins Here:
int main(int argc, char** argv) {
    
    //Declaration of Variables
    int count=0;        //counter for next line
    
    //Display Output
    cout<<"Prime numbers between 0 and 1000: "<<endl;
    
    for(int i=0;i<=1000;i++){
        if(isPrime(i)){
            cout<<i<<"  ";      //display number if condition true
            
            count++;            //add 1 to the counter
            if(count==10){      //skip line when counter reaches 10
                cout<<endl;
                count=0;        //reset counter
            }
        }
    }
     
    
    //exit program
    return 0;
//------------------------------------------------------------------------------
}
bool isPrime(int n){
    if(n<2){            //first prime number is 2, reject lesser values
        return false;
    }
    
    float sqrtn=sqrt(n);        //run/test loop until square root of that number
    for(int i=2;i<=sqrtn;i++){
        if(n%i==0)              //if that number is divisable by any number, return false
            return false;       //else return true
    }
    return true;
}
