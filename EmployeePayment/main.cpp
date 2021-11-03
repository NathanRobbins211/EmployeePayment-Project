//**************************************************
//Programmer: Nathan Robbins
//**************************************************
/*
	COMPANY Employee payroll calculator.
	Enter a menu option of either Input Employee information, View Employee Information, or Exit Program.
	Uses classes for calculation and data storage.
*/
//**************************************************

//Pre-Compiler directives
#include <iostream>
#include <iomanip>
#include <string>
#include "clsEmployee.h"

using namespace std;

int main()
{
	//Console Settings
	system("color 1F");
	system("title Employee Payment - COMPANY");

	// Declare variables
	enum MenuChoice
	{
		//Menu choices
		EnterData = '1',
		ViewData = '2',
		Exit = '3'
	};

	char chMenuChoice = ' ';

	int intID = 0;
	string strFullName = "";
	double dblHourlyRate = 0;
	double dblHourseWorked = 0;
	double dblCommissionRate = 0;
	double dblWeeklySales = 0;

	clsEmployee EmployeeOne(0, "", 0, 0, 0, 0);

	do
	{
		// Display Menu
		system("cls");
		cout << setfill(' ') << setw(65) << "COMPANY" << endl;
		cout << setfill('-') << setw(120) << " " << endl;
		cout << setfill(' ') << "1) Enter employee data" << endl;
		cout << setfill(' ') << "2) View employee paycheck information" << endl;
		cout << setfill(' ') << "3) Exit Program" << endl << endl;

		cout << setfill(' ') << "Choice: ";
		cin >> chMenuChoice;

		// User input = 1
		switch (chMenuChoice)
		{
		case EnterData:
			system("cls");

			system("cls");
			cout << setfill(' ') << setw(65) << "ENTER EMPLOYEE INFORMATION" << endl;
			cout << setfill('-') << setw(120) << " " << endl;

			cout << setfill(' ') << "Employee ID: ";
			cin >> intID;
			while (intID < 0)
			{
				cout << "\n\tError: Invalid input. Retry: " << endl;
				cin >> intID;
			}
			EmployeeOne.setID(intID);

			cout << setfill(' ') << "Employee Full Name (Provide *Space*): ";
			cin.ignore();
			getline(cin, strFullName);

			EmployeeOne.setName(strFullName);

			cout << setfill(' ') << "Employee Hourly Rate: ";
			cin >> dblHourlyRate;
			while (dblHourlyRate < 0)
			{
				cout << "\n\tError: Invalid input. Retry: " << endl;
				cin >> dblHourlyRate;
			}
			EmployeeOne.setHourlyRate(dblHourlyRate);

			cout << setfill(' ') << "Employee Hours Worked: ";
			cin >> dblHourseWorked;
			while (dblHourseWorked < 0)
			{
				cout << "\n\tError: Invalid input. Retry: " << endl;
				cin >> dblHourseWorked;
			}
			EmployeeOne.setHoursWorked(dblHourseWorked);

			cout << setfill(' ') << "Employee Commission Rate: ";
			cin >> dblCommissionRate;
			while (dblCommissionRate < 0)
			{
				cout << "\n\tError: Invalid input. Retry: " << endl;
				cin >> dblCommissionRate;
			}
			EmployeeOne.setCommissionRate(dblCommissionRate);

			cout << setfill(' ') << "Employee Weekly Sales: ";
			cin >> dblWeeklySales;
			while (dblWeeklySales < 0)
			{
				cout << "\n\tError: Invalid input. Retry: " << endl;
				cin >> dblWeeklySales;
			}
			EmployeeOne.setWeeklySales(dblWeeklySales);

			//Call calculation functions
			EmployeeOne.calcPay(dblHourlyRate, dblHourseWorked, dblWeeklySales, dblCommissionRate);

			break;

			// User input = 2
		case ViewData:
			system("cls");

			system("cls");
			cout << setfill(' ') << setw(65) << "EMPLOYEE INFORMATION" << endl;
			cout << setfill('-') << setw(120) << " " << endl;

			cout << setfill(' ') << "Employee ID: " << EmployeeOne.getID() << endl << endl;

			cout << setfill(' ') << "Employee Full Name: " << EmployeeOne.getName() << endl << endl;

			cout << setfill(' ') << setprecision(2) << fixed << "Employee Hourly Rate: $" << EmployeeOne.getHourlyRate() << endl << endl;

			cout << setfill(' ') << setprecision(2) << fixed << "Employee Hours Worked: " << EmployeeOne.getHoursWorked() << endl << endl;

			cout << setfill(' ') << setprecision(2) << fixed << "Employee Commission Rate: $" << EmployeeOne.getCommissionRate() << endl << endl;

			cout << setfill(' ') << setprecision(2) << fixed << "Employee Weekly Sales: " << EmployeeOne.getWeeklySales() << endl << endl;

			cout << setfill(' ') << setprecision(2) << fixed << "Net Pay: $" << EmployeeOne.getNetPay() << endl << endl;

			cout << setfill(' ') << setprecision(2) << fixed << "Gross Pay: $" << EmployeeOne.getGrossPay() << endl << endl;

			system("pause");

			break;

			// User input = 3
		case Exit:
			system("cls");
			return 0;
			break;



			// User input is undefined
		default:
			system("cls");
			cout << "\n\t*** Not a Valid Menu Selection ***" << endl;
			system("pause");
			chMenuChoice = ' ';
			break;
		}
	} while (chMenuChoice != Exit);

	system("pause");

	return 0;
}