#include <iostream>
using namespace std;

class bmi {
	public:
		bmi();
		bmi(float x,float mass);
		void setHeight(float x);
		void setMass(float y);
		float bmi_value(float height,float mass);
		string cat(float bmi);
		float getHeight();
		float getMass();	
		float getBMI();
	private:
		float height;
		float mass;
		float BMI;
		string CAT;
};
