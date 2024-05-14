/*
 * DoctorApp.cpp
 *
 *  Created on: May 10, 2023
 *      Author: hadi
 */

#include "DoctorApp.h"
#include<fstream>
#include<iostream>
#include<cstring>
#include"Patientapp.h"
using namespace std;
DoctorApp::DoctorApp() {
	// TODO Auto-generated constructor stub

}
void DoctorApp::viewrecords()
{

}
void DoctorApp::doctorcheck(char name[30])
{

	Doctor d;
					ifstream reed("DOCTOR1.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&d), sizeof(d)))
					{
						if(strcmp(d.getName(),name) == 0)
							doc = d;
					}
					reed.close();
					reed.open("DOCTOR2.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&d), sizeof(d)))
					{
						if(strcmp(d.getName(),name) == 0)
							doc = d;					}
					reed.close();
					reed.open("DOCTOR3.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&d), sizeof(d)))
					{
						if(strcmp(d.getName(),name) == 0)
							doc = d;					}
					reed.close();
					reed.open("DOCTOR4.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&d), sizeof(d)))
					{
						if(strcmp(d.getName(),name) == 0)
							doc = d;					}
					reed.close();
					reed.open("DOCTOR5.DAT", ios::in | ios::binary);
					while(reed.read(reinterpret_cast<char*>(&d), sizeof(d)))
					{
						if(strcmp(d.getName(),name) == 0)
							doc = d;
					}
}
void DoctorApp::patientdecryptshow()
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
	ifstream reed("PATIENT1ENCRYPTED.DAT", ios::in | ios::binary);
	while(reed.read(reinterpret_cast<char*>(&p1), sizeof(p1)))
	{
		strcpy(Name,p1.getName());
		for(int i = 0;Name[i]!= '\0'; i++)
		{
			Name[i] -= 30;
		}
		strcpy(Age,p1.getAge());
		for(int i = 0; Age[i] != '\0'; i++)
		{
			Age[i] -= 30;
		}
		strcpy(Blood,p1.getBlood());
		for(int i = 0; Blood[i] != '\0'; i++)
		{
			Blood[i] -= 30;
		}
		strcpy(Medical,p1.getMedical());
		for(int i = 0;	Medical[i] != '\0'; i++)
		{
			Medical[i] -= 30;
		}
		strcpy(Height,p1.getHeight());
		for(int i = 0; Height[i] != '\0'; i++)
		{
		Height[i] -= 30;


		}
		p1.set(Name, Age, Height, Medical, Blood);
		p1.show();
	}
	reed.close();
	cout<<endl;
	reed.open("PATIENT2ENCRYPTED.DAT", ios::in | ios::binary);
	while(reed.read(reinterpret_cast<char*>(&p2), sizeof(p2)))
	{
		strcpy(Name,p2.getName());
		for(int i = 0;Name[i]!= '\0'; i++)
		{
			Name[i] -= 30;
		}
		strcpy(Age,p2.getAge());
		for(int i = 0; Age[i] != '\0'; i++)
		{
			Age[i] -= 30;
		}
		strcpy(Blood,p2.getBlood());
		for(int i = 0; Blood[i] != '\0'; i++)
		{
			Blood[i] -= 30;
		}
		strcpy(Medical,p2.getMedical());
		for(int i = 0;	Medical[i] != '\0'; i++)
		{
			Medical[i] -= 30;
		}
		strcpy(Height,p2.getHeight());
		for(int i = 0; Height[i] != '\0'; i++)
		{
		Height[i] -= 30;


		}
		p2.set(Name, Age, Height, Medical, Blood);
		p2.show();

	}
	reed.close();
	cout<<endl;
	reed.open("PATIENT3ENCRYPTED.DAT", ios::in | ios::binary);
	while(reed.read(reinterpret_cast<char*>(&p3), sizeof(p3)))
	{
		strcpy(Name,p3.getName());
		for(int i = 0;Name[i]!= '\0'; i++)
		{
			Name[i] -= 30;
		}
		strcpy(Age,p3.getAge());
		for(int i = 0; Age[i] != '\0'; i++)
		{
			Age[i] -= 30;
		}
		strcpy(Blood,p3.getBlood());
		for(int i = 0; Blood[i] != '\0'; i++)
		{
			Blood[i] -= 30;
		}
		strcpy(Medical,p3.getMedical());
		for(int i = 0;	Medical[i] != '\0'; i++)
		{
			Medical[i] -= 30;
		}
		strcpy(Height,p3.getHeight());
		for(int i = 0; Height[i] != '\0'; i++)
		{
		Height[i] -= 30;
		}
		p3.set(Name, Age, Height, Medical, Blood);
		p3.show();
					}
	reed.close();
	cout<<endl;
	reed.open("PATIENT4ENCRYPTED.DAT", ios::in | ios::binary);
	while(reed.read(reinterpret_cast<char*>(&p4), sizeof(p4)))
	{
		strcpy(Name,p4.getName());
		for(int i = 0;Name[i]!= '\0'; i++)
		{
			Name[i] -= 30;
		}
		strcpy(Age,p4.getAge());
		for(int i = 0; Age[i] != '\0'; i++)
		{
			Age[i] -= 30;
		}
		strcpy(Blood,p4.getBlood());
		for(int i = 0; Blood[i] != '\0'; i++)
		{
			Blood[i] -= 30;
		}
		strcpy(Medical,p4.getMedical());
		for(int i = 0;	Medical[i] != '\0'; i++)
		{
			Medical[i] -= 30;
		}
		strcpy(Height,p4.getHeight());
		for(int i = 0; Height[i] != '\0'; i++)
		{
		Height[i] -= 30;


		}
		p4.set(Name, Age, Height, Medical, Blood);
		p4.show();
					}
	reed.close();
	cout<<endl;
	reed.open("PATIENT5ENCRYPTED.DAT", ios::in | ios::binary);
	while(reed.read(reinterpret_cast<char*>(&p5), sizeof(p5)))
	{
		strcpy(Name,p5.getName());
		for(int i = 0;Name[i]!= '\0'; i++)
		{
			Name[i] -= 30;
		}
		strcpy(Age,p5.getAge());
		for(int i = 0; Age[i] != '\0'; i++)
		{
			Age[i] -= 30;
		}
		strcpy(Blood,p5.getBlood());
		for(int i = 0; Blood[i] != '\0'; i++)
		{
			Blood[i] -= 30;
		}
		strcpy(Medical,p5.getMedical());
		for(int i = 0;	Medical[i] != '\0'; i++)
		{
			Medical[i] -= 30;
		}
		strcpy(Height,p5.getHeight());
		for(int i = 0; Height[i] != '\0'; i++)
		{
		Height[i] -= 30;


		}
		p5.set(Name, Age, Height, Medical, Blood);
		p5.show();
						}
	reed.close();
	cout<<endl;
	reed.open("PATIENT6ENCRYPTED.DAT", ios::in | ios::binary);
	while(reed.read(reinterpret_cast<char*>(&p6), sizeof(p6)))
	{
		strcpy(Name,p6.getName());
		for(int i = 0;Name[i]!= '\0'; i++)
		{
			Name[i] -= 30;
		}
		strcpy(Age,p6.getAge());
		for(int i = 0; Age[i] != '\0'; i++)
		{
			Age[i] -= 30;
		}
		strcpy(Blood,p6.getBlood());
		for(int i = 0; Blood[i] != '\0'; i++)
		{
			Blood[i] -= 30;
		}
		strcpy(Medical,p6.getMedical());
		for(int i = 0;	Medical[i] != '\0'; i++)
		{
			Medical[i] -= 30;
		}
		strcpy(Height,p6.getHeight());
		for(int i = 0; Height[i] != '\0'; i++)
		{
		Height[i] -= 30;

		}
		p6.set(Name, Age, Height, Medical, Blood);
		p6.show();

	}
	reed.close();
	cout<<endl;
	reed.open("PATIENT7ENCRYPTED.DAT", ios::in | ios::binary);
	while(reed.read(reinterpret_cast<char*>(&p7), sizeof(p7)))
	{
		strcpy(Name,p7.getName());
		for(int i = 0;Name[i]!= '\0'; i++)
		{
			Name[i] -= 30;
		}
		strcpy(Age,p7.getAge());
		for(int i = 0; Age[i] != '\0'; i++)
		{
			Age[i] -= 30;
		}
		strcpy(Blood,p7.getBlood());
		for(int i = 0; Blood[i] != '\0'; i++)
		{
			Blood[i] -= 30;
		}
		strcpy(Medical,p7.getMedical());
		for(int i = 0;	Medical[i] != '\0'; i++)
		{
			Medical[i] -= 30;
		}
		strcpy(Height,p7.getHeight());
		for(int i = 0; Height[i] != '\0'; i++)
		{
		Height[i] -= 30;
		}
		p7.set(Name, Age, Height, Medical, Blood);
		p7.show();
						}
	reed.close();
	cout<<endl;
	reed.open("PATIENT8ENCRYPTED.DAT", ios::in | ios::binary);
	while(reed.read(reinterpret_cast<char*>(&p8), sizeof(p8)))
	{
		strcpy(Name,p8.getName());
		for(int i = 0;Name[i]!= '\0'; i++)
		{
			Name[i] -= 30;
		}
		strcpy(Age,p8.getAge());
		for(int i = 0; Age[i] != '\0'; i++)
		{
			Age[i] -= 30;
		}
		strcpy(Blood,p8.getBlood());
		for(int i = 0; Blood[i] != '\0'; i++)
		{
			Blood[i] -= 30;
		}
		strcpy(Medical,p8.getMedical());
		for(int i = 0;	Medical[i] != '\0'; i++)
		{
			Medical[i] -= 30;
		}
		strcpy(Height,p8.getHeight());
		for(int i = 0; Height[i] != '\0'; i++)
		{
		Height[i] -= 30;


		}
		p8.set(Name, Age, Height, Medical, Blood);
		p8.show();
					}
	reed.close();
	cout<<endl;
	reed.open("PATIENT9ENCRYPTED.DAT", ios::in | ios::binary);
	while(reed.read(reinterpret_cast<char*>(&p9), sizeof(p9)))
	{
		strcpy(Name,p9.getName());
		for(int i = 0;Name[i]!= '\0'; i++)
		{
			Name[i] -= 30;
		}
		strcpy(Age,p9.getAge());
		for(int i = 0; Age[i] != '\0'; i++)
		{
			Age[i] -= 30;
		}
		strcpy(Blood,p9.getBlood());
		for(int i = 0; Blood[i] != '\0'; i++)
		{
			Blood[i] -= 30;
		}
		strcpy(Medical,p9.getMedical());
		for(int i = 0;	Medical[i] != '\0'; i++)
		{
			Medical[i] -= 30;
		}
		strcpy(Height,p9.getHeight());
		for(int i = 0; Height[i] != '\0'; i++)
		{
		Height[i] -= 30;


		}
		p9.set(Name, Age, Height, Medical, Blood);
		p9.show();
					}
	reed.close();
	cout<<endl;
	reed.open("PATIENT10ENCRYPTED.DAT", ios::in | ios::binary);
	while(reed.read(reinterpret_cast<char*>(&p10), sizeof(p10)))
	{
		strcpy(Name,p10.getName());
		for(int i = 0;Name[i]!= '\0'; i++)
		{
			Name[i] -= 30;
		}
		strcpy(Age,p10.getAge());
		for(int i = 0; Age[i] != '\0'; i++)
		{
			Age[i] -= 30;
		}
		strcpy(Blood,p10.getBlood());
		for(int i = 0; Blood[i] != '\0'; i++)
		{
			Blood[i] -= 30;
		}
		strcpy(Medical,p10.getMedical());
		for(int i = 0;	Medical[i] != '\0'; i++)
		{
			Medical[i] -= 30;
		}
		strcpy(Height,p10.getHeight());
		for(int i = 0; Height[i] != '\0'; i++)
		{
		Height[i] -= 30;


		}
		p10.set(Name, Age, Height, Medical, Blood);
		p10.show();
						}
	reed.close();
	cout<<endl;


}

void DoctorApp::viewEHR(char pass[30])
{
	if(strcmp(this->pass,pass) != 0)
		cout<<"Wrong password!!!"<<endl;
	else
	{
		Patient p;
		Patient P;

		RMC2 s;
		RMC2 s1;
		char allergies[30];
		char chronic[30];
		char medical1[30];
		char medical2[30];
		char restrictions[30];

		fstream read("ENCEHR1.DAT" , ios::in | ios::binary);
		read.read(reinterpret_cast<char*>(&s), sizeof(s));
		read.read(reinterpret_cast<char*>(&p), sizeof(p));
		strcpy(allergies,s.getAllergies());
		strcpy(chronic,s.getChronichealthconditon());
		strcpy(medical1,s.getMedication1());
		strcpy(medical2,s.getMedication2());
		strcpy(restrictions,s.getRestrictions());
		for(int i = 0; allergies[i] != '\0'; i++)
		{
			allergies[i] -= 30;
		}
		for(int i = 0; medical1[i] != '\0'; i++)
		{
			medical1[i] -= 30;
		}
		for(int i = 0; medical2[i] != '\0'; i++)
		{
			medical2[i] -= 30;
		}
		for(int i = 0; chronic[i] != '\0'; i++)
		{
			chronic[i] -= 30;
		}
		for(int i = 0; restrictions[i] != '\0'; i++)
		{
			restrictions[i] -= 30;
		}	for(int i = 0; allergies[i] != '\0'; i++)
		{
			allergies[i] -= 30;
		}
		s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);

	    read.close();
	    read.open("PATIENT1.DAT", ios::in|ios::binary);
	    read.read(reinterpret_cast<char*>(&P),sizeof(P));

	    P.show();
	    s1.data();

	    read.close();


		  read.close();
		  read.open("ENCEHR2.DAT",ios::in|ios::binary);
			read.read(reinterpret_cast<char*>(&s), sizeof(s));
			read.read(reinterpret_cast<char*>(&p), sizeof(p));
			strcpy(allergies,s.getAllergies());
			strcpy(chronic,s.getChronichealthconditon());
			strcpy(medical1,s.getMedication1());
			strcpy(medical2,s.getMedication2());
			strcpy(restrictions,s.getRestrictions());
			for(int i = 0; allergies[i] != '\0'; i++)
			{
				allergies[i] -= 30;
			}
			for(int i = 0; medical1[i] != '\0'; i++)
			{
				medical1[i] -= 30;
			}
			for(int i = 0; medical2[i] != '\0'; i++)
			{
				medical2[i] -= 30;
			}
			for(int i = 0; chronic[i] != '\0'; i++)
			{
				chronic[i] -= 30;
			}
			for(int i = 0; restrictions[i] != '\0'; i++)
			{
				restrictions[i] -= 30;
			}	for(int i = 0; allergies[i] != '\0'; i++)
			{
				allergies[i] -= 30;
			}
			s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);

		    read.close();
		    read.open("PATIENT2.DAT", ios::in|ios::binary);
		    read.read(reinterpret_cast<char*>(&p),sizeof(p));
		    if(strcmp(pat.getName(),p.getName())==0)
		    		{
		    p.show();
		    s1.data();
		    		}
		    read.close();
			  read.open("ENCEHR3.DAT",ios::in|ios::binary);
				read.read(reinterpret_cast<char*>(&s), sizeof(s));
				read.read(reinterpret_cast<char*>(&p), sizeof(p));
				strcpy(allergies,s.getAllergies());
				strcpy(chronic,s.getChronichealthconditon());
				strcpy(medical1,s.getMedication1());
				strcpy(medical2,s.getMedication2());
				strcpy(restrictions,s.getRestrictions());
				for(int i = 0; allergies[i] != '\0'; i++)
				{
					allergies[i] -= 30;
				}
				for(int i = 0; medical1[i] != '\0'; i++)
				{
					medical1[i] -= 30;
				}
				for(int i = 0; medical2[i] != '\0'; i++)
				{
					medical2[i] -= 30;
				}
				for(int i = 0; chronic[i] != '\0'; i++)
				{
					chronic[i] -= 30;
				}
				for(int i = 0; restrictions[i] != '\0'; i++)
				{
					restrictions[i] -= 30;
				}	for(int i = 0; allergies[i] != '\0'; i++)
				{
					allergies[i] -= 30;
				}
				s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);

			    read.close();
			    read.open("PATIENT3.DAT", ios::in|ios::binary);
			    read.read(reinterpret_cast<char*>(&p),sizeof(p));
			    if(strcmp(pat.getName(),p.getName())==0)
			    		{
			    p.show();
			    s1.data();
			    		}
			    read.close();
				  read.open("ENCEHR4.DAT",ios::in|ios::binary);
					read.read(reinterpret_cast<char*>(&s), sizeof(s));
					read.read(reinterpret_cast<char*>(&p), sizeof(p));
					strcpy(allergies,s.getAllergies());
					strcpy(chronic,s.getChronichealthconditon());
					strcpy(medical1,s.getMedication1());
					strcpy(medical2,s.getMedication2());
					strcpy(restrictions,s.getRestrictions());
					for(int i = 0; allergies[i] != '\0'; i++)
					{
						allergies[i] -= 30;
					}
					for(int i = 0; medical1[i] != '\0'; i++)
					{
						medical1[i] -= 30;
					}
					for(int i = 0; medical2[i] != '\0'; i++)
					{
						medical2[i] -= 30;
					}
					for(int i = 0; chronic[i] != '\0'; i++)
					{
						chronic[i] -= 30;
					}
					for(int i = 0; restrictions[i] != '\0'; i++)
					{
						restrictions[i] -= 30;
					}	for(int i = 0; allergies[i] != '\0'; i++)
					{
						allergies[i] -= 30;
					}
					s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);

				    read.close();
				    read.open("PATIENT4.DAT", ios::in|ios::binary);
				    read.read(reinterpret_cast<char*>(&p),sizeof(p));
				    if(strcmp(pat.getName(),p.getName())==0)
				    		{
				    p.show();
				    s1.data();
				    		}
				    read.close();
					  read.open("ENCEHR5.DAT",ios::in|ios::binary);
						read.read(reinterpret_cast<char*>(&s), sizeof(s));
						read.read(reinterpret_cast<char*>(&p), sizeof(p));
						strcpy(allergies,s.getAllergies());
						strcpy(chronic,s.getChronichealthconditon());
						strcpy(medical1,s.getMedication1());
						strcpy(medical2,s.getMedication2());
						strcpy(restrictions,s.getRestrictions());
						for(int i = 0; allergies[i] != '\0'; i++)
						{
							allergies[i] -= 30;
						}
						for(int i = 0; medical1[i] != '\0'; i++)
						{
							medical1[i] -= 30;
						}
						for(int i = 0; medical2[i] != '\0'; i++)
						{
							medical2[i] -= 30;
						}
						for(int i = 0; chronic[i] != '\0'; i++)
						{
							chronic[i] -= 30;
						}
						for(int i = 0; restrictions[i] != '\0'; i++)
						{
							restrictions[i] -= 30;
						}	for(int i = 0; allergies[i] != '\0'; i++)
						{
							allergies[i] -= 30;
						}
						s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);

					    read.close();
					    read.open("PATIENT5.DAT", ios::in|ios::binary);
					    read.read(reinterpret_cast<char*>(&p),sizeof(p));
					    if(strcmp(pat.getName(),p.getName())==0)
					    		{
					    p.show();
					    s1.data();
					    		}
					    read.close();
						  read.open("ENCEHR6.DAT",ios::in|ios::binary);
							read.read(reinterpret_cast<char*>(&s), sizeof(s));
							read.read(reinterpret_cast<char*>(&p), sizeof(p));
							strcpy(allergies,s.getAllergies());
							strcpy(chronic,s.getChronichealthconditon());
							strcpy(medical1,s.getMedication1());
							strcpy(medical2,s.getMedication2());
							strcpy(restrictions,s.getRestrictions());
							for(int i = 0; allergies[i] != '\0'; i++)
							{
								allergies[i] -= 30;
							}
							for(int i = 0; medical1[i] != '\0'; i++)
							{
								medical1[i] -= 30;
							}
							for(int i = 0; medical2[i] != '\0'; i++)
							{
								medical2[i] -= 30;
							}
							for(int i = 0; chronic[i] != '\0'; i++)
							{
								chronic[i] -= 30;
							}
							for(int i = 0; restrictions[i] != '\0'; i++)
							{
								restrictions[i] -= 30;
							}	for(int i = 0; allergies[i] != '\0'; i++)
							{
								allergies[i] -= 30;
							}
							s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);

						    read.close();
						    read.open("PATIENT7.DAT", ios::in|ios::binary);
						    read.read(reinterpret_cast<char*>(&p),sizeof(p));
						    if(strcmp(pat.getName(),p.getName())==0)
						    		{
						    p.show();
						    s1.data();
						    		}
						    read.close();
							  read.open("ENCEHR2.DAT",ios::in|ios::binary);
								read.read(reinterpret_cast<char*>(&s), sizeof(s));
								read.read(reinterpret_cast<char*>(&p), sizeof(p));
								strcpy(allergies,s.getAllergies());
								strcpy(chronic,s.getChronichealthconditon());
								strcpy(medical1,s.getMedication1());
								strcpy(medical2,s.getMedication2());
								strcpy(restrictions,s.getRestrictions());
								for(int i = 0; allergies[i] != '\0'; i++)
								{
									allergies[i] -= 30;
								}
								for(int i = 0; medical1[i] != '\0'; i++)
								{
									medical1[i] -= 30;
								}
								for(int i = 0; medical2[i] != '\0'; i++)
								{
									medical2[i] -= 30;
								}
								for(int i = 0; chronic[i] != '\0'; i++)
								{
									chronic[i] -= 30;
								}
								for(int i = 0; restrictions[i] != '\0'; i++)
								{
									restrictions[i] -= 30;
								}	for(int i = 0; allergies[i] != '\0'; i++)
								{
									allergies[i] -= 30;
								}
								s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);

							    read.close();
							    read.open("PATIENT7.DAT", ios::in|ios::binary);
							    read.read(reinterpret_cast<char*>(&p),sizeof(p));
							    if(strcmp(pat.getName(),p.getName())==0)
							    		{
							    p.show();
							    s1.data();
							    		}
							    read.close();
								  read.open("ENCEHR8.DAT",ios::in|ios::binary);
									read.read(reinterpret_cast<char*>(&s), sizeof(s));
									read.read(reinterpret_cast<char*>(&p), sizeof(p));
									strcpy(allergies,s.getAllergies());
									strcpy(chronic,s.getChronichealthconditon());
									strcpy(medical1,s.getMedication1());
									strcpy(medical2,s.getMedication2());
									strcpy(restrictions,s.getRestrictions());
									for(int i = 0; allergies[i] != '\0'; i++)
									{
										allergies[i] -= 30;
									}
									for(int i = 0; medical1[i] != '\0'; i++)
									{
										medical1[i] -= 30;
									}
									for(int i = 0; medical2[i] != '\0'; i++)
									{
										medical2[i] -= 30;
									}
									for(int i = 0; chronic[i] != '\0'; i++)
									{
										chronic[i] -= 30;
									}
									for(int i = 0; restrictions[i] != '\0'; i++)
									{
										restrictions[i] -= 30;
									}	for(int i = 0; allergies[i] != '\0'; i++)
									{
										allergies[i] -= 30;
									}
									s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);

								    read.close();
								    read.open("PATIENT8.DAT", ios::in|ios::binary);
								    read.read(reinterpret_cast<char*>(&p),sizeof(p));
								    if(strcmp(pat.getName(),p.getName())==0)
								    		{
								    p.show();
								    s1.data();
								    		}
								    read.close();
									  read.open("ENCEHR9.DAT",ios::in|ios::binary);
										read.read(reinterpret_cast<char*>(&s), sizeof(s));
										read.read(reinterpret_cast<char*>(&p), sizeof(p));
										strcpy(allergies,s.getAllergies());
										strcpy(chronic,s.getChronichealthconditon());
										strcpy(medical1,s.getMedication1());
										strcpy(medical2,s.getMedication2());
										strcpy(restrictions,s.getRestrictions());
										for(int i = 0; allergies[i] != '\0'; i++)
										{
											allergies[i] -= 30;
										}
										for(int i = 0; medical1[i] != '\0'; i++)
										{
											medical1[i] -= 30;
										}
										for(int i = 0; medical2[i] != '\0'; i++)
										{
											medical2[i] -= 30;
										}
										for(int i = 0; chronic[i] != '\0'; i++)
										{
											chronic[i] -= 30;
										}
										for(int i = 0; restrictions[i] != '\0'; i++)
										{
											restrictions[i] -= 30;
										}	for(int i = 0; allergies[i] != '\0'; i++)
										{
											allergies[i] -= 30;
										}
										s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);

									    read.close();
									    read.open("PATIENT9.DAT", ios::in|ios::binary);
									    read.read(reinterpret_cast<char*>(&p),sizeof(p));
									    if(strcmp(pat.getName(),p.getName())==0)
									    		{
									    p.show();
									    s1.data();
									    		}
									    read.close();
										  read.open("ENCEHR10.DAT",ios::in|ios::binary);
											read.read(reinterpret_cast<char*>(&s), sizeof(s));
											read.read(reinterpret_cast<char*>(&p), sizeof(p));
											strcpy(allergies,s.getAllergies());
											strcpy(chronic,s.getChronichealthconditon());
											strcpy(medical1,s.getMedication1());
											strcpy(medical2,s.getMedication2());
											strcpy(restrictions,s.getRestrictions());
											for(int i = 0; allergies[i] != '\0'; i++)
											{
												allergies[i] -= 30;
											}
											for(int i = 0; medical1[i] != '\0'; i++)
											{
												medical1[i] -= 30;
											}
											for(int i = 0; medical2[i] != '\0'; i++)
											{
												medical2[i] -= 30;
											}
											for(int i = 0; chronic[i] != '\0'; i++)
											{
												chronic[i] -= 30;
											}
											for(int i = 0; restrictions[i] != '\0'; i++)
											{
												restrictions[i] -= 30;
											}	for(int i = 0; allergies[i] != '\0'; i++)
											{
												allergies[i] -= 30;
											}
											s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);

										    read.close();
										    read.open("PATIENT10.DAT", ios::in|ios::binary);
										    read.read(reinterpret_cast<char*>(&p),sizeof(p));
										    if(strcmp(pat.getName(),p.getName())==0)
										    		{
										    p.show();
										    s1.data();
										    		}
										    read.close();
	}





}
void DoctorApp::change(char name[30],char change[30],int n)
{
	RMC2 s;
	Patient p;

	fstream read("EHR1.DAT", ios::in|ios::binary);
	read.read(reinterpret_cast<char*>(&s), sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(name,p.getName()) == 0)
	{
		if(n == 1)
		{
			s.setmedication1(change);
			fstream write("EHR1.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 2)
		{
			s.setmedication2(change);
			fstream write("EHR1.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

		if(n == 3)
		{
			s.Setchronicalcondition(change);
			fstream write("EHR1.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 4)
		{
			s.Setallergies(change);
			fstream write("EHR1.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 5)
		{
			s.Setrestrictions(change);
			fstream write("EHR1.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

	}
	read.close();
	read.open("EHR2.DAT", ios::in|ios::binary);
	read.read(reinterpret_cast<char*>(&s), sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(name,p.getName()) == 0)
	{
		if(n == 1)
		{
			s.setmedication1(change);
			fstream write("EHR2.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 2)
		{
			s.setmedication2(change);
			fstream write("EHR2.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

		if(n == 3)
		{
			s.Setchronicalcondition(change);
			fstream write("EHR2.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 4)
		{
			s.Setallergies(change);
			fstream write("EHR2.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 5)
		{
			s.Setrestrictions(change);
			fstream write("EHR2.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

	}
	read.close();
	read.open("EHR3.DAT", ios::in|ios::binary);
	read.read(reinterpret_cast<char*>(&s), sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(name,p.getName()) == 0)
	{
		if(n == 1)
		{
			s.setmedication1(change);
			fstream write("EHR3.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 2)
		{
			s.setmedication2(change);
			fstream write("EHR3.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

		if(n == 3)
		{
			s.Setchronicalcondition(change);
			fstream write("EHR3.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 4)
		{
			s.Setallergies(change);
			fstream write("EHR3.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 5)
		{
			s.Setrestrictions(change);
			fstream write("EHR3.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

	}
	read.close();
	read.open("EHR4.DAT", ios::in|ios::binary);
	read.read(reinterpret_cast<char*>(&s), sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(name,p.getName()) == 0)
	{
		if(n == 1)
		{
			s.setmedication1(change);
			fstream write("EHR4.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 2)
		{
			s.setmedication2(change);
			fstream write("EHR4.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

		if(n == 3)
		{
			s.Setchronicalcondition(change);
			fstream write("EHR4.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 4)
		{
			s.Setallergies(change);
			fstream write("EHR4.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 5)
		{
			s.Setrestrictions(change);
			fstream write("EHR4.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

	}
	read.close();
	read.open("EHR5.DAT", ios::in|ios::binary);
	read.read(reinterpret_cast<char*>(&s), sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(name,p.getName()) == 0)
	{
		if(n == 1)
		{
			s.setmedication1(change);
			fstream write("EHR5.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 2)
		{
			s.setmedication2(change);
			fstream write("EHR5.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

		if(n == 3)
		{
			s.Setchronicalcondition(change);
			fstream write("EHR5.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 4)
		{
			s.Setallergies(change);
			fstream write("EHR5.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 5)
		{
			s.Setrestrictions(change);
			fstream write("EHR5.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

	}
	read.close();
	read.open("EHR6.DAT", ios::in|ios::binary);
	read.read(reinterpret_cast<char*>(&s), sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(name,p.getName()) == 0)
	{
		if(n == 1)
		{
			s.setmedication1(change);
			fstream write("EHR6.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 2)
		{
			s.setmedication2(change);
			fstream write("EHR6.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

		if(n == 3)
		{
			s.Setchronicalcondition(change);
			fstream write("EHR6.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 4)
		{
			s.Setallergies(change);
			fstream write("EHR6.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 5)
		{
			s.Setrestrictions(change);
			fstream write("EHR6.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

	}
	read.close();
	read.open("EHR7.DAT", ios::in|ios::binary);
	read.read(reinterpret_cast<char*>(&s), sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(name,p.getName()) == 0)
	{
		if(n == 1)
		{
			s.setmedication1(change);
			fstream write("EHR7.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 2)
		{
			s.setmedication2(change);
			fstream write("EHR7.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

		if(n == 3)
		{
			s.Setchronicalcondition(change);
			fstream write("EHR7.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 4)
		{
			s.Setallergies(change);
			fstream write("EHR7.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 5)
		{
			s.Setrestrictions(change);
			fstream write("EHR7.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

	}

	read.close();
	read.open("EHR8.DAT", ios::in|ios::binary);
	read.read(reinterpret_cast<char*>(&s), sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(name,p.getName()) == 0)
	{
		if(n == 1)
		{
			s.setmedication1(change);
			fstream write("EHR8.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 2)
		{
			s.setmedication2(change);
			fstream write("EHR8.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

		if(n == 3)
		{
			s.Setchronicalcondition(change);
			fstream write("EHR8.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 4)
		{
			s.Setallergies(change);
			fstream write("EHR8.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 5)
		{
			s.Setrestrictions(change);
			fstream write("EHR8.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

	}
	read.close();
	read.open("EHR9.DAT", ios::in|ios::binary);
	read.read(reinterpret_cast<char*>(&s), sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(name,p.getName()) == 0)
	{
		if(n == 1)
		{
			s.setmedication1(change);
			fstream write("EHR9.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 2)
		{
			s.setmedication2(change);
			fstream write("EHR9.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

		if(n == 3)
		{
			s.Setchronicalcondition(change);
			fstream write("EHR9.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 4)
		{
			s.Setallergies(change);
			fstream write("EHR9.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 5)
		{
			s.Setrestrictions(change);
			fstream write("EHR9.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

	}
	read.close();
	read.open("EHR10.DAT", ios::in|ios::binary);
	read.read(reinterpret_cast<char*>(&s), sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(name,p.getName()) == 0)
	{
		if(n == 1)
		{
			s.setmedication1(change);
			fstream write("EHR10.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 2)
		{
			s.setmedication2(change);
			fstream write("EHR10.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

		if(n == 3)
		{
			s.Setchronicalcondition(change);
			fstream write("EHR10.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 4)
		{
			s.Setallergies(change);
			fstream write("EHR10.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}
		if(n == 5)
		{
			s.Setrestrictions(change);
			fstream write("EHR10.DAT",ios::out|ios::app|ios::binary);
			write.write(reinterpret_cast<char*>(&s),sizeof(s));
			write.write(reinterpret_cast<char*>(&p),sizeof(p));
			s.EncryptEHR();
		}

	}
	read.close();
}
void DoctorApp::records()
{
	RMC2 s;
	s.Decryptrecords();
}
const Doctor& DoctorApp::getDoc() const {
	return doc;
}

void DoctorApp::setDoc(const Doctor &doc) {
	this->doc = doc;
}

const Patient& DoctorApp::getPat() const {
	return pat;
}

void DoctorApp::setPat(const Patient &pat) {
	this->pat = pat;
}

DoctorApp::~DoctorApp() {
	// TODO Auto-generated destructor stub
}

