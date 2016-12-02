/* 
 * File:   main.cpp
 * Author: Hatim, Muhamamd
 * Created on September 2016
 * Purpose: display a table of Fahrenheit from 0-20 and its Celsius equivalents.
 */

//System Libraries
#include <iostream>  //Input/Output objects
#include <iomanip>
using namespace std; //Name-space used in the System Library

//User Libraries
//Global Constants
//Function prototypes
float celcius(int);

//Execution Begins Here:
int main(int argc, char** argv) {
    
    //Declaration of Variables
    
    //ask for values   
    
    //Process values -> Outputs table
    cout<<fixed<<showpoint<<setprecision(1);
    
    cout<<"ferenheit    celcius"<<endl
        <<"------------------------"<<endl;
    for(int i=0;i<=20;i++){             // 'i' repeats 21 times (0 to 20)
       cout<<"    "<<i<<"        "<<celcius(i)<<endl; //pass 'i' in celcius fun.       
    }    
    
    //exit program
    return 0;
}

//------------------------------------------------------------------------------
//----------- Function: celcius-------------------------------------------------
//Purpose: takes in temprature in ferenheit --> calculates and returns celcius--
//------------------------------------------------------------------------------
float celcius(int f){
    return (5.0f/9)*(f-32);
}