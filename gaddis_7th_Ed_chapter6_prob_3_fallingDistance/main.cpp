/* 
 * File:   main.cpp
 * Author: Hatim, Muhamamd
 * Created on: September 2016
 * Purpose: disp table of distances of falling object due to gravity in 10 sec
 */

//System Libraries
#include <iostream>  //Input/Output objects
using namespace std; //Name-space used in the System Library

//User Libraries
//Global Constants
const float GRAVT=9.8;      //gravity
//Function prototypes
float distns(int);          //takes in (number of seconds) -> returns distance

//Execution Begins Here:
int main(int argc, char** argv) {
    
    //Declaration of Variables
    
    //ask for values    
    
    //Process values -> display table
    for(int i=1;i<=10;i++){             //run 10 times [1,10]
        cout<<"Distance covered in "<<i<<" second(s): "<<distns(i)<<" meters"<<endl;
    }
        
    //exit program
    return 0;
}

//------------------------------------------------------------------------------
//-----------------FUNCTION: distns---------------------------------------------
// Purpose: takes in (number of seconds) -> returns distance--------------------
//------------------------------------------------------------------------------
float distns(int t){
    return 0.5f*GRAVT*t*t;
}
