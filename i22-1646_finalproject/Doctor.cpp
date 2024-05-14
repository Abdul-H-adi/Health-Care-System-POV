/*
 * Doctor.cpp
 *
 *  Created on: May 6, 2023
 *      Author: hadi
 */

#include "Doctor.h"

using namespace std;
Doctor::Doctor() {
	// TODO Auto-generated constructor stub

}
void Doctor::set(char name[20], char age[3], char special[20], char Degree[20]){
	strcpy(this->name,name);
	strcpy(this->age,age);
	strcpy(this->special,special);
	strcpy(this->Degree, Degree);
}
void Doctor::show(){

	cout<<"Doctor's name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Specialization: "<<special<<endl;
	cout<<"Specifications: "<<Degree<<endl;
}

const char* Doctor::getAge() const {
	return age;
}

const char* Doctor::getDegree() const {
	return Degree;
}

const char* Doctor::getName() const {
	return name;
}

const char* Doctor::getSpecial() const {
	return special;
}
void Doctor::read(){
				Doctor doc1;
				Doctor doc2;
				Doctor doc3;
				Doctor doc4;
				Doctor doc5;
				ifstream reed("DOCTOR1.DAT", ios::in | ios::binary);
				cout<<"Doctor 1: "<<endl;
				while(reed.read(reinterpret_cast<char*>(&doc1), sizeof(doc1)))
				{
					doc1.show();
				}
				reed.close();
				reed.open("DOCTOR2.DAT", ios::in | ios::binary);
				cout<<"\nDoctor 2: "<<endl;
				while(reed.read(reinterpret_cast<char*>(&doc2), sizeof(doc2)))
				{
				doc2.show();
				}
				reed.close();
				reed.open("DOCTOR3.DAT", ios::in | ios::binary);
				cout<<"\nDoctor 3: "<<endl;
				while(reed.read(reinterpret_cast<char*>(&doc3), sizeof(doc3)))
				{
				doc3.show();
				}
				reed.close();
				reed.open("DOCTOR4.DAT", ios::in | ios::binary);
				cout<<"\nDoctor 4: "<<endl;
				while(reed.read(reinterpret_cast<char*>(&doc4), sizeof(doc4)))
				{
				doc4.show();
				}
				reed.close();
				reed.open("DOCTOR5.DAT", ios::in | ios::binary);
				cout<<"\nDoctor 5: "<<endl;
				while(reed.read(reinterpret_cast<char*>(&doc5), sizeof(doc5)))
				{
				doc5.show();
				}
				reed.close();
}
Doctor::~Doctor() {
	// TODO Auto-generated destructor stub
}

