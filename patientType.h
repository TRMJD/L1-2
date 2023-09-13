/*'* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
'* Program name    : L1-2                                              *
'*                                                                     *
'* Written by      : Clarence Defiesta, Kenjustin Yabut, Allen Dadia   *
'*                                                                     *
'* Purpose         : create a program that simulates the billing       *
'*                   system of a hospital, including the dates of      *
'*                   admission and discharge of the patient            *
'*                                                                     *
'* Inputs          : patient's ID, first name, last name,              *
'*                   doctor's first name, last name, specialty         *
'* Outputs         : discharge and admission date, room rent fees,     *
'*					pharmacy fees, doctor fees, total of fees. Also	   *
'*					outputs the info of the doctor and patient         *
'* 					                                                   *
'* 					 									               *
'*                                                                     *
'* Calls           : No internal or external calls                     *
'*                                                                     *
'* Structure       : BEGIN                                             *
'*                        Straight line code no sub-processes          *
'*                   STOP                                              *
'*                        End of Program                               *
'*                                                                     *
'*---------------------------------------------------------------------*
'*                                                                     *
'* Collaboration: help from Professor Urrutia						   *
'*				  chatGPT											   *
'*															           *
'*                                                                     *
'*---------------------------------------------------------------------*
'* Change Log:                                                         *
'*                         Revision                                    *
'*       Date    Changed  Rel Ver Mod Purpose                          *
'* 08/24/2023	 adadia   000.000.000 Initial release of program       *
'* 08/24/2023   kyabut   000.000.000 wrote definitions for doctorType.h*
'* 08/25/2023  cdefiest 000.000.000 wrote definitions for patientType.h*
'* 08/25/2023   cdefiest  000.000.000 wrote definitions for dateType.h *
'* 08/26/2023   adadia   000.000.000 wrote definitions for billType.h  *
'* 08/27/2023   kyabut  000.000.000 created main function to display   *
									program                            *
'* 08/27/2023 cdefiest 000.000.000 finished definitions for header files *
'* 08/28/2023 kyabut 000.000.000 troubleshooted with help from gpt     *
'* 08/29/2023 adadia 000.000.000 incorporated random fee values        *
'* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*/
#pragma once
#include <string>
#include <iostream>
#include "personType.h"
#include "doctorType.h"
#include "dateType.h"
#include "billType.h"

using namespace std;

class patientType : public personType
{
public:
	void print() const;

	void setInfo(string id = "", string fName = "", string lName = "",
		int bDay = 1, int bMth = 1, int bYear = 1900,
		string docFrName = "", string docLaName = "", string docSpl = "",
		int admDay = 1, int admMth = 1, int admYear = 1900,
		int disChDay = 1, int disChMth = 1, int disChYear = 1900);

	void setID(string id);
	string getID();

	void setBirthDate(int bDay = 1, int bMth = 1, int bYear = 1900);
	int getBirthDay();
	int getBirthMonth();
	int getBirthYear();
	void setDoctorName(string fName = "", string lName = "");
	void setDoctorSpl(string spl = "");
	string getDoctorFName();
	string getDoctorLName();

	string getDoctorSpl();
	void setAdmDate(int admDay = 1, int admMth = 1, int admYear = 1900);
	int getAdmDay();
	int getAdmMonth();
	int getAdmYear();
	void setDisDate(int disDay = 1, int disMth = 1, int disYear = 1900);
	int getDisDay();
	int getDisMonth();
	int getDisYear();

	patientType(string id = "", string fName = "", string lName = "",
		int bDay = 1, int bMth = 1, int bYear = 1900,
		string docFrName = "", string docLaName = "", string docSpl = "",
		int admDay = 1, int admMth = 1, int admYear = 1900,
		int disChDay = 1, int disChMth = 1, int disChYear = 1900);

private:
	string ID;
	dateType dateOfBirth;
	doctorType attendingPhysician;
	dateType admitDate;
	dateType dischargeDate;
};

