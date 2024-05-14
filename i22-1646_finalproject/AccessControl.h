/*
 * AccessControl.h
 *
 *  Created on: May 7, 2023
 *      Author: hadi
 */

#ifndef ACCESSCONTROL_H_
#define ACCESSCONTROL_H_
#include"Patientapp.h"
class AccessControl : public Patientapp{
private:
	bool bp;
	bool br;
	bool hr;
	bool hl;
	bool pd;
	bool ac;
	bool s;

public:
	void writeaccess(AccessControl&);
	AccessControl();
	virtual ~AccessControl();
	bool isAc() const;
	void setAc(bool ac);
	bool isBp() const;
	void setBp(bool bp);
	bool isBr() const;
	void setBr(bool br);
	bool isHl() const;
	void setHl(bool hl);
	bool isHr() const;
	void setHr(bool hr);
	bool isPd() const;
	void setPd(bool pd);
	bool isS() const;
	void setS(bool s);
};

#endif /* ACCESSCONTROL_H_ */
