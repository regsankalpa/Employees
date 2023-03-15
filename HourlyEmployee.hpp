#ifndef HOURLY_EMPLOYEE_HPP
#define HOURLY_EMPLOYEE_HPP

#include "Employee.h"

class HourlyEmployee: public Employee{
public:
    HourlyEmployee(long = 0, const string & = "", const string & = "", const string & = "", int = 0, double = 0.0, double = 0.0, double = 0.0);  //constructor
    void setHourlyRate(double);
    double getHourlyRate()const;
    void setHoursWorked(double);
    double getHoursWorked() const;
    void setOvertimeHours(double);
    double getOvertimeHours()const;
    double calculateWage() const;
    double calculateOvWage() const;
    void printHourlyEmployee()const;    //print total wage of the employee
    
    
private:
    double HourlyRate;              //hourly pay rate of the employee
    double HoursWorked;             //total hours worked by the employee
    double OvertimeHours;           //total overtime hours worked by employee
};


#endif
