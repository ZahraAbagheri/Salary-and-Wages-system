#include "PayrollSystem.h"

using namespace std;

//void PayrollSystem::registerEntryExit(Employee emp, bool isEntry) {
//    if (isEntry) {// درصورت وارد شدن کارمند
//        emp.trackHours(CurrentDate() ,getCurrentHour()  , true);
//    } else { // در صورت خارج شدن کارمند
//        emp.trackHours(CurrentDate(),getCurrentHour() , false);
//    }
//}

int PayrollSystem::calculateDeductions(int salary, int ded_time) {
    // Calculate deductions
     return (salary / 208) * ded_time;
}

int PayrollSystem::provideBenefits(int salary, int benefit_time) {
    // Provide benefits
    return (salary / 208) * benefit_time;
}

string PayrollSystem::CurrentDate() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string date = to_string(1900 + ltm->tm_year) + "-" + to_string(1 + ltm->tm_mon) + "-" + to_string(ltm->tm_mday);
    return date;
}

int PayrollSystem::getCurrentHour() {
    auto now = chrono::system_clock::now();
    time_t now_c = chrono::system_clock::to_time_t(now);
    tm* now_tm = localtime(&now_c);
    return now_tm->tm_hour;

}
