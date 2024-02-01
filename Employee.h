#include "PayrollSystem.h"
#include <iostream>
#include <string>
#include <fstream>

namespace std {

    class Employee {
    public:
        // variables
        string name;
        int id;     // شماره کارمندی هر کارمند
        int salary;     // حقوق هر کارمند در ازای هر ماه کار
        int deductions = 0; // مقدار حقوقی که از هر کارمند باید در ماه کسز شود
        int benefits = 0; // مقدار حقوقی که به هر کارمند باید اضافه شود
        int last_enter; // اخرین ساعت ورود

        //constructor
        Employee(string name, int id_number, int salary_pm);

        //تابع محاسبه حقوق که با استفاده از متغیرهای تعریف شده در کلاس حقوق هر کارمند را محاسبه میکند
        int calculateSalary();

        // تابع ذخیره سازی کسورات و مزایا با تاریخ، زمان، مقدار پول و مقدار ساعت
        void trackSalary(string date, int time, int mony, bool deduction);

        // ذخیره ساعات کاری ، در صورت کمتر یا بیشتر بودن تایم کار کردن از 8 ساعت صدا زدن توایع محاسبه مزایا و کسورات
        void trackHours(bool enter);

    };
}