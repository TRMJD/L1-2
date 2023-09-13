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
#include <iomanip>
#include "patientType.h"
#include "personType.h"
#include "doctorType.h"
#include "dateType.h"


using namespace std;

class billType
{
public:
	void printBill() const;

	void setInfo(string id = "", double phCharges = 0, double rRent = 0,
		double docFee = 0);

	void setID(string id); 
	string getID();

	void setPharmacyCharges(double charges = 0);
	double getPharmacyCharges();
	void updatePharmacyCharges(double charges = 0);
	void setRoomRent(double charges = 0);
	double getRoomRent();
	void updateRoomRent(double charges = 0);
	void setDoctorFee(double charges = 0);
	double getDoctorFee();
	void updateDoctorFee(double charges = 0);
	double billingAmount();
	billType(string id = "", double phCharges = 0, double rRent = 0, double docFee = 0);
private:
	string ID;
	double pharmacyCharges;
	double roomRent;
	double doctorFee;
};

//function definition that prints the bill
void billType::printBill() const {
	cout << fixed << showpoint << setprecision(2);
	cout << "Pharmacy Charges: $" << pharmacyCharges << endl;
	cout << "Room Charges: $" << roomRent << endl;
	cout << "Doctor Fees: $" << doctorFee << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Total Charges: $" << pharmacyCharges + roomRent + doctorFee << endl;
}
//function definition that sets the bill charges
void billType::setInfo(string id, double phCharges, double rRent, double docFee) {
	ID = id;
	pharmacyCharges = phCharges;
	roomRent = rRent;
	doctorFee = docFee;
}
//function definition that sets the patient ID
void billType::setID(string id) {
	ID = id;
}
//function definition that gets the patient ID
string billType::getID() {
	return ID;
}
//function definition that sets the patient pharmacy charges
void billType::setPharmacyCharges(double charges) {
	pharmacyCharges = charges;
}
//function definition that gets the patient pharmacy charges
double billType::getPharmacyCharges() {
	return pharmacyCharges;
}
//function definition that updates the patient pharmacy charges
void billType::updatePharmacyCharges(double charges) {
	pharmacyCharges = pharmacyCharges + charges;
}
//function definition that sets the patient room charges
void billType::setRoomRent(double charges) {
	roomRent = charges;
}
//function definition that gets the patient room charges
double billType::getRoomRent() {
	return roomRent;
}
//function definition that updates the patient room charges
void billType::updateRoomRent(double charges) {
	roomRent = roomRent + charges;
}
//function definition that sets the doctor fee
void billType::setDoctorFee(double charges) {
	doctorFee = charges;
}
//function definition that gets the doctor fee
double billType::getDoctorFee() {
	return doctorFee;
}
//function definition that updates the doctor fee
void billType::updateDoctorFee(double charges) {
	doctorFee = doctorFee + charges;
}
//function definition that totals the patient's bill
double billType::billingAmount() {
	return pharmacyCharges + roomRent + doctorFee;
}
//contructor that initializes the class
billType::billType(string id, double phCharges, double rRent, double docFee) {
	ID = id;
	pharmacyCharges = phCharges;
	roomRent = rRent;
	doctorFee = docFee;
}