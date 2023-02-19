//Header file created to contain var8iables and clean up code.
#pragma once
#define Salary_Calculator



//Initializing variables used for wage calculations.
//Hours.
double hoursWorkedWeek, overtimeHours;

//Wage vairables (hour/week/month/year).
double hourlyWage, weeklyWage, biweeklyWage, monthlyWage, annualWage;

//Overtime variables.
double overtimeHourlyWage, overtimeTotalWeek, overtimeTotalBiweekly, overtimeTotalMonth, overtimeTotalAnnual;
double weeklyWageOT, biweeklyWageOT, monthlyWageOT, annualWageOT;
double overtimeMulti = 1.5;

//Initializing variables for tax rates.
//CHANGE THESE WHEN FUNCTIONALITY TO DETERMINE TAX RATES BASED ON ANNUAL INCOME IS ADDED!
double incomeTax, stateTax, socialSecurityTax, medicareTax;

//Initializing wageTax variable for tax calculations.
double wageTax, weeklyTax, biweeklyTax, monthlyTax, annualTax;

//Initializing variables for pay frequency determination.
bool weeklyPay = false;
bool biweeklyPay = false;
bool switchLoop = false;
int payCycle = 0;

//Initializing variables for take home calculations.
double weeklyTakeHome, biweeklyTakeHome, monthlyTakeHome, annualTakeHome;

//Declaring and initializing variables for deductions.
bool wageDeduction, deductionLoop, pretaxDedLoop;
int deductionChoice, pretaxDedChoice;
double deductions, pretaxDeductions, pretaxMDeductions, pretaxADeductions;

//Declaring and initializing variables to handle deduction calculations on take home pay.
double wTakeHomeDeduct, mTakeHomeDeduct, aTakeHomeDeduct, mDeductions, aDeductions;

class stateSelection {
public:
	void stateSelect();
};