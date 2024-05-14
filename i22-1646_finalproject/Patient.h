/*
 * Patient.h
 *
 *  Created on: May 6, 2023
 *      Author: hadi
 */

#ifndef PATIENT_H_
#define PATIENT_H_
#include<cstring>
#include<fstream>
#include<iostream>
//this header file contains the basic structure of patient as well as the reading function
//to read it from file
class Patient {
private:
	char name[30];
	char age[3];
	char Height[12];
	char medical[20];
	char blood[20];
public:
	Patient();
	void set(char name[30], char age[3], char Height [12], char medical[20], char blood[20]);
	Patient(char name[30], char age[3], char Height [12], char medical[20], char blood[20]);
	 ~Patient();
	 void read();
	void show();
	const char* getAge() const;
	const char* getBlood() const;
	const char* getHeight() const;
	const char* getMedical() const;
	const char* getName() const;
};

#endif /* PATIENT_H_ */
