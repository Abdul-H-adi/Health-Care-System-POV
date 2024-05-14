//============================================================================
// Name        : Driver.cpp
// Author      : Abdul Hadi
// Version     :i22-1646 _ D
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
#include<ctime>
#include<chrono>
#include<iomanip>
#include<cstring>
#include"Doctor.h"
#include"Patient.h"
#include"Patientapp.h"
#include"RMC2.h"
#include"DoctorApp.h"
#include"AccessControl.h"

using namespace std;


int main() {
Patientapp papp;
DoctorApp ddapp;
Doctor dapp;
AccessControl A;
Patient paap;
RMC2 s;
s.set();
s.EncryptEHR();
papp.recordencryption();
papp.patientencryption();
srand(time(0));
papp.recordGenerate();
int input;
char cy = 'y';
cout<<">>>>>>>>>-.-.Health Care System.-.-<<<<<<<<<<<<<"<<endl;
cout<<"Which POV do you prefer?"<<endl;
cout<<"1. Patient APP\n2. Doctor's APP."<<endl;
cin>>input;
switch(input)
{
case 1:
{
	char notes[200];//to get notes during call
	char name[30];
	char time[6];//to get the appointed time for the patients;
	char date[10];//same as above but date
	Patient current;//class that stores the data of the current patient
	bool check = 1;//to see if there is a matching patient works as bool check
	cin.ignore();
	do{
	cout<<"Please enter your name: ";

	cin.getline(name, 30);

	check = papp.patientcheck(name);//function to check patient

	}
	while(check == 0);
	int input2;
	char ch2 = 'y';
	paap = papp.getPat();
	cout<<"\nWelcome: "<<paap.getName();
	cout<<"\nSO, How can i assist you?"<<endl;
	while(ch2 == 'y')
	{
	cout<<"1.Make a call\n2.Records \n3.Access Control\n4.Book Appointment"<<endl;
	cin>>input2;
	char ch5;
	switch(input2)
	{
	case 1:
		ch5 = 'y';
		cout<<"Please select a doctor from below: "<<endl;
		dapp.read();
		int input3;
		cin>>input3;
		if(input3 < 6 && input3 > 0)
		{
			cout<<"1.voice call or 2.Video call?"<<endl;
			cin>>input3;
			if(input3 == 1 || input3 == 2)
			{
				cout<<"Caliing..........."<<endl;
				auto start_time = chrono::high_resolution_clock::now();
				 // Get the current time and format it as a string
				 auto current_time = chrono::system_clock::to_time_t(chrono::system_clock::now());
				while(ch5 == 'y')
				{
				cout<<"\n\nYour call is connected!"<<endl;
				cout<<"1.end call?\n2.Make notes\n3.record"<<endl;



				cin>>input3;

				if(input3 == 1)
				{
					auto end_time = chrono::high_resolution_clock::now();
					cout<<"Call ended.."<<endl;
					auto elapsed_time_ms = chrono::duration_cast<chrono::milliseconds>(end_time - start_time);
					   // Calculate the elapsed time in minutes and seconds
					auto elapsed_time = chrono::duration_cast<chrono::seconds>(chrono::high_resolution_clock::now() - start_time).count();
					int minutes = elapsed_time / 60;
					int seconds = elapsed_time % 60;

					// Display the elapsed time in minutes and seconds format
					cout << "\rElapsed time: " << setfill('0') << setw(2) << minutes << ":" << setw(2) << seconds << flush;
					cout << "\nCall started at: " << put_time(localtime(&current_time), " %H:%M:%S") << endl;

					cout<<"Notes: "<<notes<<endl;
					break;
				}
				else if(input3 == 2)
				{
					cout<<"Please enter your notes and press enter: "<<endl;
					cin.ignore();
					cin.getline(notes, 200);
				}
				else if(input3 == 3)
				{
					cout<<"call is being recorded!"<<endl;
				}
				}

			}
		}
		cout<<"continue? (y/n): ";
		cin>>ch2;
		break;

	case 2:

		int inputt;
			cout<<"1.History\n2.EHRC"<<endl;
			cin>>inputt;
			if(inputt == 1)
			{
				papp.recordread();
			}
			else if(inputt == 2)
			{
				s.show(paap);
			}
			cin.ignore();
			cout<<"Continue?(y/n): ";//for inner records and ehrc
			cin>>ch2;
		break;
	case 3:
		int doc;
		bool sig;
		cout<<"Please enter the Doctor you're referring to: "<<endl;
		dapp.read();
		cin>>doc;
		papp.doctorcheck(doc);
		cout<<"Please enter \n1 if you want to allow access\n2 if you want to deny access"<<endl;
		cout<<"Access to Blood Pressure Reading?"<<endl;
		cin>>sig;
		A.setBp(sig);
		cout<<"Access to Breathing patterns reading?"<<endl;
		cin>>sig;
		A.setBr(sig);
		cout<<"Access to Heartrate Readings?"<<endl;
		cin>>sig;
		A.setHr(sig);
		cout<<"Access to OxygenLevel reading?"<<endl;
		cin>>sig;
		A.setHl(sig);
		cout<<"Access to Pedometer Reading?"<<endl;
		cin>>sig;
		A.setPd(sig);
		cout<<"Access to Accelerometer Reading?"<<endl;
		cin>>sig;
		A.setAc(sig);
		cout<<"Access to Sleep pattern reading?"<<endl;
		cin>>sig;
		A.setS(sig);
		A.writeaccess(A);

		cout<<"Continue?(y/n): ";
		cin.ignore();
		cin>>ch2;
		break;
	case 4:
		cout<<"Please select a doctor to appoint: "<<endl;
		dapp.read();
		Doctor Doc;
		int input4;
		cin>>input4;
		if(input4 > 0 && input4 < 6)
		{
			cin.ignore();
			papp.doctorcheck(input4);
			cout<<"Please enter a time for the appointment(00:00): ";
			cin.ignore();
			cin.getline(time,6);
			papp.Settime(time);
			cout<<"Please enter a date: dd/mm/yy";
			cin.getline(date,10);
			papp.Setdate(date);
			cout<<"\nBooked!"<<endl;
			cout<<"Viewing Booking informtion"<<endl;
			papp.showappointment();
			cout<<"Continue? (y/n): ";
			cin>>ch2;
			break;
		}
	}


	}
}
break;
case 2:
	char name2[30];
	cout<<"Hello there!"<<endl;
	cout<<"Please enter your name: ";
	cin.ignore();
	cin.getline(name2,30);
	ddapp.doctorcheck(name2);

	dapp = ddapp.getDoc();
	int Input;
	char go = 'y';
	cout<<"Welcome: "<<dapp.getName()<<endl;
	while(go == 'y')
	{
	cout<<"1.view EHR\n2.View past records"<<endl;

	cin>>Input;
		if(Input == 1)
		{
			char nam[30];
cin.ignore();
			cout<<"Please select a patient:"<<endl;
			ddapp.patientdecryptshow();

			bool che = 1;
			do{
				if(che == 0)
					cout<<"Wrong name"<<endl;
				cout<<"Please enter the name: ";

				cin.getline(nam,30);

				che = papp.patientcheck(nam);
				Patient pa;
				pa = papp.getPat();
				ddapp.setPat(pa);


			}
			while(che == 0);
			cout<<endl;
			cout<<"Please enter password for this user: ";
			char hey[30];

			cin.getline(hey,30);

			ddapp.viewEHR(hey);
			cout<<"\nEDIT?"<<endl;
			int i;
			cin>>i;
			if(i == 1)
			{
				cout<<"what would you like to change?"<<endl;
				cout<<"1.Mediacation1\n2.Medication2\n3.Chronic Condition\n4.Allergies\n5.Restrictions"<<endl;
				int n;
				cin>>n;
				if(n >0 && n<6)
				{
					cin.ignore();
					cin.getline(hey,30);
					ddapp.change(nam, hey, n);
				}
				cout<<"Continue?"<<endl;
							cin>>go;

			}

		}
		if(Input == 2)
		{
			char nam[30];
cin.ignore();
			cout<<"Please select a patient:"<<endl;
			ddapp.patientdecryptshow();

			bool che = 1;
			do{
				if(che == 0)
					cout<<"Wrong name"<<endl;
				cout<<"Please enter the name: ";

				cin.getline(nam,30);

				che = papp.patientcheck(nam);
				Patient pa;
				pa = papp.getPat();
				ddapp.setPat(pa);


			}
			while(che == 0);
			int pass;
			cout<<"input password: ";
			cin>>pass;
			if(pass == 6598)
			ddapp.records();
			else
				cout<<"You dont have the correct passcode"<<endl;
		}
		cout<<"Continue?"<<endl;
					cin>>go;

	}

	}

	return 0;
}




