/*
 * RMC2.cpp
 *
 *  Created on: May 9, 2023
 *      Author: hadi
 */

#include "RMC2.h"
#include<iostream>
#include<cstring>
using namespace std;
RMC2::RMC2() {

}


void RMC2::Setallergies(char allergies[30])
{
	strcpy(this->allergies,allergies);
}
void RMC2::Setchronicalcondition(char chronichealthcondition[30])
{
	strcpy(this->chronichealthconditon, chronichealthcondition);

}
void RMC2::Setrestrictions(char restrictions[30])
{
	strcpy(this->restrictions,restrictions);
}
void RMC2::setmedication1(char medication1[30])
{
	strcpy(this->medication1,medication1);
}
void RMC2::setmedication2(char medication2[30])
{
	strcpy(this->medication2, medication2);
}
void RMC2::Decryptrecords()
{
	AccessControl a;
	ifstream r("Access.DAT",ios::in|ios::binary);
	r.read(reinterpret_cast<char*>(&a),sizeof(a));
	r.close();
	BP bp;
	Breathingrate br;
	Heartrate hr;
	Oxygenlevel hl;
	Pedometer pd;
	Accelerometer ac;
	sleep s;
	int i = 0;
	ifstream reed("ENCRYPTEDRECORD.DAT",ios::in | ios::binary);
	while(reed.read(reinterpret_cast<char*>(&bp), sizeof(bp))&&
		  reed.read(reinterpret_cast<char*>(&br), sizeof(br))&&
		  reed.read(reinterpret_cast<char*>(&hr), sizeof(hr))&&
		  reed.read(reinterpret_cast<char*>(&hl), sizeof(hl))&&
		  reed.read(reinterpret_cast<char*>(&pd), sizeof(pd))&&
		  reed.read(reinterpret_cast<char*>(&ac), sizeof(ac))&&
		  reed.read(reinterpret_cast<char*>(&s), sizeof(s)))
	{
		bp.setSystolic(bp.getSystolic()^12);
		bp.setDiastolic(bp.getDiastolic()^12);
		br.setBreatpm(br.getBreatpm()^12);
		hr.setBpm(hr.getBpm()^12);
		hl.setOxygenper(hl.getOxygenper()^12);
		pd.setSteps(pd.getSteps()^12);
		ac.setAcc(ac.getAcc()^12);
		s.setSleep(s.getSleep()^12);

		if(i%60 == 0)
			cout<<setw(38)<<"\033[40;93m"<<"Month : "<<(i/60)+1<<setw(35)<<"."<<"\033[0m"<<endl;
		if(i%14 == 0)
			cout<<setw(38)<<"\033[40;92m"<<"Week : "<<(i/14)+1<<setw(36)<<"."<<"\033[0m"<<endl;
		if(i%2 == 0)
			cout<<setw(38)<<"\033[40;91m"<<"Day : "<<(i/2)<<setw(36)<<"."<<"\033[0m"<<endl;
		if(a.isBp())
		bp.show();
		if(a.isBr())
		br.show();
		if(a.isHr())
		hr.show();
		if(a.isHl())
		hl.show();
		if(a.isPd())
		pd.show();
		if(a.isAc())
		ac.show();
		if(a.isS())
		s.show();
		i++;

	}

}
void RMC2::set(){
	RMC2 s;
	s.defalt();
	fstream wri("EHR1.DAT", ios::out | ios::binary);
	wri.write(reinterpret_cast<char*>(&s), sizeof(s));
	wri.close();
	wri.open("EHR2.DAT", ios::out | ios::binary);
	wri.write(reinterpret_cast<char*>(&s), sizeof(s));
	wri.close();
	wri.open("EHR3.DAT", ios::out | ios::binary);
	wri.write(reinterpret_cast<char*>(&s), sizeof(s));
	wri.close();
	wri.open("EHR4.DAT", ios::out | ios::binary);
	wri.write(reinterpret_cast<char*>(&s), sizeof(s));
	wri.close();
	wri.open("EHR5.DAT", ios::out | ios::binary);
	wri.write(reinterpret_cast<char*>(&s), sizeof(s));
	wri.close();
	wri.open("EHR6.DAT", ios::out | ios::binary);
	wri.write(reinterpret_cast<char*>(&s), sizeof(s));
	wri.close();
	wri.open("EHR7.DAT", ios::out | ios::binary);
	wri.write(reinterpret_cast<char*>(&s), sizeof(s));
	wri.close();
	wri.open("EHR8.DAT", ios::out | ios::binary);
	wri.write(reinterpret_cast<char*>(&s), sizeof(s));
	wri.close();
	wri.open("EHR9.DAT", ios::out | ios::binary);
	wri.write(reinterpret_cast<char*>(&s), sizeof(s));
	wri.close();
	wri.open("EHR10.DAT", ios::out | ios::binary);
	wri.write(reinterpret_cast<char*>(&s), sizeof(s));
	wri.close();

	addpatient();

}
void RMC2::addpatient(){
	Patient p;
	char name[30];
	char age[30];
	char blood[30];
	char Height[30];
	char medical[30];
	fstream r("PATIENT1ENCRYPTED.DAT", ios::in | ios::binary);
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(name,p.getName());
	strcpy(age,p.getAge());
	strcpy(blood,p.getBlood());
	strcpy(Height,p.getHeight());
	strcpy(medical,p.getMedical());
	for(int i = 0; name[i] != '\0'; i ++)
	{
		name[i] -= 30;
	}
	for(int i = 0; age[i] != '\0'; i ++)
	{
		age[i] -= 30;
	}
	for(int i = 0; blood[i] != '\0'; i ++)
	{
		blood[i] -= 30;
	}
	for(int i = 0; Height[i] != '\0'; i ++)
	{
		Height[i] -= 30;
	}
	for(int i = 0; medical[i] != '\0'; i ++)
	{
		medical[i] -= 30;
	}
	p.set(name, age, Height, medical, blood);
	r.close();
	fstream w("EHR1.DAT", ios::app | ios::binary);
	w.write(reinterpret_cast<char *>(&p), sizeof(p));
	w.close();
	r.open("PATIENT2ENCRYPTED.DAT", ios::in| ios::binary);
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(name,p.getName());
	strcpy(age,p.getAge());
	strcpy(blood,p.getBlood());
	strcpy(Height,p.getHeight());
	strcpy(medical,p.getMedical());
	for(int i = 0; name[i] != '\0'; i ++)
	{
		name[i] -= 30;
	}
	for(int i = 0; age[i] != '\0'; i ++)
	{
		age[i] -= 30;
	}
	for(int i = 0; blood[i] != '\0'; i ++)
	{
		blood[i] -= 30;
	}
	for(int i = 0; Height[i] != '\0'; i ++)
	{
		Height[i] -= 30;
	}
	for(int i = 0; medical[i] != '\0'; i ++)
	{
		medical[i] -= 30;
	}
	p.set(name, age, Height, medical, blood);
	r.close();
	w.open("EHR2.DAT", ios::app | ios:: binary);
	w.write(reinterpret_cast<char*>(&p), sizeof(p));
	w.close();
	r.open("PATIENT3ENCRYPTED.DAT", ios::in| ios::binary);
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(name,p.getName());
	strcpy(age,p.getAge());
	strcpy(blood,p.getBlood());
	strcpy(Height,p.getHeight());
	strcpy(medical,p.getMedical());
	for(int i = 0; name[i] != '\0'; i ++)
	{
		name[i] -= 30;
	}
	for(int i = 0; age[i] != '\0'; i ++)
	{
		age[i] -= 30;
	}
	for(int i = 0; blood[i] != '\0'; i ++)
	{
		blood[i] -= 30;
	}
	for(int i = 0; Height[i] != '\0'; i ++)
	{
		Height[i] -= 30;
	}
	for(int i = 0; medical[i] != '\0'; i ++)
	{
		medical[i] -= 30;
	}
	p.set(name, age, Height, medical, blood);
	r.close();
	w.open("EHR3.DAT", ios::app | ios:: binary);
	w.write(reinterpret_cast<char*>(&p), sizeof(p));
	w.close();
	r.open("PATIENT4ENCRYPTED.DAT", ios::in| ios::binary);
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(name,p.getName());
	strcpy(age,p.getAge());
	strcpy(blood,p.getBlood());
	strcpy(Height,p.getHeight());
	strcpy(medical,p.getMedical());
	for(int i = 0; name[i] != '\0'; i ++)
	{
		name[i] -= 30;
	}
	for(int i = 0; age[i] != '\0'; i ++)
	{
		age[i] -= 30;
	}
	for(int i = 0; blood[i] != '\0'; i ++)
	{
		blood[i] -= 30;
	}
	for(int i = 0; Height[i] != '\0'; i ++)
	{
		Height[i] -= 30;
	}
	for(int i = 0; medical[i] != '\0'; i ++)
	{
		medical[i] -= 30;
	}
	p.set(name, age, Height, medical, blood);
	r.close();
	w.open("EHR4.DAT", ios::app | ios:: binary);
	w.write(reinterpret_cast<char*>(&p), sizeof(p));
	w.close();
	r.open("PATIENT5ENCRYPTED.DAT", ios::in| ios::binary);
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(name,p.getName());
	strcpy(age,p.getAge());
	strcpy(blood,p.getBlood());
	strcpy(Height,p.getHeight());
	strcpy(medical,p.getMedical());
	for(int i = 0; name[i] != '\0'; i ++)
	{
		name[i] -= 30;
	}
	for(int i = 0; age[i] != '\0'; i ++)
	{
		age[i] -= 30;
	}
	for(int i = 0; blood[i] != '\0'; i ++)
	{
		blood[i] -= 30;
	}
	for(int i = 0; Height[i] != '\0'; i ++)
	{
		Height[i] -= 30;
	}
	for(int i = 0; medical[i] != '\0'; i ++)
	{
		medical[i] -= 30;
	}
	p.set(name, age, Height, medical, blood);
	r.close();
	w.open("EHR5.DAT", ios::app | ios:: binary);
	w.write(reinterpret_cast<char*>(&p), sizeof(p));
	w.close();
	r.open("PATIENT6ENCRYPTED.DAT", ios::in| ios::binary);
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(name,p.getName());
	strcpy(age,p.getAge());
	strcpy(blood,p.getBlood());
	strcpy(Height,p.getHeight());
	strcpy(medical,p.getMedical());
	for(int i = 0; name[i] != '\0'; i ++)
	{
		name[i] -= 30;
	}
	for(int i = 0; age[i] != '\0'; i ++)
	{
		age[i] -= 30;
	}
	for(int i = 0; blood[i] != '\0'; i ++)
	{
		blood[i] -= 30;
	}
	for(int i = 0; Height[i] != '\0'; i ++)
	{
		Height[i] -= 30;
	}
	for(int i = 0; medical[i] != '\0'; i ++)
	{
		medical[i] -= 30;
	}
	p.set(name, age, Height, medical, blood);
	r.close();
	w.open("EHR6.DAT", ios::app | ios:: binary);
	w.write(reinterpret_cast<char*>(&p), sizeof(p));
	w.close();
	r.open("PATIENT7ENCRYPTED.DAT", ios::in| ios::binary);
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(name,p.getName());
	strcpy(age,p.getAge());
	strcpy(blood,p.getBlood());
	strcpy(Height,p.getHeight());
	strcpy(medical,p.getMedical());
	for(int i = 0; name[i] != '\0'; i ++)
	{
		name[i] -= 30;
	}
	for(int i = 0; age[i] != '\0'; i ++)
	{
		age[i] -= 30;
	}
	for(int i = 0; blood[i] != '\0'; i ++)
	{
		blood[i] -= 30;
	}
	for(int i = 0; Height[i] != '\0'; i ++)
	{
		Height[i] -= 30;
	}
	for(int i = 0; medical[i] != '\0'; i ++)
	{
		medical[i] -= 30;
	}
	p.set(name, age, Height, medical, blood);
	r.close();
	w.open("EHR7.DAT", ios::app | ios:: binary);
	w.write(reinterpret_cast<char*>(&p), sizeof(p));
	w.close();
	r.open("PATIENT8ENCRYPTED.DAT", ios::in| ios::binary);
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(name,p.getName());
	strcpy(age,p.getAge());
	strcpy(blood,p.getBlood());
	strcpy(Height,p.getHeight());
	strcpy(medical,p.getMedical());
	for(int i = 0; name[i] != '\0'; i ++)
	{
		name[i] -= 30;
	}
	for(int i = 0; age[i] != '\0'; i ++)
	{
		age[i] -= 30;
	}
	for(int i = 0; blood[i] != '\0'; i ++)
	{
		blood[i] -= 30;
	}
	for(int i = 0; Height[i] != '\0'; i ++)
	{
		Height[i] -= 30;
	}
	for(int i = 0; medical[i] != '\0'; i ++)
	{
		medical[i] -= 30;
	}
	p.set(name, age, Height, medical, blood);
	r.close();
	w.open("EHR8.DAT", ios::app | ios:: binary);
	w.write(reinterpret_cast<char*>(&p), sizeof(p));
	w.close();
	r.open("PATIENT9ENCRYPTED.DAT", ios::in| ios::binary);
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(name,p.getName());
	strcpy(age,p.getAge());
	strcpy(blood,p.getBlood());
	strcpy(Height,p.getHeight());
	strcpy(medical,p.getMedical());
	for(int i = 0; name[i] != '\0'; i ++)
	{
		name[i] -= 30;
	}
	for(int i = 0; age[i] != '\0'; i ++)
	{
		age[i] -= 30;
	}
	for(int i = 0; blood[i] != '\0'; i ++)
	{
		blood[i] -= 30;
	}
	for(int i = 0; Height[i] != '\0'; i ++)
	{
		Height[i] -= 30;
	}
	for(int i = 0; medical[i] != '\0'; i ++)
	{
		medical[i] -= 30;
	}
	p.set(name, age, Height, medical, blood);
	r.close();
	w.open("EHR9.DAT", ios::app | ios:: binary);
	w.write(reinterpret_cast<char*>(&p), sizeof(p));
	w.close();
	r.open("PATIENT10ENCRYPTED.DAT", ios::in| ios::binary);
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(name,p.getName());
	strcpy(age,p.getAge());
	strcpy(blood,p.getBlood());
	strcpy(Height,p.getHeight());
	strcpy(medical,p.getMedical());
	for(int i = 0; name[i] != '\0'; i ++)
	{
		name[i] -= 30;
	}
	for(int i = 0; age[i] != '\0'; i ++)
	{
		age[i] -= 30;
	}
	for(int i = 0; blood[i] != '\0'; i ++)
	{
		blood[i] -= 30;
	}
	for(int i = 0; Height[i] != '\0'; i ++)
	{
		Height[i] -= 30;
	}
	for(int i = 0; medical[i] != '\0'; i ++)
	{
		medical[i] -= 30;
	}
	p.set(name, age, Height, medical, blood);
	r.close();
	w.open("EHR10.DAT", ios::app | ios:: binary);
	w.write(reinterpret_cast<char*>(&p), sizeof(p));
	w.close();
}
void RMC2::show(Patient& P)
{
	Patient p;
	RMC2 s;
	P.show();
	cout<<endl;
	fstream r("EHR1.DAT",ios::in|ios::binary);
	r.read(reinterpret_cast<char*>(&s), sizeof(s));
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(p.getName(),P.getName()) == 0)
	{
		s.data();
	}
	r.close();
	r.open("EHR2.DAT", ios::in | ios::binary);
	r.read(reinterpret_cast<char*>(&s), sizeof(s));
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(p.getName(),P.getName()) == 0)
	{
		s.data();
	}
	r.close();
	r.open("EHR3.DAT", ios::in | ios::binary);
	r.read(reinterpret_cast<char*>(&s), sizeof(s));
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(p.getName(),P.getName()) == 0)
	{
		s.data();
	}
	r.close();
	r.open("EHR4.DAT", ios::in | ios::binary);
	r.read(reinterpret_cast<char*>(&s), sizeof(s));
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(p.getName(),P.getName()) == 0)
	{
		s.data();
	}
	r.close();
	r.open("EHR5.DAT", ios::in | ios::binary);
	r.read(reinterpret_cast<char*>(&s), sizeof(s));
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(p.getName(),P.getName()) == 0)
	{
		s.data();
	}
	r.close();
	r.open("EHR6.DAT", ios::in | ios::binary);
	r.read(reinterpret_cast<char*>(&s), sizeof(s));
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(p.getName(),P.getName()) == 0)
	{
		s.data();
	}
	r.close();
	r.open("EHR7.DAT", ios::in | ios::binary);
	r.read(reinterpret_cast<char*>(&s), sizeof(s));
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(p.getName(),P.getName()) == 0)
	{
		s.data();
	}
	r.close();
	r.open("EHR8.DAT", ios::in | ios::binary);
	r.read(reinterpret_cast<char*>(&s), sizeof(s));
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(p.getName(),P.getName()) == 0)
	{
		s.data();
	}
	r.close();
	r.open("EHR9.DAT", ios::in | ios::binary);
	r.read(reinterpret_cast<char*>(&s), sizeof(s));
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(p.getName(),P.getName()) == 0)
	{
		s.data();
	}
	r.close();
	r.open("EHR10.DAT", ios::in | ios::binary);
	r.read(reinterpret_cast<char*>(&s), sizeof(s));
	r.read(reinterpret_cast<char*>(&p), sizeof(p));
	if(strcmp(p.getName(),P.getName()) == 0)
	{
		s.data();
	}




}

