#include "ReportGenerator.h"
using namespace std;

void ReportGenerator::generateDBReport() {
    string myText;
    ifstream MyReadFile("Deductions&Bnefits.txt");

    while (getline (MyReadFile, myText)) {
        cout << myText;
    }

    MyReadFile.close();
}

void ReportGenerator::generateTimeReport() {
    string myText;
    ifstream MyReadFile("Exit&Enter.txt");

    while (getline (MyReadFile, myText)) {
        cout << myText;
    }

    MyReadFile.close();
}