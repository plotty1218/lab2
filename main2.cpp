#include "bmi.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(){
	float H;
	float M;
	int ctr=0;
	bmi people[5];
	
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr << "Fail opening" << endl;
		exit(1);
	}
	
	while(inFile >> H >> M){
		people[ctr].setHeight(H);
		people[ctr].setMass(M);
		ctr++;
	}

	
	ofstream outFile("file.out",ios::out);
	if(!outFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}

	for (int i=0;i<=4;i++){
		people[i].bmi_value(people[i].getHeight(),people[i].getMass());
		
	    outFile << setprecision(4) << people[i].getBMI() << "\t" << people[i].cat(people[i].getBMI()) << endl ;
	}

	return 0;
}
