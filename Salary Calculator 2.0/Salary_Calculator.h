//Header file created to contain var8iables and clean up code.
#pragma once
#include <iostream>
#include <string>

/*Initializing variables used for wage calculations, including variables for pay cycle frequency(weekly / biweekly) to better calculate
user's wages for week/month/year. */
double hoursWorkedWeek, overtimeHours, hourlyWage, weeklyWage, biweeklyWage, monthlyWage, annualWage;
bool weeklyPay = false;
bool biweeklyPay = false;
bool isValidPayCycleChoice = false;
int payCycleChoice = 0;

//Overtime variables to calulate user's overtime totals and wages for week/month/year.
double overtimeHourlyWage, overtimeTotalWeek, overtimeTotalBiweekly, overtimeTotalMonth, overtimeTotalAnnual, weeklyWageOT, biweeklyWageOT, monthlyWageOT, annualWageOT;
const double overtimeMultiplier = 1.5;

/*Initializing variables for tax rates to use in calculation estimations for user, as well as variables for taxes taken out
of wages every week/month/year. */
double incomeTax, stateTax, socialSecurityTax, medicareTax, wageTax, weeklyTax, biweeklyTax, monthlyTax, annualTax;

//Declaring and initializing variables for deductions to calculate user's wages with deductions removed.
bool wageDeduction, deductionLoop, preTaxDeductionLoop;
int deductionChoice, preTaxDeductionChoice;
double deductionAmount, preTaxDeduction, preTaxMonthly, preTaxAnnual;

//Initializing variables for take home calculations.
double weeklyTakeHome, biweeklyTakeHome, monthlyTakeHome, annualTakeHome;

//Declaring and initializing variables to handle deduction calculations on take home pay.
double weeklyTakeHomeDeduction, monthlyTakeHomeDeduction, annualTakeHomeDeduction, monthlyDeduction, annualDeduction;

//Declaring and initializing variable to handle state selection for state tax calculation.
int selectedStateIndex;
std::string state;