/*
 * AccessControl.cpp
 *
 *  Created on: May 7, 2023
 *      Author: hadi
 */

#include "AccessControl.h"
#include<fstream>
AccessControl::AccessControl() {
	this->bp = 1;
	this->br = 1;
	this->hr = 1;
	this->hl = 1;
	this->pd = 1;
	this->ac = 1;
	this->s = 1;

}
void AccessControl::writeaccess(AccessControl& b){
	ofstream a("Access.DAT", ios::out | ios::binary);
	a.write(reinterpret_cast<char*>(&b), sizeof(b));
	a.close();

}

bool AccessControl::isAc() const {
	return ac;
}

void AccessControl::setAc(bool ac) {
	this->ac = ac;
}

bool AccessControl::isBp() const {
	return bp;
}

void AccessControl::setBp(bool bp) {
	this->bp = bp;
}

bool AccessControl::isBr() const {
	return br;
}

void AccessControl::setBr(bool br) {
	this->br = br;
}

bool AccessControl::isHl() const {
	return hl;
}

void AccessControl::setHl(bool hl) {
	this->hl = hl;
}

bool AccessControl::isHr() const {
	return hr;
}

void AccessControl::setHr(bool hr) {
	this->hr = hr;
}

bool AccessControl::isPd() const {
	return pd;
}

void AccessControl::setPd(bool pd) {
	this->pd = pd;
}

bool AccessControl::isS() const {
	return s;
}

void AccessControl::setS(bool s) {
	this->s = s;
}

AccessControl::~AccessControl() {
	// TODO Auto-generated destructor stub
}

