#include "EmployeeRecordManager.h"
#include <iostream>
#include <fstream>

using namespace std;

void EmployeeRecordManager::manageEmployeeTimeRecords(string name){

    ifstream file("Exit&Enter.txt");
    if (file.is_open()) {
                string line;
                while (getline(file, line)) {
                        if (line.find(name) != string::npos) {
                                cout << line << endl;
                    }}
                file.close();
            } else {
                cout << "Unable to open file." << endl;
        }
}
