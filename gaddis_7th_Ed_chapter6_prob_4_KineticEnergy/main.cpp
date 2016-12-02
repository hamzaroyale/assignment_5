/* 
 * File:   main.cpp
 * Author: Hatim, Muhamamd
 * Created on: September 2016
 * Purpose: calculate the amount of kinetic energy an the object has
 */

//System Libraries
#include <iostream>  //Input/Output objects
using namespace std; //Name-space used in the System Library

//User Libraries
//Global Constants
//Function prototypes
float kEnergy(float,float);//func. for kinetic energy; takes in mass & velocity

//Execution Begins Here:
int main(int argc, char** argv) {
    
    //Declaration of Variables
    float mass,velocity;
    
    //ask for values
    cout<<"Enter the mass of object:       (in kilograms): ";
    cin>>mass;                  //input mass
    cout<<"Enter the velocity of the object(in meter/sec): ";
    cin>>velocity;              //input velocity
    
    //Process values -> Outputs answers
    cout<<endl<<"The kinetic energy of the object is: "
        << kEnergy(mass,velocity)<<" joules."<<endl;    //call kEnergy function
    
    //exit program
    return 0;
}

//------------------------------------------------------------------------------
//------------FUNCTION: kEnergy ------------------------------------------------
// Purpose: calculates and returns kinetic energy; takes in mass & velocity----- 
//------------------------------------------------------------------------------
float kEnergy(float m,float v){
    return 0.5*m*v*v;           //kinetic energy= 1/2(Mass * Velocity^2)
}
