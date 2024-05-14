/*
 * DoctorApp.h
 *
 *  Created on: May 10, 2023
 *      Author: hadi
 */

#ifndef DOCTORAPP_H_
#define DOCTORAPP_H_
#include"Patient.h"
#include"Doctor.h"
#include"RMC2.h"
#include"AccessControl.h"
#include"BP.h"
#include"Breathingrate.h"
#include"Heartrate.h"
#include"Oxygenlevel.h"
#include"Pedometer.h"
#include"sleep.h"
#include"Accelerometer.h"
#include"AccessControl.h"
class DoctorApp {
private:
 char pass[30] = {'6','5','9','8'};
 Doctor doc;
 Patient pat;

public:
	DoctorApp();
	 void viewrecords();
	 void doctorcheck(char name[30]);
	 void patientdecryptshow();
	 bool checkpatient(char name1[30]);
	 void viewEHR(char pass[30]);
	 void change(char name[30],char change[30], int n);
	 void records();
	virtual ~DoctorApp();
	const Doctor& getDoc() const;
	void setDoc(const Doctor &doc);
	const Patient& getPat() const;
	void setPat(const Patient &pat);
};

#endif /* DOCTORAPP_H_ */
