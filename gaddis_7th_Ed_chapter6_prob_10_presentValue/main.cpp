/* 
 * File:   main.cpp
 * Author: Hatim, Muhamamd
 * Created on: September 2016
 * Purpose: calculate the amount required to be deposited for a $10,000 profit
 */

//System Libraries
#include <iostream>  //Input/Output objects
#include <iomanip>
#include <cmath>
using namespace std; //Name-space used in the System Library

//User Libraries
//Global Constants
//Function prototypes
float pValue(float,float,int);

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declaration of Variables
    int   years;        //number of years
    float pVal,         //present value
          fValue,       //future value
          rate;         //interest rate
    
    //ask for values
    cout<<"This program calculates the amount of money required for a specific goal.\n";
    cout<<"Enter the number of years: ";
    cin>>years;
    cout<<"Enter the future value that you wish to make as a profit: ";
    cin>>fValue;
    cout<<"Enter the interest rate: ";
    cin>>rate;
    
    //Process values
    pVal=pValue(fValue,rate,years);
    
    //Outputs answers
    cout<<"\nAmount needed to be deposited is: $"<<pVal<<endl;
    
    //exit program
    return 0;
}
//------------------------------------------------------------------------------
//----------Function: pValue----------------------------------------------------
//Purpose: uses the present value formula to determine required amount
//------------------------------------------------------------------------------
float pValue(float fVal,float rate,int years){
    float pval;
    pval=fVal/(pow((1+(rate/100)),years));
    return pval;
}
