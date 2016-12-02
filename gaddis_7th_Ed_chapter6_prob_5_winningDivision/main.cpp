/* 
 * File:   main.cpp
 * Author: Hatim, Muhamamd
 * Created on: September 2016
 * Purpose: determine which division had the greatest sales for a quarter. 
 */

//System Libraries
#include <iostream>  //Input/Output objects
#include <iomanip>
using namespace std; //Name-space used in the System Library

//User Libraries
//Global Constants
//Function prototypes
float getSale(string);              //asks the user to enter amount & returns it
void highest(float,float,float,float);//compares and displays the highest value

//Execution Begins Here:
int main(int argc, char** argv) {
    
    //Declaration of Variables    
    float nEast,nWest,sEast,sWest;  //for amount of sales
    
    //ask for values
    nEast = getSale("north east");  
    sEast = getSale("south east");  
    nWest = getSale("north west");
    sWest = getSale("south west");
    
    //Process values -> Outputs result
    cout<<fixed<<showpoint<<setprecision(2);
    highest(nEast,sEast,nWest,sWest);  //compares and displays the highest value
        
    //exit program
    return 0;
}
//------------------------------------------------------------------------------
//------------- FUNCTION: getSale ----------------------------------------------
// Purpose: asks the user to enter amount & returns it after validation
//------------------------------------------------------------------------------
float getSale(string name){
    float s=-1;
    do{
        cout<<"Enter the amount of sale in "<<name<<": $";
        cin>>s;
    }while(s<0);
    return s;
}

//------------------------------------------------------------------------------
//------------- FUNCTION: highest ----------------------------------------------
// Purpose: compares and displays the highest value
//------------------------------------------------------------------------------
void highest(float ne,float se,float nw,float sw){
    if(ne>se && ne>nw && ne>sw){
        cout<<"\nHighest amount of sale is $"<<ne<<" by north East division.\n";
    }
    else if(se>ne && se>nw && se>sw){
        cout<<"\nHighest amount of sale is $"<<se<<" by south East division.\n";
    }
    else if(nw>ne && nw>se && nw>sw){
        cout<<"\nHighest amount of sale is $"<<nw<<" by north west division.\n";
    }
    else if(sw>ne && sw>se && sw>nw){
        cout<<"\nHighest amount of sale is $"<<sw<<" by south west division.\n";
    }
    
}
