#ifndef CLSEMPLOYEE_H
#define CLSEMPLOYEE_H

#include<iostream>
#include<string>

using namespace std;

class clsEmployee
{
private:
	int _intEmployeeID = 0;
	string _strFullName = "";
	double	_dblHourlyRate = 0;
	double _dblHoursWorked = 0;
	double _dblCommissionRate = 0;
	double _dblWeeklySales = 0;
	double _dblNetPay = 0;
	double _dblGrossPay = 0;

	double calcCommission();

public:
	// Declare clsEmployee CONSTRUCTOR
	clsEmployee(int intID, string strName, double dblHourlyRate, double dblHoursWorked, double dblCommissionRate, double dblWeeklySales);

	// Declare clsEmployee GETTERS
	int getID();
	string getName();
	double getHourlyRate();
	double getHoursWorked();
	double getCommissionRate();
	double getWeeklySales();
	double getNetPay();
	double getGrossPay();

	// Declare clsEmployee SETTERS
	void setID(int intNewID);
	void setName(string strNewName);
	void setHourlyRate(double dblNewHourlyRate);
	void setHoursWorked(double dblNewHoursWorked);
	void setCommissionRate(double dblNewCommission);
	void setWeeklySales(double dblNewWeeklySales);
	void setNetPay(double dblNewNetPay);
	void setGrossPay(double dblNewGrossPay);

	// Declare clsEmployee Functions
	void calcPay(double dblHourlyRate, double dblHoursWorked, double dblWeeklySales, double dblCommissionRate);
};

#endif // !Employee
