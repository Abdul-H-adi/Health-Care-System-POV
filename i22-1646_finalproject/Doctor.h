/*
 * Doctor.h
 *
 *  Created on: May 6, 2023
 *      Author: hadi
 */

#ifndef DOCTOR_H_
#define DOCTOR_H_
#include<iostream>
#include<cstring>
#include<fstream>
//this file contains
//.Basic Doctor Structure
//.Fucntion to read Doctor from file
class Doctor {
private:
	char name[20];
	char age[3];
	char special[20];
	char Degree[20];
public:
	Doctor();
	void set(char name[20], char age[3], char special[20], char Degree[20]);
	void show();
	void read();
	virtual ~Doctor();
	const char* getAge() const;
	const char* getDegree() const;
	const char* getName() const;
	const char* getSpecial() const;
};

#endif /* DOCTOR_H_ */
