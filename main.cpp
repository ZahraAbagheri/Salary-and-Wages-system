#include <string>
#include "Employee.h"
#include "PayrollSystem.h"
#include "EmployeeRecordManager.h"
#include "ReportGenerator.h"

using namespace std;


int main() {
    Employee emp("John", 123, 5000.0);
    //cout << emp.name << endl;
    emp.trackHours(true);
    ReportGenerator reportGenerator;
    reportGenerator.generateTimeReport();
    EmployeeRecordManager manager;
    manager.manageEmployeeTimeRecords(emp.name);
    return 0;
}

