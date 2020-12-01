// employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using std::string;

namespace SavitchEmployees
{
    class Employee {
    private:
        string name;
        string ssn;
        double netPay;
    public:
        Employee();
        Employee(string theName, string theSsn);
        string get_name() const;
        string get_ssn() const;
        double get_netPay() const;
        void set_name(string newName);
        void set_ssn(string newSsn);
        void set_netPay(double newNetPay);
//       void print_check() const;
        virtual void print_check();
        void f();
    };
}// SavitchEmployees

#endif // EMPLOYEE_H
