/*
 * Vital.h
 *
 *  Created on: May 1, 2023
 *      Author: hadi
 */

#ifndef VITAL_H_
#define VITAL_H_
#include"Watch.h"
class Vital : public Watch{
public:
	virtual void Generate() = 0;

};

#endif /* VITAL_H_ */
