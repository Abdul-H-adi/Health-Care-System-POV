/*
 * Pedometer.h
 *
 *  Created on: May 2, 2023
 *      Author: hadi
 */

#ifndef PEDOMETER_H_
#define PEDOMETER_H_
#include"Specific.h"
#include<iostream>
#include<ctime>

class Pedometer : public Specific{
private:
	int steps;
public:
	void Generate(){

		this->steps = (rand()%100)+10;
	}
	void show(){
		std::cout<<" Steps:"<<setw(4)<<steps;
	}

	int getSteps() const {
		return steps;
	}

	void setSteps(int steps) {
		this->steps = steps;
	}
};

#endif /* PEDOMETER_H_ */
