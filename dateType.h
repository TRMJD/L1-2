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

class dateType
{
public:
	void setDate(int month, int day, int year);

	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void printDate() const;

	dateType(int month = 4, int day = 2, int year = 2000);

private:
	int dMonth;
	int dDay;
	int dYear;
};

//function definition that sets the date
void dateType::setDate(int month, int day, int year)
{
	dMonth = month;
	dDay = day;
	dYear = year;
}

//function definition thatgets the day
int dateType::getDay() const
{
	return dDay;
}

//function definition that gets the month
int dateType::getMonth() const
{
	return dMonth;
}

//function definition that gets the year
int dateType::getYear() const
{
	return dYear;
}

//function definition that prints out the date
void dateType::printDate() const
{
	cout << dMonth << "-" << dDay << "-" << dYear;
}
//constructor that initializes the class
dateType::dateType(int month, int day, int year)
{
	dMonth = month;
	dDay = day;
	dYear = year;
}