void patientType::print() const
{
	cout << "Patient: ";
	personType::print();
	cout << endl;

	cout << "Attending Physician: ";
	attendingPhysician.print();
	cout << endl;

	cout << "Admit Date: ";
	admitDate.printDate();
	cout << endl;
	cout << "Discharge Date: ";
	dischargeDate.printDate();
	cout << endl << endl;
}

//function definition that sets the info
void patientType::setInfo(string id, string fName, string lName,
	int bDay, int bMth, int bYear,
	string docFrName,
	string docLaName, string docSpl,
	int admDay, int admMth, int admYear,
	int disChDay, int disChMth, int disChYear)
{
	ID = id;
	setName(fName, lName);
	dateOfBirth.setDate(bDay, bMth, bYear);
	attendingPhysician.setName(docFrName, docLaName);
	attendingPhysician.setSpeciality(docSpl);
	admitDate.setDate(admDay, admMth, admYear);
	dischargeDate.setDate(disChDay, disChMth, disChYear);
}

//function definition that sets the patient's id
void patientType::setID(string id)
{
	ID = id;
}

//function definition that gets the patient's id
string patientType::getID()
{
	return ID;
}

//function definition that sets the patient's birthdate
void patientType::setBirthDate(int bDay, int bMth, int bYear)
{
	dateOfBirth.setDate(bDay, bMth, bYear);
}

//function definition that gets the patient's birthday
int patientType::getBirthDay()
{
	return dateOfBirth.getDay();
}

//function definition that gets the patient's birth month
int patientType::getBirthMonth()
{
	return dateOfBirth.getMonth();
}

//function definition that gets the patient's birth year
int patientType::getBirthYear()
{
	return dateOfBirth.getYear();
}
//function definition that sets the doctor's name
void patientType::setDoctorName(string fName, string lName)
{
	attendingPhysician.setName(fName, lName);
}
//function definition that sets the doctor's specialty
void patientType::setDoctorSpl(string spl)
{
	attendingPhysician.setSpeciality(spl);
}
//function definition that gets the doctor's first name
string patientType::getDoctorFName()
{
	return attendingPhysician.getFirstName();
}
//function definition that gets the doctor's last name
string patientType::getDoctorLName()
{
	return attendingPhysician.getLastName();
}
//function definition that gets the doctor's specialty
string patientType::getDoctorSpl()
{
	return attendingPhysician.getSpeciality();
}
//function definition that sets the patient's admission date
void patientType::setAdmDate(int admDay, int admMth, int admYear)
{
	admitDate.setDate(admDay, admMth, admYear);
}
//function definition that gets the patient's admission day
int patientType::getAdmDay()
{
	return admitDate.getDay();
}
//function definition that gets the patient's admission month
int patientType::getAdmMonth()
{
	return admitDate.getMonth();
}
//function definition that gets the patient's admission year
int patientType::getAdmYear()
{
	return admitDate.getYear();
}
//function definition that sets the patient's discharge date
void patientType::setDisDate(int disDay, int disMth, int disYear)
{
	dischargeDate.setDate(disDay, disMth, disYear);
}
//function definition that gets the patient's discharge day
int patientType::getDisDay()
{
	return dischargeDate.getDay();
}
//function definition that gets the patient's discharge month
int patientType::getDisMonth()
{
	return dischargeDate.getMonth();
}
//function definition that gets the patient's discharge year
int patientType::getDisYear()
{
	return dischargeDate.getYear();
}
//constructor defintion to initiliaze the class
patientType::patientType(
	string id, string fName, string lName,
	int bDay, int bMth, int bYear,
	string docFrName, string docLaName, string docSpl,
	int admDay, int admMth, int admYear,
	int disChDay, int disChMth, int disChYear)
	: personType(fName, lName),
	dateOfBirth(bDay, bMth, bYear),
	attendingPhysician(docFrName, docLaName, docSpl),
	admitDate(admDay, admMth, admYear),
	dischargeDate(disChDay, disChMth, disChYear)
{
	ID = id;
}