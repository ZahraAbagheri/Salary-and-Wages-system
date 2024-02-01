
#include <string>
#include <iostream>
#include <chrono>
#include <ctime>
#include <fstream>
#include <iomanip>

using namespace std;

class ReportGenerator {
public:
    void generateTimeReport();//نوشتن کل لاگ های ورود و خروج در خروجی

    void generateDBReport(); //نوشتن تمام لاگ های کسورات و مزایا
};


