/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "Employee.h"
#include "SalariedEmployee.hpp"
#include "HourlyEmployee.hpp"

using namespace std;

int main() 
{
    Employee
    e1 (001, "Jones", "Booker", "T", 22),
    e2 (002, "Hendrix", "Jimi", "NMI ", 14),
    e3 (003, "Morrison", "Jim", "D", 03);
  
    e1.printEmployee();
    e2.printEmployee();
    
    HourlyEmployee
    he1 (9001, "Jasmine", "Marquez", "Cr", 1, 10, 20, 0),
    he2 (9002, "Jennifer", "Ortega", "Ar", 2, 15, 20, 10);
    
    he1.printHourlyEmployee();
    he2.printHourlyEmployee();
    
    
    SalariedEmployee
    se1 (9003, "Randy", "Orton", "Jr", 3, 5000, 1),
    se2 (9004, "Sunny", "Tyson", "Sr", 4,  6000, 0.5);
    
    se1.printSalariedEmployee();
    se2.printSalariedEmployee();
}
