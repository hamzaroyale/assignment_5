/* 
 * File:   main.cpp
 * Author: Hatim, Muhamamd
 * Created on nov 5, 2016
 * Purpose: display item’s retail price after calculating markup
 */

//System Libraries
#include <iostream>  //Input/Output objects
#include <iomanip>
using namespace std; //Name-space used in the System Library

//User Libraries
//Global Constants
//Function prototypes
float calcRet(float,int);  //takes in cost & markup --> calculates retail price

//Execution Begins Here:
int main(int argc, char** argv) {
    
    //Declaration of Variables
    float cost=-1,
          retail;
    int   markup=-1;
    
    //ask for values
    cout<<"Enter an item’s wholesale cost: $";
    do{
        cin>>cost;      //input cost 
    }while(cost<0);     //input validation: dont accept -ve values 
    
    cout<<"Enter the item’s markup percent: ";
    do{
        cin>>markup;    //input markup percent  
    }while(markup<0);   //input validation: dont accept -ve values
    
    //Process values
    retail=calcRet(cost,markup); //call calcRet() function for retail price   
    
    //Outputs answers
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<endl<<"The retail price of the item is: $"<<retail<<endl;
    
    //exit program
    return 0;
}


//------------------------------------------------------------------------------
//----------- Function: calcRet-------------------------------------------------
//Purpose: takes in cost & markup --> calculates and returns retail price-------
//------------------------------------------------------------------------------
float calcRet(float cst,int mark){
    return cst+((cst/100)*mark);
}
