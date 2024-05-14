/*
 * Oxygenlevel.h
 *
 *  Created on: May 2, 2023
 *      Author: hadi
 */

#ifndef OXYGENLEVEL_H_
#define OXYGENLEVEL_H_
#include"Vital.h"
#include<iostream>
#include<ctime>
class Oxygenlevel: public Vital {
private:
	int oxygenper;
public:
	void Generate(){

		this->oxygenper = (rand()%10)+90;
	}
	void show(){
		std::cout<<"\033[40;90m"<<" OxygenPM:"<<setw(4)<<oxygenper;
	}
	~Oxygenlevel(){

	}

	int getOxygenper() const {
		return oxygenper;
	}

	void setOxygenper(int oxygenper) {
		this->oxygenper = oxygenper;
	}
};

#endif /* OXYGENLEVEL_H_ */
