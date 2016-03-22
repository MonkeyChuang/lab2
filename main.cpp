#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "BMI.h"

using namespace std;
int main()
{
	BMI farmer;
	double height,weight;
	double bmi;
	string cate;
	
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Failed opening input file"<<endl;
		exit(1);
	}
	ofstream outFile("file.out",ios::out);
	if(!outFile){
		cerr<<"Failed opening output file"<<endl;
		exit(1);
	}

	while(inFile>>height>>weight)
	{
		if (height==0 && weight==0)
			break;
		farmer.setHeight(height);
		farmer.setWeight(weight);
		bmi=farmer.getBMI();
		cate=farmer.getCat();
		outFile<<bmi<<'\t'<<cate<<endl;
		cout<<"*"<<endl;
	}
	return 0;
}
