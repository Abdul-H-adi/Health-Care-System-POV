/*
 * Breathingrate.h
 *
 *  Created on: May 2, 2023
 *      Author: hadi
 */

#ifndef BREATHINGRATE_H_
#define BREATHINGRATE_H_
#include"Vital.h"
#include<iostream>
#include<ctime>
#include<iomanip>
class Breathingrate: public Vital {
private:
	int breatpm;
public:
	void Generate(){

			this->breatpm = (rand()%15)+10;
	}
	void show(){
		cout<<"\033[40;90m"<<" BrPM:"<<setw(4)<<breatpm;
	}

	int getBreatpm() const;
	void setBreatpm(int breatpm);
};

inline int Breathingrate::getBreatpm() const {
	return breatpm;
}

inline void Breathingrate::setBreatpm(int breatpm) {
	this->breatpm = breatpm;
}

#endif /* BREATHINGRATE_H_ */
