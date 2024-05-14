/*
 * BP.h
 *
 *  Created on: May 1, 2023
 *      Author: hadi
 */

#ifndef BP_H_
#define BP_H_
#include"Vital.h"

#include<ctime>

#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;


class BP : public Vital{
private:
	int systolic;
	int Diastolic;
public:

	void Generate()
	{
		//randomizing outputs
		this->systolic = (rand()%29)+90;
		this->Diastolic = (rand()%20)+60;
	}
	void show(){
		cout<<left;
		cout<<"\033[40;90m"<<setw(3)<<systolic<<"/"<<Diastolic<<"\033[0m";
	}

	int getDiastolic() const;
	void setDiastolic(int diastolic);
	int getSystolic() const;
	void setSystolic(int systolic);
};

inline int BP::getDiastolic() const {
	return Diastolic;
}

inline void BP::setDiastolic(int diastolic) {
	Diastolic = diastolic;
}

inline int BP::getSystolic() const {
	return systolic;
}

inline void BP::setSystolic(int systolic) {
	this->systolic = systolic;
}

#endif /* BP_H_ */
