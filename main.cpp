#include <string>
#include "Employee.h"
#include "PayrollSystem.h"
#include "EmployeeRecordManager.h"
#include "ReportGenerator.h"

using namespace std;


int main() {
    Employee emp("John", 123, 5000);
    emp.trackHours(true);
    
    ReportGenerator reporter;
    reporter.generateTimeReport();
    reporter.generateDBReport();
    
    Employee emp1("Zahra" , 12344 , 10000);
    emp1.trackHours(true);
    
    emp.trackHours(false);

    EmployeeRecordManager empRecoManage;
    empRecoManage.manageEmployeeTimeRecords("John");
    return 0;
}

