/*
 * RMC2.h
 *
 *  Created on: May 9, 2023
 *      Author: hadi
 */

#ifndef RMC2_H_
#define RMC2_H_
#include<iostream>
#include<fstream>
#include<cstring>
#include"Doctor.h"
#include"Patient.h"
#include"BP.h"
#include"Breathingrate.h"
#include"Heartrate.h"
#include"Oxygenlevel.h"
#include"Pedometer.h"
#include"sleep.h"
#include"Accelerometer.h"
#include"AccessControl.h"

class RMC2 {
private:
	char allergies[30];
	char restrictions[30];
	char chronichealthconditon[30];
	char medication1[30];
	char medication2[30];
	Patient p;
public:
	RMC2();
	void Decryptrecords();
	void defalt();
	void set();
	void addpatient();
	void data();
	void EncryptEHR();
	void show(Patient &);
	void Setallergies(char allergies[30]);
	void Setrestrictions(char restriction[30]);
	void Setchronicalcondition(char chronichealthcondition[30]);
	void setmedication1(char setmedication1[30]);
	void setmedication2(char setmedication2[30]);
	virtual ~RMC2();
	const char* getAllergies() const;
	const char* getChronichealthconditon() const;
	const char* getMedication1() const;
	const char* getMedication2() const;
	const char* getRestrictions() const;
};

#endif /* RMC2_H_ */
