/*
 * Accelerometer.h
 *
 *  Created on: May 6, 2023
 *      Author: hadi
 */

#ifndef ACCELEROMETER_H_
#define ACCELEROMETER_H_
#include"Specific.h"
#include<ctime>
#include<iostream>
class Accelerometer :public Specific{
private:
	int acc;
public:
	void Generate(){

			acc = (rand()%14)+2;
	}
	void show(){
		std::cout<<" AC:"<<setw(4)<<acc;
	}
	~Accelerometer(){

	}

	int getAcc() const {
		return acc;
	}

	void setAcc(int acc) {
		this->acc = acc;
	}
};

#endif /* ACCELEROMETER_H_ */
