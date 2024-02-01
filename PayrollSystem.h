#ifndef MYPROJECT_PAYROLLSYSTEM_H
#define MYPROJECT_PAYROLLSYSTEM_H
#include <string>
#include <iostream>
#include <chrono>
#include <ctime>
#include <fstream>
#include <iomanip>

using namespace std;

class PayrollSystem {
public:

    // محاسبه کسورات
    int static calculateDeductions(int salary , int ded_time);

    // محاسبه مزایا
    int static provideBenefits(int salary , int benefit_time);

    // تابع بدست اوردن تاریخ برای سوابق کارمندان
    string static CurrentDate();

    // تابع بدست اوردن ساعت برای سوابق کارمندان
    int static getCurrentHour();
};


#endif //MYPROJECT_PAYROLLSYSTEM_H
