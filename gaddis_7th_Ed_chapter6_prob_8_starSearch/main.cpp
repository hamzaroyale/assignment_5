/* 
 * File:   main.cpp
 * Author: Hatim, Muhamamd
 * Created on: September 2016
 * Purpose: determine the avg score after dropping the highest and lowest score
 */

//System Libraries
#include <iostream>  //Input/Output objects
#include <iomanip>
using namespace std; //Name-space used in the System Library

//User Libraries
//Global Constants
//Function prototypes
void getData(float&,float&,float&,float&,float&);   //asks user for scores
float avg(float,float,float,float,float);           //calculates average
float lowest(float,float,float,float,float);        //returns the lowest of 5
float highest(float,float,float,float,float);       //returns the highest of 5

//Execution Begins Here:
int main(int argc, char** argv) {
    
    //Declaration of Variables
    float score1,score2,score3,score4,score5, avgScr;   //variables for scores
    
    //ask for values
    getData(score1,score2,score3,score4,score5);        //ask user for scores
    
    //Process values
    avgScr=avg(score1,score2,score3,score4,score5);     //calculate average
    //Outputs answers
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"\nAverage (after deduction of lowest and highest score): "<<avgScr<<endl;

    //exit program
    return 0;
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
void getData(float& s1,float& s2,float& s3,float& s4,float& s5){
    do{
        cout<<"Enter 1st score[0-100]: ";
        cin>>s1;
    }while(s1<0 || s1>100);
    do{
        cout<<"Enter 2nd score[0-100]: ";
        cin>>s2;
    }while(s2<0 || s2>100);
    do{
        cout<<"Enter 3rd score[0-100]: ";
        cin>>s3;
    }while(s3<0 || s3>100);
    do{
        cout<<"Enter 4th score[0-100]: ";
        cin>>s4;
    }while(s4<0 || s4>100);
    do{
        cout<<"Enter 5th score[0-100]: ";
        cin>>s5;
    }while(s5<0 || s5>100);   
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
float avg(float s1,float s2,float s3,float s4,float s5){
    float low=lowest(s1, s2, s3, s4, s5),
          high=highest(s1, s2, s3, s4, s5);
    return ((s1+s2+s3+s4+s5-low-high)/3.0f);
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
float lowest(float a,float b,float c,float d,float e){
    if(a<b && a<c && a<d && a<e){
        cout<<"Lowest score: "<<a<<endl;
        return a;
    }
    else if(b<a && b<c && b<d && b<e){
        cout<<"Lowest score: "<<b<<endl;
        return b;
    }
    else if(c<a && c<b && c<d && c<e){
        cout<<"Lowest score: "<<c<<endl;
        return c;
    }
    else if(d<a && d<b && d<c && d<e){
        cout<<"Lowest score: "<<d<<endl;
        return d;
    }
    else if(e<a && e<b && e<c && e<d){
        cout<<"Lowest score: "<<e<<endl;
        return e;
    }
}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
float highest(float a,float b,float c,float d,float e){
    if(a>b && a>c && a>d && a>e){
        cout<<"highest score: "<<a<<endl;
        return a;
    }
    else if(b>a && b>c && b>d && b>e){
        cout<<"highest score: "<<b<<endl;
        return b;
    }
    else if(c>a && c>b && c>d && c>e){
        cout<<"highest score: "<<c<<endl;
        return c;
    }
    else if(d>a && d>b && d>c && d>e){
        cout<<"highest score: "<<d<<endl;
        return d;
    }
    else if(e>a && e>b && e>c && e>d){
        cout<<"highest score: "<<e<<endl;
        return e;
    }
}
    
