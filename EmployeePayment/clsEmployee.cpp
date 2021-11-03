#include "clsEmployee.h"

// Define clsEmployee FUNCTIONS

double clsEmployee::calcCommission()
{
	//Declare local variables
	double dblCommissionAmount = 0;

	//Perform Calculation then return
	dblCommissionAmount = getWeeklySales() * getCommissionRate();


	return dblCommissionAmount;
};

void clsEmployee::calcPay(double dblHourlyRate, double dblHoursWorked, double dblWeeklySales, double dblCommissionRate)
{
	//Declare local variables
	double dblNetPay = 0;
	double dblGrossPay = 0;

	//Perform Calculations, then update (setters), then return
	dblNetPay = getHourlyRate() * getHoursWorked();
	setNetPay(dblNetPay);

	dblGrossPay = getNetPay() + calcCommission();
	setGrossPay(dblGrossPay);
	return;
};

// Define clsEmployee CONSTRUCTOR
clsEmployee::clsEmployee(int intID, string strName, double dblHourlyRate, double dblHoursWorked, double dblCommissionRate, double dblWeeklySales)
{


	return;
};

// Define clsEmployee GETTERS
int clsEmployee::getID()
{
	return _intEmployeeID;
}
string clsEmployee::getName()
{
	return _strFullName;
}
double clsEmployee::getHourlyRate()
{
	return _dblHourlyRate;
}
double clsEmployee::getHoursWorked()
{
	return _dblHoursWorked;
}
double clsEmployee::getCommissionRate()
{
	return _dblCommissionRate;
}
double clsEmployee::getWeeklySales()
{
	return _dblWeeklySales;
}
double clsEmployee::getNetPay()
{
	return _dblNetPay;
}
double clsEmployee::getGrossPay()
{
	return _dblGrossPay;
}

// Define clsEmployee SETTERS
void clsEmployee::setID(int intNewID)
{
	_intEmployeeID = intNewID;
	return;
}
void clsEmployee::setName(string strNewName)
{
	_strFullName = strNewName;
	return;
}
void clsEmployee::setHourlyRate(double dblNewHourlyRate)
{
	_dblHourlyRate = dblNewHourlyRate;
	return;
}
void clsEmployee::setHoursWorked(double dblNewHoursWorked)
{
	_dblHoursWorked = dblNewHoursWorked;
	return;
}
void clsEmployee::setCommissionRate(double dblNewCommission)
{
	_dblCommissionRate = dblNewCommission;
	return;
}
void clsEmployee::setWeeklySales(double dblNewWeeklySales)
{
	_dblWeeklySales = dblNewWeeklySales;
	return;
}
void clsEmployee::setNetPay(double dblNewNetPay)
{
	//Perform Calculation then update and return

	_dblNetPay = dblNewNetPay;
	return;
}
void clsEmployee::setGrossPay(double dblNewGrossPay)
{
	//Perform Calculation then update and return

	_dblGrossPay = dblNewGrossPay;
	return;
}