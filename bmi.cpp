#include "bmi.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bmi::bmi(){
	height=0;
	mass=0;
}
bmi::bmi(float x,float y){
	setHeight(x);
	setMass(y);
}
void bmi::setHeight(float x){
	height=x;
}
void bmi::setMass(float y){
	mass=y;
}
float bmi::getHeight(){
	return height;
}
float bmi::getMass(){
	return mass;
}
float bmi::getBMI(){
	return BMI;
}
float bmi::bmi_value(float height,float mass){
	BMI=mass/((height/100)*(height/100));
	return BMI;
}
string bmi::cat(float BMI){
	if(BMI<15.0){
		CAT="Very severly underweight";
	}else if(BMI<16.0 && BMI>=15.0){
		CAT="Severly underweight";
	}else if(BMI<18.5 && BMI>=16.0){
		CAT="Underweight";
	}else if(BMI<25.0 && BMI>=18.5){
		CAT="Normal";
	}else if(BMI<30.0 && BMI>=25.0){
		CAT="Overweight";
	}else if(BMI<35.0 && BMI>=30.0){
		CAT="Obese Class I (Moderately obese)";
	}else if(BMI<40.0 && BMI>=35.0){
		CAT="Obese Class II (Severely obese)";
	}else if(BMI>=40.0){
		CAT="Obese Class III (Very severely obese)";
	}
	return CAT;
}
	

