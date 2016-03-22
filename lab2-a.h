#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

class BMI{
	public:
    float BMI;
    void setheight(float x);
    void setmass(float y);
    float operate (float height,float mass);
    string category (float s);
	private:
	    float s,height,mass;
};
