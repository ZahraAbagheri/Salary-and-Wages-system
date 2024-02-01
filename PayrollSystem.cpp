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
    auto now = chrono::system_clock::to_time_t(chrono::system_clock::now());
    stringstream ss;
    ss << put_time(localtime(&now), "%F");
    return ss.str();
}

int PayrollSystem::getCurrentHour() {
    auto now = chrono::system_clock::now();
    time_t now_c = chrono::system_clock::to_time_t(now);
    tm* now_tm = localtime(&now_c);
    return now_tm->tm_hour;

}