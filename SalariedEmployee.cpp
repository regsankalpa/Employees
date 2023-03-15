#include <iostream>
#include "iomanip"
#include "SalariedEmployee.hpp"

SalariedEmployee::SalariedEmployee(long id, const string &last, const string &first, const string &initial, int dept, double sal, double frachrs): Employee(id, last, first, initial, dept), monthlySalary(sal), fracHours(frachrs){} //constructor

void SalariedEmployee::setmonthlySalary(double sal){
    monthlySalary = sal;
}

double SalariedEmployee::getmonthlySalary() const {
    return monthlySalary;
}

void SalariedEmployee::setfracHours(double frachrs){
    fracHours = frachrs;
}

double SalariedEmployee::getfracHours() const {
    return fracHours;
}

double SalariedEmployee::calculateSalary() const{
    return monthlySalary*fracHours;
}

void SalariedEmployee::printSalariedEmployee() const {
    cout << endl;
    cout << "Salaried Employee: " << endl;
    printEmployee();
    cout << " Monthly Salary: $" << monthlySalary << endl;
    cout << " Fraction of Hours Worked: " << fracHours << endl;
    cout << " Total Monthly Salary: $" << calculateSalary() << endl;
}
