#include "Employee.h"

using namespace std;

Employee::Employee(string name, int id_number, int salary_pm) {
    this->name = name;
    this->id = id_number;
    this->salary = salary_pm;
}

int Employee::calculateSalary() {
    return (salary - deductions + benefits);

}

void Employee::trackHours(bool enter) {
    string date = PayrollSystem::CurrentDate();
    int time = PayrollSystem::getCurrentHour();
   ofstream file;
    file.open("Exit&Enter.txt" , ios::app);
    if (file.is_open()) {// در صورت امکان نوشتن در فایل
        if (enter) {//
            // اگر کارمند وارد شده بود
            string msg = name + " " + date +" : enter time : ";
            file << msg << time << endl;
            file << "  ";
            file.close();
            last_enter = time;// ذخیره سازی زمان ورود

        } else {// اگر کارمند خارج شده بود
            string txt;
            txt = name + date + ": exit time :" ;
            file << txt << time << endl;
            file << "  ";

            file.close();
            int dedu = time - last_enter;// محاسبه مقدار زمانی که کار کرده
            if (dedu < 8) {
                int deduction = PayrollSystem::calculateDeductions(this->salary, 8 - dedu);
                deductions += deduction;
                this->trackSalary(PayrollSystem::CurrentDate() , PayrollSystem::getCurrentHour() , deduction , true );
                // اگر کمتر از 8 ساعت کار کرده است
            }else if (dedu > 8) {
                int benefit = PayrollSystem::provideBenefits(this->salary , dedu - 8);
                benefits += benefit ;
                this->trackSalary(PayrollSystem::CurrentDate() , PayrollSystem::getCurrentHour() , benefit , false);}
        }// اگر بیشتر از 8 ساعت کار کرده است
    } else {//اگر امکان نوشتن در فایل نبود به هر دلیلی
        cout << "Unable to open file";
    }
}

void Employee::trackSalary(string date, int time, int mony, bool deduction) {
    ofstream file("Deductions&Bnefits.txt"); //باز کردن فایل

    if (file.is_open()) {// چک کردن باز بودن فایل برای نوشتن در آن

        if (deduction) { // اگر کسورات باشد
            file << name<<"Deductions " << date << " " << mony << " for " << time << "time." << "\n";//Deductions 2024
            file.close();

        } else {// اگر مزایا باشد
            file <<name<< "Benefits " << date << " " << mony << "for " << time << "time." << "\n";
        }

    } else { // اگر امکان نوشتن روی فایل نباشد به هر دلیلی
        cout << "Unable to open file";
    }

}
