#ifndef SALARIED_EMPLOYEE_HPP
#define SALARIED_EMPLOYEE_HPP

#include "Employee.h"

class SalariedEmployee: public Employee{
public:
    SalariedEmployee(long = 0, const string & = "", const string & = "", const string & = "", int = 0, double = 0.0, double = 1.0);  //constructor
    void setmonthlySalary(double);
    double getmonthlySalary()const;
    void setfracHours(double);
    double getfracHours() const;
    double calculateSalary() const;
    void printSalariedEmployee()const;    //print total wage of the employee
    
    
private:
    double monthlySalary;             //total hours worked by the employee
    double fracHours;          //total fraction of hours worked by the employee
};

#endif