void RMC2::defalt(){
	char allergies[30] = "NONE";
	char restrictions[30] = "NONE";
	char chronic[30] = "NONE";
	char medical[30] = "PONSTON";
	char medical2[30] = "OMSANA";
	strcpy(this->allergies,allergies);
	strcpy(this->restrictions,restrictions);
	strcpy(this->chronichealthconditon,chronic);
	strcpy(this->medication1,medical);
	strcpy(this->medication2,medical2);


}
void RMC2::data()
{
	cout<<"Allergies: "<<allergies<<endl;
	cout<<"Restrictions: "<<restrictions<<endl;
	cout<<"Chronic condition: "<<this->chronichealthconditon<<endl;
	cout<<"Medication: "<<medication1<<" and "<<medication2<<endl;

}
void RMC2::EncryptEHR()
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
	fstream write("ENCEHR1.DAT",ios::out | ios:: app | ios::binary);
	fstream read("EHR1.DAT" , ios::in | ios::binary);
	read.read(reinterpret_cast<char*>(&s), sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(allergies,s.getAllergies());
	strcpy(chronic,s.getChronichealthconditon());
	strcpy(medical1,s.getMedication1());
	strcpy(medical2,s.getMedication2());
	strcpy(restrictions,s.getRestrictions());
	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	for(int i = 0; medical1[i] != '\0'; i++)
	{
		medical1[i] += 30;
	}
	for(int i = 0; medical2[i] != '\0'; i++)
	{
		medical2[i] += 30;
	}
	for(int i = 0; chronic[i] != '\0'; i++)
	{
		chronic[i] += 30;
	}
	for(int i = 0; restrictions[i] != '\0'; i++)
	{
		restrictions[i] += 30;
	}	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);
    write.write(reinterpret_cast<char*>(&s1),sizeof(s1));
    write.close();
    read.close();
    read.open("PATIENT1ENCRYPTED.DAT",ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&p),sizeof(p));
    write.write(reinterpret_cast<char*>(&p),sizeof(p));
    read.close();
    write.close();
    write.open("ENCEHR2.DAT", ios::out | ios::app|ios::binary);
    read.read("EHR2.DAT", ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&s),sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(allergies,s.getAllergies());
	strcpy(chronic,s.getChronichealthconditon());
	strcpy(medical1,s.getMedication1());
	strcpy(medical2,s.getMedication2());
	strcpy(restrictions,s.getRestrictions());
	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	for(int i = 0; medical1[i] != '\0'; i++)
	{
		medical1[i] += 30;
	}
	for(int i = 0; medical2[i] != '\0'; i++)
	{
		medical2[i] += 30;
	}
	for(int i = 0; chronic[i] != '\0'; i++)
	{
		chronic[i] += 30;
	}
	for(int i = 0; restrictions[i] != '\0'; i++)
	{
		restrictions[i] += 30;
	}	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);
    write.write(reinterpret_cast<char*>(&s1),sizeof(s1));
    write.close();
    read.close();
    read.open("PATIENT2ENCRYPTED.DAT",ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&p),sizeof(p));
    write.write(reinterpret_cast<char*>(&p),sizeof(p));
    read.close();
    write.close();
    write.open("ENCEHR3.DAT", ios::out | ios::app|ios::binary);
    read.read("EHR3.DAT", ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&s),sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(allergies,s.getAllergies());
	strcpy(chronic,s.getChronichealthconditon());
	strcpy(medical1,s.getMedication1());
	strcpy(medical2,s.getMedication2());
	strcpy(restrictions,s.getRestrictions());
	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	for(int i = 0; medical1[i] != '\0'; i++)
	{
		medical1[i] += 30;
	}
	for(int i = 0; medical2[i] != '\0'; i++)
	{
		medical2[i] += 30;
	}
	for(int i = 0; chronic[i] != '\0'; i++)
	{
		chronic[i] += 30;
	}
	for(int i = 0; restrictions[i] != '\0'; i++)
	{
		restrictions[i] += 30;
	}	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);
    write.write(reinterpret_cast<char*>(&s1),sizeof(s1));
    write.close();
    read.close();
    read.open("PATIENT3ENCRYPTED.DAT",ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&p),sizeof(p));
    write.write(reinterpret_cast<char*>(&p),sizeof(p));
    read.close();
    write.close();
    write.open("ENCEHR4.DAT", ios::out | ios::app|ios::binary);
    read.read("EHR4.DAT", ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&s),sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(allergies,s.getAllergies());
	strcpy(chronic,s.getChronichealthconditon());
	strcpy(medical1,s.getMedication1());
	strcpy(medical2,s.getMedication2());
	strcpy(restrictions,s.getRestrictions());
	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	for(int i = 0; medical1[i] != '\0'; i++)
	{
		medical1[i] += 30;
	}
	for(int i = 0; medical2[i] != '\0'; i++)
	{
		medical2[i] += 30;
	}
	for(int i = 0; chronic[i] != '\0'; i++)
	{
		chronic[i] += 30;
	}
	for(int i = 0; restrictions[i] != '\0'; i++)
	{
		restrictions[i] += 30;
	}	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);
    write.write(reinterpret_cast<char*>(&s1),sizeof(s1));
    write.close();
    read.close();
    read.open("PATIENT4ENCRYPTED.DAT",ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&p),sizeof(p));
    write.write(reinterpret_cast<char*>(&p),sizeof(p));
    read.close();
    write.close();
    write.open("ENCEHR5.DAT", ios::out | ios::app|ios::binary);
    read.read("EHR5.DAT", ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&s),sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(allergies,s.getAllergies());
	strcpy(chronic,s.getChronichealthconditon());
	strcpy(medical1,s.getMedication1());
	strcpy(medical2,s.getMedication2());
	strcpy(restrictions,s.getRestrictions());
	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	for(int i = 0; medical1[i] != '\0'; i++)
	{
		medical1[i] += 30;
	}
	for(int i = 0; medical2[i] != '\0'; i++)
	{
		medical2[i] += 30;
	}
	for(int i = 0; chronic[i] != '\0'; i++)
	{
		chronic[i] += 30;
	}
	for(int i = 0; restrictions[i] != '\0'; i++)
	{
		restrictions[i] += 30;
	}	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);
    write.write(reinterpret_cast<char*>(&s1),sizeof(s1));
    write.close();
    read.close();
    read.open("PATIENT5ENCRYPTED.DAT",ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&p),sizeof(p));
    write.write(reinterpret_cast<char*>(&p),sizeof(p));
    read.close();
    write.close();
    write.open("ENCEHR6.DAT", ios::out | ios::app|ios::binary);
    read.read("EHR6.DAT", ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&s),sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(allergies,s.getAllergies());
	strcpy(chronic,s.getChronichealthconditon());
	strcpy(medical1,s.getMedication1());
	strcpy(medical2,s.getMedication2());
	strcpy(restrictions,s.getRestrictions());
	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	for(int i = 0; medical1[i] != '\0'; i++)
	{
		medical1[i] += 30;
	}
	for(int i = 0; medical2[i] != '\0'; i++)
	{
		medical2[i] += 30;
	}
	for(int i = 0; chronic[i] != '\0'; i++)
	{
		chronic[i] += 30;
	}
	for(int i = 0; restrictions[i] != '\0'; i++)
	{
		restrictions[i] += 30;
	}	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);
    write.write(reinterpret_cast<char*>(&s1),sizeof(s1));
    write.close();
    read.close();
    read.open("PATIENT6ENCRYPTED.DAT",ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&p),sizeof(p));
    write.write(reinterpret_cast<char*>(&p),sizeof(p));
    read.close();
    write.close();
    write.open("ENCEHR7.DAT", ios::out | ios::app|ios::binary);
    read.read("EHR7.DAT", ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&s),sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(allergies,s.getAllergies());
	strcpy(chronic,s.getChronichealthconditon());
	strcpy(medical1,s.getMedication1());
	strcpy(medical2,s.getMedication2());
	strcpy(restrictions,s.getRestrictions());
	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	for(int i = 0; medical1[i] != '\0'; i++)
	{
		medical1[i] += 30;
	}
	for(int i = 0; medical2[i] != '\0'; i++)
	{
		medical2[i] += 30;
	}
	for(int i = 0; chronic[i] != '\0'; i++)
	{
		chronic[i] += 30;
	}
	for(int i = 0; restrictions[i] != '\0'; i++)
	{
		restrictions[i] += 30;
	}	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);
    write.write(reinterpret_cast<char*>(&s1),sizeof(s1));
    write.close();
    read.close();
    read.open("PATIENT7ENCRYPTED.DAT",ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&p),sizeof(p));
    write.write(reinterpret_cast<char*>(&p),sizeof(p));
    read.close();
    write.close();
    write.open("ENCEHR8.DAT", ios::out | ios::app|ios::binary);
    read.read("EHR8.DAT", ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&s),sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(allergies,s.getAllergies());
	strcpy(chronic,s.getChronichealthconditon());
	strcpy(medical1,s.getMedication1());
	strcpy(medical2,s.getMedication2());
	strcpy(restrictions,s.getRestrictions());
	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	for(int i = 0; medical1[i] != '\0'; i++)
	{
		medical1[i] += 30;
	}
	for(int i = 0; medical2[i] != '\0'; i++)
	{
		medical2[i] += 30;
	}
	for(int i = 0; chronic[i] != '\0'; i++)
	{
		chronic[i] += 30;
	}
	for(int i = 0; restrictions[i] != '\0'; i++)
	{
		restrictions[i] += 30;
	}	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);
    write.write(reinterpret_cast<char*>(&s1),sizeof(s1));
    write.close();
    read.close();
    read.open("PATIENT8ENCRYPTED.DAT",ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&p),sizeof(p));
    write.write(reinterpret_cast<char*>(&p),sizeof(p));
    read.close();
    write.close();
    write.open("ENCEHR9.DAT", ios::out | ios::app|ios::binary);
    read.read("EHR9.DAT", ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&s),sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(allergies,s.getAllergies());
	strcpy(chronic,s.getChronichealthconditon());
	strcpy(medical1,s.getMedication1());
	strcpy(medical2,s.getMedication2());
	strcpy(restrictions,s.getRestrictions());
	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	for(int i = 0; medical1[i] != '\0'; i++)
	{
		medical1[i] += 30;
	}
	for(int i = 0; medical2[i] != '\0'; i++)
	{
		medical2[i] += 30;
	}
	for(int i = 0; chronic[i] != '\0'; i++)
	{
		chronic[i] += 30;
	}
	for(int i = 0; restrictions[i] != '\0'; i++)
	{
		restrictions[i] += 30;
	}	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);
    write.write(reinterpret_cast<char*>(&s1),sizeof(s1));
    write.close();
    read.close();
    read.open("PATIENT9ENCRYPTED.DAT",ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&p),sizeof(p));
    write.write(reinterpret_cast<char*>(&p),sizeof(p));
    read.close();
    write.close();
    write.open("ENCEHR10.DAT", ios::out | ios::app|ios::binary);
    read.read("EHR10.DAT", ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&s),sizeof(s));
	read.read(reinterpret_cast<char*>(&p), sizeof(p));
	strcpy(allergies,s.getAllergies());
	strcpy(chronic,s.getChronichealthconditon());
	strcpy(medical1,s.getMedication1());
	strcpy(medical2,s.getMedication2());
	strcpy(restrictions,s.getRestrictions());
	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	for(int i = 0; medical1[i] != '\0'; i++)
	{
		medical1[i] += 30;
	}
	for(int i = 0; medical2[i] != '\0'; i++)
	{
		medical2[i] += 30;
	}
	for(int i = 0; chronic[i] != '\0'; i++)
	{
		chronic[i] += 30;
	}
	for(int i = 0; restrictions[i] != '\0'; i++)
	{
		restrictions[i] += 30;
	}	for(int i = 0; allergies[i] != '\0'; i++)
	{
		allergies[i] += 30;
	}
	s1.Setallergies(allergies);s1.Setchronicalcondition(chronic);s1.Setrestrictions(restrictions);s1.setmedication1(medical1);s1.setmedication2(medical2);
    write.write(reinterpret_cast<char*>(&s1),sizeof(s1));
    write.close();
    read.close();
    read.open("PATIENT10ENCRYPTED.DAT",ios::in | ios::binary);
    read.read(reinterpret_cast<char*>(&p),sizeof(p));
    write.write(reinterpret_cast<char*>(&p),sizeof(p));
    read.close();
    write.close();
}

RMC2::~RMC2() {
	// TODO Auto-generated destructor stub
}

const char* RMC2::getAllergies() const {
return allergies;
}

const char* RMC2::getChronichealthconditon() const {
return chronichealthconditon;
}

const char* RMC2::getMedication1() const {
return medication1;
}

const char* RMC2::getMedication2() const {
return medication2;
}

const char* RMC2::getRestrictions() const {
return restrictions;
}
