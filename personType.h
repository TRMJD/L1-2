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
using namespace std;




class personType
{
public:
	void print() const;
	//Function to output the first name and last name
	//in the form firstName lastName.
	void setName(string first, string last);
	//Function to set firstName and lastName according
	//to the parameters.
	//Postcondition: firstName = first; lastName = last
	string getFirstName() const;
	//Function to return the first name.
	//Postcondition: The value of the data member firstName
	// is returned.
	string getLastName() const;
	//Function to return the last name.
	//Postcondition: The value of the data member lastName
	// is returned.
	personType(string first = "", string last = "");
	//constructor
	//Sets firstName and lastName according to the parameters.
	//The default values of the parameters are empty strings.
	//Postcondition: firstName = first; lastName = last

	string firstName; //variable to store the first name
	string lastName; //variable to store the last name
};
void personType::print() const
{
	cout << firstName << " " << lastName;
}
void personType::setName(string first, string last)
{
	firstName = first;
	lastName = last;
}
string personType::getFirstName() const
{
	return firstName;
}
string personType::getLastName() const
{
	return lastName;
}
//constructor
personType::personType(string first, string last)
{
	firstName = first;
	lastName = last;
}