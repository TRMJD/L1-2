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
#include <iostream>
#include <string>
#include "patientType.h"
#include "personType.h"
#include "billType.h"
#include "dateType.h"
#include "doctorType.h"


using namespace std;

int main() {
	cout << "Clarence Defiesta Kenjustin Yabut Allen Dadia\t" << "L1_2 \t" << "L1-2.exe" << endl << endl;
	patientType newPatient;
	billType bill;
	string firstName, lastName, specialty, id;

	//enter patient ID
	cout << "Enter patient's ID: ";
	cin >> id;
	cout << endl;

	//patient first name
	cout << "Enter patient's first name: ";
	cin >> firstName;
	cout << endl;

	//patient last name
	cout << "Enter patient's last name: ";
	cin >> lastName;
	cout << endl;


	newPatient.setID(id);
	bill.setID(id);
	newPatient.setName(firstName, lastName);

	//enter doctor first name
	cout << "Enter doctor's first name: ";
	cin >> firstName;
	cout << endl;

	//enter doctor last name
	cout << "Enter doctor's last name: ";
	cin >> lastName;
	cout << endl;

	//enter doctor's speciality
	newPatient.setDoctorName(firstName, lastName);
	cout << "Enter doctor's specialty: ";
	cin >> specialty;
	cout << endl;

	newPatient.setDoctorSpl(specialty);

	newPatient.setAdmDate(4, 20, 1999);
	newPatient.setDisDate(6, 5, 2023);

	//set fees to random numbers
	bill.setPharmacyCharges(rand());
	bill.setRoomRent(rand());
	bill.setDoctorFee(rand());

	newPatient.print();
	bill.printBill();

	return 0;
}