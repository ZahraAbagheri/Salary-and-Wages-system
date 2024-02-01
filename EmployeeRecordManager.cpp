#include "EmployeeRecordManager.h"
#include <iostream>
#include <fstream>

using namespace std;

void EmployeeRecordManager::manageEmployeeTimeRecords(string name) {
    string myText;
    ifstream MyReadFile("Exit&Enter.txt");

    while (getline (MyReadFile, myText)) {
        if (myText.find(name)!= false){
            cout<<myText;
        }
    }

    MyReadFile.close();

}
