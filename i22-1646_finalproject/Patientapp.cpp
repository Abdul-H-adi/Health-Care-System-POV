/*
 * Patientapp.cpp
 *
 *  Created on: May 7, 2023
 *      Author: hadi
 */

#include "Patientapp.h"
#include"Doctor.h"
#include"Patient.h"
#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<ctime>
#include"Watch.h"
#include"Vital.h"
#include"Specific.h"
#include"General.h"
#include"BP.h"
#include"Breathingrate.h"
#include"Heartrate.h"
#include"Oxygenlevel.h"
#include"Pedometer.h"
#include"sleep.h"
#include"Accelerometer.h"
using namespace std;
Patientapp::Patientapp()
{

}
void Patientapp::Setpat(Patient&p){
	char name[30];
	char age[3];
	char Height[12];
	char Medical[20];
	char Blood[20];

	strcpy(name,p.getName());
	strcpy(age,p.getAge());
	strcpy(Height,p.getHeight());
	strcpy(Medical,p.getMedical());
	strcpy(Blood,p.getBlood());
	pat.set(name, age, Height,Medical , Blood);


}
void Patientapp::Setdot(Doctor&d){
	char name[20];
	char age[3];
	char special[20];
	char degree[20];
	strcpy(name,d.getName());
	strcpy(age,d.getAge());
	strcpy(special,d.getSpecial());
	strcpy(degree,d.getDegree());

	dot.set(name, age, special, degree);
}
void Patientapp::showappointment(){
	cout<<"\nAppointment time: "<<time<<endl;
	cout<<"Appointment date: "<<date<<endl;
	cout<<"Patient info"<<endl;
	cout<<"Patient name: "<<pat.getName()<<endl;
	cout<<"age: "<<pat.getAge()<<endl;
	cout<<"Height: "<<pat.getHeight()<<endl;
	cout<<"Medical Condition: "<<pat.getMedical()<<endl;
	cout<<"Blood Type: "<<pat.getBlood()<<endl;
	cout<<"\nDoctors info"<<endl;
	cout<<"Doctor's name: "<<dot.getName()<<endl;
	cout<<"Age: "<<dot.getAge()<<endl;
	cout<<"Specialization: "<<dot.getSpecial()<<endl;
	cout<<"Specifications: "<<dot.getDegree()<<endl;
}
void Patientapp::doctorcheck(int dec){
					Doctor doc1;
					Doctor doc2;
					Doctor doc3;
					Doctor doc4;
					Doctor doc5;
					ifstream reed("DOCTOR1.DAT", ios::in | ios::binary);

					while(reed.read(reinterpret_cast<char*>(&doc1), sizeof(doc1)))
					{
						cout<<"\nChecking  doctor's status";
					}
					reed.close();
					reed.open("DOCTOR2.DAT", ios::in | ios::binary);

					while(reed.read(reinterpret_cast<char*>(&doc2), sizeof(doc2)))
					{
					cout<<".";
					}
					reed.close();
					reed.open("DOCTOR3.DAT", ios::in | ios::binary);

					while(reed.read(reinterpret_cast<char*>(&doc3), sizeof(doc3)))
					{
					cout<<".";
					}
					reed.close();
					reed.open("DOCTOR4.DAT", ios::in | ios::binary);

					while(reed.read(reinterpret_cast<char*>(&doc4), sizeof(doc4)))
					{
					cout<<".";
					}
					reed.close();
					reed.open("DOCTOR5.DAT", ios::in | ios::binary);

					while(reed.read(reinterpret_cast<char*>(&doc5), sizeof(doc5)))
					{
					cout<<".";
					}
					reed.close();
					if(dec == 1)
					{
							Setdot(doc1);
					}
					else if(dec == 2)
					{
							Setdot(doc2);
					}
					else if(dec == 3)
					{
						Setdot(doc3);
					}
					else if(dec == 4)
					{
						 Setdot(doc4);
					}
					else if(dec == 5)
					{
						Setdot(doc5);
					}
}
bool Patientapp::patientcheck(char name1[30])
{
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
				char name[30];
				ifstream reed("PATIENT1.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p1), sizeof(p1)))
				{
					cout<<"Checking your name";
				}
				reed.close();
				reed.open("PATIENT2.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p2), sizeof(p2)))
				{
					cout<<".";
				}
				reed.close();
				reed.open("PATIENT3.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p3), sizeof(p3)))
				{
					cout<<".";
				}
				reed.close();
				reed.open("PATIENT4.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p4), sizeof(p4)))
				{
					cout<<".";
				}
				reed.close();
				reed.open("PATIENT5.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p5), sizeof(p5)))
				{
					cout<<".";
				}
				reed.close();
				reed.open("PATIENT6.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p6), sizeof(p6)))
				{
					cout<<".";
				}
				reed.close();
				reed.open("PATIENT7.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p7), sizeof(p7)))
				{
					cout<<".";
				}
				reed.close();
				reed.open("PATIENT8.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p8), sizeof(p8)))
				{
					cout<<".";
				}
				reed.close();
				reed.open("PATIENT9.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p9), sizeof(p9)))
				{
					cout<<".";
				}
				reed.close();
				reed.open("PATIENT10.DAT", ios::in | ios::binary);
				while(reed.read(reinterpret_cast<char*>(&p10), sizeof(p10)))
				{
					cout<<".";
				}

				 strcpy(name ,p1.getName() );
				 if(strcmp(name,name1) == 0)
				 {

					 Setpat(p1);
					 return 1;

				 }
				 strcpy(name ,p2.getName() );
				 if(strcmp(name,name1) == 0)
				 {

					 Setpat(p2);
					 return 1;
				 }
				 strcpy(name ,p3.getName() );
				 if(strcmp(name,name1) == 0)
				 {

				 	 Setpat(p3);
				 	 return 1;

				 }
				 strcpy(name ,p4.getName() );
				 if(strcmp(name,name1) == 0)
				 {

				 	 Setpat(p4);
				 	 return 1;
				 }
				 strcpy(name ,p5.getName() );
				 if(strcmp(name,name1) == 0)
				 {

				 	 Setpat(p5);
				 	 return 1;
				 }
				 strcpy(name ,p6.getName() );
				 if(strcmp(name,name1) == 0)
				 {

				 	 Setpat(p6);
				 	 return 1;
				 }
				 strcpy(name ,p7.getName() );
				 if(strcmp(name,name1) == 0)
				 {

				 	 Setpat(p7);
				 	 return 1;
				 }
				 strcpy(name ,p8.getName() );
				 if(strcmp(name,name1) == 0)
				 {

				 	 Setpat(p8);
				 	 return 1;
				 }
				 strcpy(name ,p9.getName() );
				 if(strcmp(name,name1) == 0)
				 {

				 	 Setpat(p9);
				 	 return 1;

				 }
				 strcpy(name ,p10.getName() );
				 if(strcmp(name,name1) == 0)
				 {

				 	 Setpat(p10);
				 	 return 1;
				 }
				 else
				 {
					 cout<<"No Matching Patient"<<endl;
					 return 0;


				 }
				reed.close();
}
void Patientapp::recordGenerate(){

		BP bp;
		Breathingrate br;
		Heartrate hr;
		Oxygenlevel hl;
		Pedometer pd;
		Accelerometer ac;
		sleep s;
		ofstream written("RECORD.DAT", ios::out | ios::binary);
			for(int i = 0; i<180; i++)
		{

			bp.Generate();
			br.Generate();
			hr.Generate();
			hl.Generate();
			pd.Generate();
			ac.Generate();
			s.Generate();
			written.write(reinterpret_cast<char*>(&bp), sizeof(bp));
			written.write(reinterpret_cast<char*>(&br), sizeof(br));
			written.write(reinterpret_cast<char*>(&hr), sizeof(hr));
			written.write(reinterpret_cast<char*>(&hl), sizeof(hl));
			written.write(reinterpret_cast<char*>(&pd), sizeof(pd));
			written.write(reinterpret_cast<char*>(&ac), sizeof(ac));
			written.write(reinterpret_cast<char*>(&s), sizeof(s));
		}
		written.close();
		Doctor doc1;
		Doctor doc2;
		Doctor doc3;
		Doctor doc4;
		Doctor doc5;

		doc1.set("Abdul Hadi", "30", "Heart Specialist", "MBBS,FACC");
		doc2.set("Abdullah" , "40" , "Dentist" , "DDS,MDS");
		doc3.set("Bilal Khalid" , "34", "nutritionist", "RDN,LDN");
		doc4.set("Ayesha Khalid", "50" , "Neurologist", "MD,MBBS,DO,FAAN");
		doc5.set("Zahra Khalid", "28", "Physician", "MBBS,DNB");

		fstream writer("DOCTOR1.DAT", ios::out  | ios::binary);
		writer.write(reinterpret_cast<char*>(&doc1), sizeof(doc1));
		writer.close();
		writer.open("DOCTOR2.DAT", ios::out  | ios::binary);
		writer.write(reinterpret_cast<char*>(&doc2), sizeof(doc2));
		writer.close();
		writer.open("DOCTOR3.DAT", ios::out  | ios::binary);
		writer.write(reinterpret_cast<char*>(&doc3), sizeof(doc3));
		writer.close();
		writer.open("DOCTOR4.DAT", ios::out  | ios::binary);
		writer.write(reinterpret_cast<char*>(&doc4), sizeof(doc4));
		writer.close();
		writer.open("DOCTOR5.DAT", ios::out  |ios::binary);
		writer.write(reinterpret_cast<char*>(&doc5),sizeof(doc5));
		writer.close();
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

		p1.set("Abdul Kaif", "18", "5'3", "Diabetes", "A+");
		p2.set("Abdullah Khan", "34", "6'2", "Jaundice", "B+");
		p3.set("Hamid Ali", "40", "5'9", "Memory loss", "O-");
		p4.set("Abdul Qadiyani", "29", "4'9", "Brain Tumor", "A+");
		p5.set("Zahid Kambo", "30", "5'3", "Blood Pressure", "A-");
		p6.set("Shahid Khalid", "48", "5'6", "Diabetes", "B-");
		p7.set("Zunaira Rehman", "50", "6'0", "Cavity", "A+");
		p8.set("Arslan Malik", "59", "5'7", "Diabetes", "O+");
		p9.set("Kamran Ali", "20", "5'9", "Insomnia", "A-");
		p10.set("Nyhal Shahid", "24", "6'2", "Mouth infection", "A+");

		writer.open("PATIENT1.DAT", ios::out | ios::binary);
		writer.write(reinterpret_cast<char*>(&p1), sizeof(p1));
		writer.close();
		writer.open("PATIENT2.DAT", ios::out | ios::binary);
		writer.write(reinterpret_cast<char*>(&p2), sizeof(p2));
		writer.close();
		writer.open("PATIENT3.DAT", ios::out | ios::binary);
		writer.write(reinterpret_cast<char*>(&p3), sizeof(p3));
		writer.close();
		writer.open("PATIENT4.DAT", ios::out | ios::binary);
		writer.write(reinterpret_cast<char*>(&p4), sizeof(p4));
		writer.close();
		writer.open("PATIENT5.DAT", ios::out | ios::binary);
		writer.write(reinterpret_cast<char*>(&p5), sizeof(p5));
		writer.close();
		writer.open("PATIENT6.DAT", ios::out | ios::binary);
		writer.write(reinterpret_cast<char*>(&p6), sizeof(p6));
		writer.close();
		writer.open("PATIENT7.DAT", ios::out | ios::binary);
		writer.write(reinterpret_cast<char*>(&p7), sizeof(p7));
		writer.close();
		writer.open("PATIENT8.DAT", ios::out | ios::binary);
		writer.write(reinterpret_cast<char*>(&p8), sizeof(p8));
		writer.close();
		writer.open("PATIENT9.DAT", ios::out | ios::binary);
		writer.write(reinterpret_cast<char*>(&p9), sizeof(p9));
		writer.close();
		writer.open("PATIENT10.DAT", ios::out | ios::binary);
		writer.write(reinterpret_cast<char*>(&p10), sizeof(p10));
		writer.close();

}
void Patientapp::recordread(){
	BP bp;
			Breathingrate br;
			Heartrate hr;
			Oxygenlevel hl;
			Pedometer pd;
			Accelerometer ac;
			sleep s;
			int i = 0;
			ifstream reed("RECORD.DAT" , ios::in | ios::binary);
cout<<left;
						while(reed.read(reinterpret_cast<char*>(&bp), sizeof(bp))&&
							reed.read(reinterpret_cast<char*>(&br), sizeof(br))&&
							reed.read(reinterpret_cast<char*>(&hr), sizeof(hr))&&
							reed.read(reinterpret_cast<char*>(&hl), sizeof(hl))&&
							reed.read(reinterpret_cast<char*>(&pd), sizeof(pd))&&
							reed.read(reinterpret_cast<char*>(&ac), sizeof(ac))&&
							reed.read(reinterpret_cast<char*>(&s), sizeof(s)))
						{
							if(i%60 == 0)
								cout<<setw(38)<<"\033[40;93m"<<"Month : "<<(i/60)+1<<setw(35)<<"."<<"\033[0m"<<endl;
							if(i%14 == 0)
								cout<<setw(38)<<"\033[40;92m"<<"Week : "<<(i/14)+1<<setw(36)<<"."<<"\033[0m"<<endl;
							if(i%2 == 0)
								cout<<setw(38)<<"\033[40;91m"<<"Day : "<<(i/2)<<setw(36)<<"."<<"\033[0m"<<endl;

							bp.show();
							br.show();
							hr.show();
							hl.show();
							pd.show();
							ac.show();
							s.show();
							i++;
						}

			reed.close();



}
void Patientapp::recordencryption()
{

			BP bp;
			Breathingrate br;
			Heartrate hr;
			Oxygenlevel hl;
			Pedometer pd;
			Accelerometer ac;
			sleep s;
			BP bp1;
			Breathingrate br1;
			Heartrate hr1;
			Oxygenlevel hl1;
			Pedometer pd1;
			Accelerometer ac1;
			sleep s1;
			ifstream reed("RECORD.DAT" , ios::in | ios::binary);
			ofstream written("ENCRYPTEDRECORD.DAT", ios::out | ios::binary);
						while(reed.read(reinterpret_cast<char*>(&bp), sizeof(bp))&&
							reed.read(reinterpret_cast<char*>(&br), sizeof(br))&&
							reed.read(reinterpret_cast<char*>(&hr), sizeof(hr))&&
							reed.read(reinterpret_cast<char*>(&hl), sizeof(hl))&&
							reed.read(reinterpret_cast<char*>(&pd), sizeof(pd))&&
							reed.read(reinterpret_cast<char*>(&ac), sizeof(ac))&&
							reed.read(reinterpret_cast<char*>(&s), sizeof(s)))
						{
							bp1.setDiastolic(bp.getDiastolic()^12);
							bp1.setSystolic(bp.getSystolic()^12);
							br1.setBreatpm(br.getBreatpm()^12);
							hr1.setBpm(hr.getBpm()^12);
							hl1.setOxygenper(hl.getOxygenper()^12);
							pd1.setSteps(pd.getSteps()^12);
							ac1.setAcc(ac.getAcc()^12);
							s1.setSleep(s.getSleep()^12);


							written.write(reinterpret_cast<char*>(&bp1), sizeof(bp));
							written.write(reinterpret_cast<char*>(&br1), sizeof(br));
							written.write(reinterpret_cast<char*>(&hr1), sizeof(hr));
							written.write(reinterpret_cast<char*>(&hl1), sizeof(hl));
							written.write(reinterpret_cast<char*>(&pd1), sizeof(pd));
							written.write(reinterpret_cast<char*>(&ac1), sizeof(ac));
							written.write(reinterpret_cast<char*>(&s1), sizeof(s));
						}
}
void Patientapp::patientencryption()
{
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
					char Name[30];
					char Age[3];
					char Height[12];
					char Medical[20];
					char Blood[20];
					ifstream reed("PATIENT1.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&p1), sizeof(p1)))
					{
						strcpy(Name,p1.getName());
						for(int i = 0;Name[i]!= '\0'; i++)
						{
							Name[i] += 30;
						}
						strcpy(Age,p1.getAge());
						for(int i = 0; Age[i] != '\0'; i++)
						{
							Age[i] += 30;
						}
						strcpy(Blood,p1.getBlood());
						for(int i = 0; Blood[i] != '\0'; i++)
						{
							Blood[i] += 30;
						}
						strcpy(Medical,p1.getMedical());
						for(int i = 0;	Medical[i] != '\0'; i++)
						{
							Medical[i] += 30;
						}
						strcpy(Height,p1.getHeight());
						for(int i = 0; Height[i] != '\0'; i++)
						{
						Height[i] += 30;
						p1.set(Name, Age, Height, Medical, Blood);

						}
						fstream write("PATIENT1ENCRYPTED.DAT", ios::out | ios::binary);
						write.write(reinterpret_cast<char*>(&p1), sizeof(p1));
					}
					reed.close();
					reed.open("PATIENT2.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&p2), sizeof(p2)))
					{
						strcpy(Name,p2.getName());
						for(int i = 0;Name[i]!= '\0'; i++)
						{
							Name[i] += 30;
						}
						strcpy(Age,p2.getAge());
						for(int i = 0; Age[i] != '\0'; i++)
						{
							Age[i] += 30;
						}
						strcpy(Blood,p2.getBlood());
						for(int i = 0; Blood[i] != '\0'; i++)
						{
							Blood[i] += 30;
						}
						strcpy(Medical,p2.getMedical());
						for(int i = 0;	Medical[i] != '\0'; i++)
						{
							Medical[i] += 30;
						}
						strcpy(Height,p2.getHeight());
						for(int i = 0; Height[i] != '\0'; i++)
						{
						Height[i] += 30;
						p2.set(Name, Age, Height, Medical, Blood);

						}
						fstream write("PATIENT2ENCRYPTED.DAT", ios::out | ios::binary);
						write.write(reinterpret_cast<char*>(&p2), sizeof(p2));
						write.close();
					}
					reed.close();
					reed.open("PATIENT3.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&p3), sizeof(p3)))
					{
						strcpy(Name,p3.getName());
						for(int i = 0;Name[i]!= '\0'; i++)
						{
							Name[i] += 30;
						}
						strcpy(Age,p3.getAge());
						for(int i = 0; Age[i] != '\0'; i++)
						{
							Age[i] += 30;
						}
						strcpy(Blood,p3.getBlood());
						for(int i = 0; Blood[i] != '\0'; i++)
						{
							Blood[i] += 30;
						}
						strcpy(Medical,p3.getMedical());
						for(int i = 0;	Medical[i] != '\0'; i++)
						{
							Medical[i] += 30;
						}
						strcpy(Height,p3.getHeight());
						for(int i = 0; Height[i] != '\0'; i++)
						{
						Height[i] += 30;
						p3.set(Name, Age, Height, Medical, Blood);

						}
						fstream write("PATIENT3ENCRYPTED.DAT", ios::out | ios::binary);
						write.write(reinterpret_cast<char*>(&p3), sizeof(p3));					}
					reed.close();
					reed.open("PATIENT4.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&p4), sizeof(p4)))
					{
						strcpy(Name,p4.getName());
						for(int i = 0;Name[i]!= '\0'; i++)
						{
							Name[i] += 30;
						}
						strcpy(Age,p4.getAge());
						for(int i = 0; Age[i] != '\0'; i++)
						{
							Age[i] += 30;
						}
						strcpy(Blood,p4.getBlood());
						for(int i = 0; Blood[i] != '\0'; i++)
						{
							Blood[i] += 30;
						}
						strcpy(Medical,p4.getMedical());
						for(int i = 0;	Medical[i] != '\0'; i++)
						{
							Medical[i] += 30;
						}
						strcpy(Height,p4.getHeight());
						for(int i = 0; Height[i] != '\0'; i++)
						{
						Height[i] += 30;
						p4.set(Name, Age, Height, Medical, Blood);

						}
						fstream write("PATIENT4ENCRYPTED.DAT", ios::out | ios::binary);
						write.write(reinterpret_cast<char*>(&p4), sizeof(p4));					}
					reed.close();
					reed.open("PATIENT5.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&p5), sizeof(p5)))
					{
						strcpy(Name,p5.getName());
						for(int i = 0;Name[i]!= '\0'; i++)
						{
							Name[i] += 30;
						}
						strcpy(Age,p5.getAge());
						for(int i = 0; Age[i] != '\0'; i++)
						{
							Age[i] += 30;
						}
						strcpy(Blood,p5.getBlood());
						for(int i = 0; Blood[i] != '\0'; i++)
						{
							Blood[i] += 30;
						}
						strcpy(Medical,p5.getMedical());
						for(int i = 0;	Medical[i] != '\0'; i++)
						{
							Medical[i] += 30;
						}
						strcpy(Height,p5.getHeight());
						for(int i = 0; Height[i] != '\0'; i++)
						{
						Height[i] += 30;
						p5.set(Name, Age, Height, Medical, Blood);

						}
						fstream write("PATIENT5ENCRYPTED.DAT", ios::out | ios::binary);
						write.write(reinterpret_cast<char*>(&p5), sizeof(p5));					}
					reed.close();
					reed.open("PATIENT6.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&p6), sizeof(p6)))
					{
						strcpy(Name,p6.getName());
						for(int i = 0;Name[i]!= '\0'; i++)
						{
							Name[i] += 30;
						}
						strcpy(Age,p6.getAge());
						for(int i = 0; Age[i] != '\0'; i++)
						{
							Age[i] += 30;
						}
						strcpy(Blood,p6.getBlood());
						for(int i = 0; Blood[i] != '\0'; i++)
						{
							Blood[i] += 30;
						}
						strcpy(Medical,p6.getMedical());
						for(int i = 0;	Medical[i] != '\0'; i++)
						{
							Medical[i] += 30;
						}
						strcpy(Height,p6.getHeight());
						for(int i = 0; Height[i] != '\0'; i++)
						{
						Height[i] += 30;
						p6.set(Name, Age, Height, Medical, Blood);

						}
						fstream write("PATIENT6ENCRYPTED.DAT", ios::out | ios::binary);
						write.write(reinterpret_cast<char*>(&p6), sizeof(p6));					}
					reed.close();
					reed.open("PATIENT7.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&p7), sizeof(p7)))
					{
						strcpy(Name,p7.getName());
						for(int i = 0;Name[i]!= '\0'; i++)
						{
							Name[i] += 30;
						}
						strcpy(Age,p7.getAge());
						for(int i = 0; Age[i] != '\0'; i++)
						{
							Age[i] += 30;
						}
						strcpy(Blood,p7.getBlood());
						for(int i = 0; Blood[i] != '\0'; i++)
						{
							Blood[i] += 30;
						}
						strcpy(Medical,p7.getMedical());
						for(int i = 0;	Medical[i] != '\0'; i++)
						{
							Medical[i] += 30;
						}
						strcpy(Height,p7.getHeight());
						for(int i = 0; Height[i] != '\0'; i++)
						{
						Height[i] += 30;
						p7.set(Name, Age, Height, Medical, Blood);

						}
						fstream write("PATIENT7ENCRYPTED.DAT", ios::out | ios::binary);
						write.write(reinterpret_cast<char*>(&p7), sizeof(p7));					}
					reed.close();
					reed.open("PATIENT8.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&p8), sizeof(p8)))
					{
						strcpy(Name,p8.getName());
						for(int i = 0;Name[i]!= '\0'; i++)
						{
							Name[i] += 30;
						}
						strcpy(Age,p8.getAge());
						for(int i = 0; Age[i] != '\0'; i++)
						{
							Age[i] += 30;
						}
						strcpy(Blood,p8.getBlood());
						for(int i = 0; Blood[i] != '\0'; i++)
						{
							Blood[i] += 30;
						}
						strcpy(Medical,p8.getMedical());
						for(int i = 0;	Medical[i] != '\0'; i++)
						{
							Medical[i] += 30;
						}
						strcpy(Height,p8.getHeight());
						for(int i = 0; Height[i] != '\0'; i++)
						{
						Height[i] += 30;
						p8.set(Name, Age, Height, Medical, Blood);

						}
						fstream write("PATIENT8ENCRYPTED.DAT", ios::out | ios::binary);
						write.write(reinterpret_cast<char*>(&p8), sizeof(p8));					}
					reed.close();
					reed.open("PATIENT9.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&p9), sizeof(p9)))
					{
						strcpy(Name,p9.getName());
						for(int i = 0;Name[i]!= '\0'; i++)
						{
							Name[i] += 30;
						}
						strcpy(Age,p9.getAge());
						for(int i = 0; Age[i] != '\0'; i++)
						{
							Age[i] += 30;
						}
						strcpy(Blood,p9.getBlood());
						for(int i = 0; Blood[i] != '\0'; i++)
						{
							Blood[i] += 30;
						}
						strcpy(Medical,p9.getMedical());
						for(int i = 0;	Medical[i] != '\0'; i++)
						{
							Medical[i] += 30;
						}
						strcpy(Height,p9.getHeight());
						for(int i = 0; Height[i] != '\0'; i++)
						{
						Height[i] += 30;
						p9.set(Name, Age, Height, Medical, Blood);

						}
						fstream write("PATIENT9ENCRYPTED.DAT", ios::out | ios::binary);
						write.write(reinterpret_cast<char*>(&p9), sizeof(p9));					}
					reed.close();
					reed.open("PATIENT10.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&p10), sizeof(p10)))
					{
						strcpy(Name,p10.getName());
						for(int i = 0;Name[i]!= '\0'; i++)
						{
							Name[i] += 30;
						}
						strcpy(Age,p10.getAge());
						for(int i = 0; Age[i] != '\0'; i++)
						{
							Age[i] += 30;
						}
						strcpy(Blood,p10.getBlood());
						for(int i = 0; Blood[i] != '\0'; i++)
						{
							Blood[i] += 30;
						}
						strcpy(Medical,p10.getMedical());
						for(int i = 0;	Medical[i] != '\0'; i++)
						{
							Medical[i] += 30;
						}
						strcpy(Height,p10.getHeight());
						for(int i = 0; Height[i] != '\0'; i++)
						{
						Height[i] += 30;
						p10.set(Name, Age, Height, Medical, Blood);

						}
						fstream write("PATIENT10ENCRYPTED.DAT", ios::out | ios::binary);
						write.write(reinterpret_cast<char*>(&p10), sizeof(p10));					}
					reed.close();
}


Patientapp::~Patientapp() {
	// TODO Auto-generated destructor stub
}

const char* Patientapp::getDate() const {
	return date;
}

const char* Patientapp::getTime() const {
	return time;
}
void Patientapp::Setdate(char date [20])
{
	strcpy(this->date, date);
}

const Patient& Patientapp::getPat() const {
	return pat;
}

void Patientapp::Settime(char time [20])
{
	strcpy(this->time, time);
}
