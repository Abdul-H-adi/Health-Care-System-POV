/*
 * Heartrate.h
 *
 *  Created on: May 2, 2023
 *      Author: hadi
 */

#ifndef HEARTRATE_H_
#define HEARTRATE_H_
#include"Vital.h"
#include<iostream>
#include<ctime>
class Heartrate :public Vital {
private:
	int bpm;
public:
	void Generate(){

		this->bpm = (rand()%40)+60;
	}
	void show(){
		std::cout<<"\033[40;90m"<<" BPM: "<<setw(4)<<bpm;
	}

	 ~Heartrate(){

	}

	int getBpm() const;
	void setBpm(int bpm);
};

inline int Heartrate::getBpm() const {
	return bpm;
}

inline void Heartrate::setBpm(int bpm) {
	this->bpm = bpm;
}

#endif /* HEARTRATE_H_ */
