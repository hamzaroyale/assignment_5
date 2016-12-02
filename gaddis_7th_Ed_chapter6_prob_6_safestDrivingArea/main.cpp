/* 
 * File:   main.cpp
 * Author: Hatim, Muhamamd
 * Created on: September 2016
 * Purpose: determine which regions had the fewest reported traffic accidents.
 */

//System Libraries
#include <iostream>  //Input/Output objects
using namespace std; //Name-space used in the System Library

//User Libraries
//Global Constants
//Function prototypes
float getVal(string);    //asks the user to enter no. of accidents & returns it
void lowest(int,int,int,int);//compares and displays the lowest value

//Execution Begins Here:
int main(int argc, char** argv) {
    
    //Declaration of Variables    
    int north,south,east,west;  //for storing number of accidents
    
    //ask for values
    north = getVal("north");  
    south = getVal("south");  
    east = getVal("east");
    west = getVal("west");
    
    //Process values -> Outputs result
    lowest(north,south,east,west);  //compares and displays the highest value
        
    //exit program
    return 0;
}
//------------------------------------------------------------------------------
//------------- FUNCTION: getSale ----------------------------------------------
// Purpose: asks the user to enter val & returns it after validation
//------------------------------------------------------------------------------
float getVal(string name){
    float s=-1;
    do{
        cout<<"Enter the annual number of accidents reported in "<<name<<": ";
        cin>>s;
    }while(s<0);
    return s;
}

//------------------------------------------------------------------------------
//------------- FUNCTION: highest ----------------------------------------------
// Purpose: compares and displays the highest value
//------------------------------------------------------------------------------
void lowest(int n, int s, int e, int w){
    if(n<s && n<e && n<w){
        cout<<"\nNorth region is the safest driving area with only "<<n<<" accidents.";
    }
    else if(s<n && s<e && s<w){
        cout<<"\nSouth region is the safest driving area with only "<<s<<" accidents.";
    }
    else if(e<n && e<s && e<w){
        cout<<"\nEast region is the safest driving area with only "<<e<<" accidents.";
    }
    else if(w<n && w<s && w<e){
        cout<<"\nWest region is the safest driving area with only "<<w<<" accidents.";
    }
    
}
