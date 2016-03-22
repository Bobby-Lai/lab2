#include "lab2-a.h"

void BMI::setheight(float x){height = x/100;}
void BMI::setmass(float y){mass = y;}
float BMI::operate (float height,float mass){
	BMI = mass/(height*height/10000);
    return BMI;
}
string BMI::category (float s){
    if (s<15.0)
	    return "Very severely underweight";
	else if (15.0<=s&&s<16.0)
	    return "Severely underweight";
	else if (16.0<=s&&s<18.5)
	    return "Underweight";
	else if (18.5<=s&&s<25.0)
	    return "Normal";
	else if (25.0<=s&&s<30.0)
	    return "Overweight";
	else if (30.0<=s&&s<35.0)
	    return "Obese Class I (Moderately obese)";
	else if (35.0<=s&&s<40.0)
	    return "Obese Class II (Severely obese)";
	else if (s>=40.0)
	    return "Obese Class III (Very severely obese)";
	else
	    return "F**king Error!!!";
}
