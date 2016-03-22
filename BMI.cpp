#include "BMI.h"
BMI::BMI(){
	wei=0;
	hei=0;
}
BMI::BMI(double h,double w){
	setHeight(h);
	setWeight(w);
}
void BMI::setHeight(double h){
	hei=h;
}
void BMI::setWeight(double w){
	wei=w;
}
double BMI::getBMI(){
	return 10000*wei/(hei*hei);
}
string BMI::getCat(){
	double bmi=10000*wei/(hei*hei);

	if(bmi< 15.0)
		return "very severly underweight";
	else if(bmi>=15.0 && bmi<16.0)
		return "severely underweight";
	else if(bmi>=16.0 && bmi<18.5)
		return "underweight";
	else if(bmi>=18.5 && bmi<25.0)
		return "normal";
	else if(bmi>=25.0 && bmi<30)
		return "overweight";
	else if(bmi>=30 && bmi<35)
		return "moderately obese";
	else if(bmi>=35 && bmi<40)
		return "severely obese";
	else
		return "very severely obese";
}
