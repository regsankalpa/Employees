#include <iostream>
#include "iomanip"
#include "HourlyEmployee.hpp"


HourlyEmployee::HourlyEmployee(long id, const string &last, const string &first, const string &initial, int dept, double rate, double hours, double ovhours): Employee(id, last, first, initial, dept), HourlyRate(rate), HoursWorked(hours), OvertimeHours(ovhours){} //constructor

void HourlyEmployee::setHourlyRate(double rate){
    HourlyRate = rate;
}

double HourlyEmployee::getHourlyRate() const {
    return HourlyRate;
}

void HourlyEmployee::setHoursWorked(double hours){
    HoursWorked = hours;
}

double HourlyEmployee::getHoursWorked() const {
    return HoursWorked;
}

void HourlyEmployee::setOvertimeHours(double ovhours){
    OvertimeHours = ovhours;
}

double HourlyEmployee::getOvertimeHours() const {
    return OvertimeHours;
}

double HourlyEmployee::calculateWage() const {
    return (HourlyRate*HoursWorked);
}

double HourlyEmployee::calculateOvWage() const {
    return (1.5*OvertimeHours*HourlyRate);
}

void HourlyEmployee::printHourlyEmployee() const {
    cout << endl << "Hourly Employee: " << endl;
    printEmployee();
    cout << " Rate: " << HourlyRate << endl;
    cout << " Hours Worked: " << HoursWorked << endl;
    cout << " Normal Hours Wage: $" << calculateWage() << endl;

    if (OvertimeHours > 0){
        cout << " Overworked Hours: " << OvertimeHours << endl;
        cout << " Overtime Salary: $" << calculateOvWage() << endl;
        cout << " Total Wage including Overtime Hours: $" << calculateOvWage() + calculateWage() << endl;
    }
}
