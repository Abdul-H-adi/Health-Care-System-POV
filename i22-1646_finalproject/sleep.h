/*
 * sleep.h
 *
 *  Created on: May 6, 2023
 *      Author: hadi
 */

#ifndef SLEEP_H_
#define SLEEP_H_
#include"General.h"
#include<iostream>
#include<ctime>
class sleep : public General{
private:
	int sleep;
public:
	void Generate(){

		this->sleep = (rand()%9)+1;
	}
	void show(){
		std::cout<<" hoursofsleep:"<<sleep<<"\033[0m"<<endl;
	}
	~sleep(){

	}

	int getSleep() const {
		return sleep;
	}

	void setSleep(int sleep) {
		this->sleep = sleep;
	}
};

#endif /* SLEEP_H_ */
