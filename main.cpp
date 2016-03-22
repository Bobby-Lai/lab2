#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "lab2-a.h"
int main(){
	float height,mass;
    int x=1,y=0;
    ifstream inFile("file.in" , ios::in);
    if(!inFile){
	    cerr<<"Failed opening"<<endl;
        exit(1);
    }
    ofstream outFile("file.out" , ios::out);
    if(!outFile){
        cerr<<"Failed opening"<<endl;
        exit(1);
    }
    while (inFile>>height>>mass){
    	if (height==0)
        	break;
    	else{
        	BMI BMI;
        	BMI.setheight(height);
        	BMI.setmass(mass);
        	cout<<BMI.operate(height,mass)<<"\t";
        	outFile<<BMI.operate(height,mass)<<"\t";
        	cout<<BMI.category(BMI.operate(height,mass))<<endl;
        	outFile<<BMI.category(BMI.operate(height,mass))<<endl;
    	}
    }

	return 0;
 }
