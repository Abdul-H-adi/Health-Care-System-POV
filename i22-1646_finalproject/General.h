/*
 * General.h
 *
 *  Created on: May 1, 2023
 *      Author: hadi
 */

#ifndef GENERAL_H_
#define GENERAL_H_
#include"Watch.h"

class General : public Watch{
public:
	virtual void Generate() = 0;
};

#endif /* GENERAL_H_ */
