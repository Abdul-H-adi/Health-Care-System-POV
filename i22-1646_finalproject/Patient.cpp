/*
 * Patient.cpp
 *
 *  Created on: May 6, 2023
 *      Author: hadi
 */

#include "Patient.h"

using namespace std;
Patient::Patient() {


}
void Patient::set(char name[30], char age[3], char Height [12], char medical[20], char blood[20]){
	strcpy(this->name, name);
	strcpy(this->age, age);
	strcpy(this->Height, Height);
	strcpy(this->medical, medical);
	strcpy(this->blood, blood);
}
Patient::Patient(char name[30], char age[3], char Height [12], char medical[20], char blood[20])
{
	strcpy(this->name, name);
	strcpy(this->age, age);
	strcpy(this->Height, Height);
	strcpy(this->medical, medical);
	strcpy(this->blood, blood);
}

const char* Patient::getAge() const {
	return age;
}

const char* Patient::getBlood() const {
	return blood;
}

const char* Patient::getHeight() const {
	return Height;
}

const char* Patient::getMedical() const {
	return medical;
}

const char* Patient::getName() const {
	return name;
}
void Patient::read(){
	Patient p1;
				Patient p2;
				Patient p3;
				Patient p4;
				Patient p5;
				Patient p6;
				Patient p7;
				Patient p8;
				Patient p9;
				Patient p10;
				ifstream reed("PATIENT1.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p1), sizeof(p1)))
				{
					p1.show();
				}
				reed.close();
				reed.open("PATIENT2.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p2), sizeof(p2)))
				{
					p2.show();
				}
				reed.close();
				reed.open("PATIENT3.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p3), sizeof(p3)))
				{
					p3.show();
				}
				reed.close();
				reed.open("PATIENT4.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p4), sizeof(p4)))
				{
					p4.show();
				}
				reed.close();
				reed.open("PATIENT5.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p5), sizeof(p5)))
				{
					p5.show();
				}
				reed.close();
				reed.open("PATIENT6.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p6), sizeof(p6)))
				{
					p6.show();
				}
				reed.close();
				reed.open("PATIENT7.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p7), sizeof(p7)))
				{
					p7.show();
				}
				reed.close();
				reed.open("PATIENT8.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p8), sizeof(p8)))
				{
					p8.show();
				}
				reed.close();
				reed.open("PATIENT9.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p9), sizeof(p9)))
				{
					p9.show();
				}
				reed.close();
				reed.open("PATIENT10.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p10), sizeof(p10)))
				{
					p10.show();
				}
				reed.close();
}
void Patient::show(){
	cout<<"Patient name: "<<name<<endl;
	cout<<"age: "<<age<<endl;
	cout<<"Height: "<<Height<<endl;
	cout<<"Medical Condition: "<<medical<<endl;
	cout<<"Blood Type: "<<blood<<endl;

}
Patient::~Patient() {
	// TODO Auto-generated destructor stub
}

