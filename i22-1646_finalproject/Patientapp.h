/*
 * Patientapp.h
 *
 *  Created on: May 7, 2023
 *      Author: hadi
 */

#ifndef PATIENTAPP_H_
#define PATIENTAPP_H_
#include"Doctor.h"
#include<iostream>
#include"Patient.h"
//This file contains the function to check which user has signed in the app
//.What doctor is appointed
//.Generate record files
//.Read them
//.View Appointments
using namespace std;
class Patientapp {
protected:

	Patient pat;
	Doctor dot;
	char date [20] ;
	char time [20] ;


public:
	Patientapp();
	void doctorcheck(int dec);
	bool patientcheck(char name[30]);
	void Setpat(Patient&);
	void Setdot(Doctor&);
	void showappointment();
	void recordGenerate();
	void recordread();
	void recordencryption();
	void patientencryption();
	~Patientapp();
	const char* getDate() const;
	const char* getTime() const;
	void Setdate(char[20]);
	void Settime(char[20]);
	const Patient& getPat() const;
};

#endif /* PATIENTAPP_H_ */
