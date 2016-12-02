/* 
 * File:   main.cpp
 * Author: Hatim, Muhamamd
 * Created on: September 2016
 * Purpose: calculate avg. of test scores -> drop the lowest score in the group
 */

//System Libraries
#include <iostream>  //Input/Output objects
using namespace std; //Name-space used in the System Library

//User Libraries
//Global Constants
//Function prototypes
void getScr(int&);
int lowest(int,int,int,int,int);
void average(int,int,int,int,int);

//Execution Begins Here:

int main(int argc, char** argv) {
    
    //Declaration of Variables
    int score1,score2,score3,score4,score5,lowest;
    
    //ask for values
    getScr(score1);
    getScr(score2);
    getScr(score3);
    getScr(score4);
    getScr(score5);
    
    //Process values
    average(score1,score2,score3,score4,score5);
    //Outputs answers
    
    
    //exit program
    return 0;
}
void getScr(int& score){
    do{
        cout<<"Enter score: ";
        cin>>score;
    }while(score>100||score<0);
}
int lowest(int a,int b,int c,int d,int e){
    if(a<b && a<c && a<d && a<e){
        return a;
    }
    else if(b<a && b<c && b<d && b<e){
        return b;
    }
    else if(c<a && c<b && c<d && c<e){
        return c;
    }
    else if(d<a && d<b && d<c && d<e){
        return d;
    }
    else if(e<a && e<b && e<c && e<d){
        return e;
    }
}
void average(int score1,int score2,int score3,int score4,int score5){
    int low=lowest(score1,score2,score3,score4,score5);
    float avg=(score1+score2+score3+score4+score5-low)/4.0f;
    cout<<"\nLowest:"<<low<<"\nAverage:"<<avg<<endl;
}
