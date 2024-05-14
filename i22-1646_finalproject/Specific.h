/*
 * Specific.h
 *
 *  Created on: May 1, 2023
 *      Author: hadi
 */

#ifndef SPECIFIC_H_
#define SPECIFIC_H_
#include"Watch.h"
class Specific : public Watch{
public:
	virtual void Generate() = 0;
};

#endif /* SPECIFIC_H_ */
