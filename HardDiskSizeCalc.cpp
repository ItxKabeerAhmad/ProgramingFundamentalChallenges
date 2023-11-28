#include<iostream>
#include<iomanip>
using namespace std;
const double SIZEBYMANUFACTRURE_INBYTES = 1000*1000*1000;
const double ACTUALSIZE_INBYTES = 1024 * 1024 * 1024;
int main() {
    double sizeByManufacturer,actualStorage,difference;
    cout<<"ENTER THE MANUFACTURER SIZE OF HARD DISK: ";
    cin>>sizeByManufacturer;
    difference = ((sizeByManufacturer * ACTUALSIZE_INBYTES) - (sizeByManufacturer * SIZEBYMANUFACTRURE_INBYTES))/ACTUALSIZE_INBYTES;
    actualStorage = sizeByManufacturer - difference;
    cout<<fixed<<setprecision(2)<<"THE ACTUAL SIZE OF HARD DISK IS "<<actualStorage<<"GB";
    return 0;
}