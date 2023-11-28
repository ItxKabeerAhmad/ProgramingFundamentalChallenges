#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int hours,minutes,seconds,ElapsedTime;
    cout<<"ENTER ELAPSED TIME: ";
    cin>>ElapsedTime;
    hours = ElapsedTime/3600;
    minutes = (ElapsedTime%3600)/60;
    seconds = (ElapsedTime%3600)%60;
    cout<<""<<hours<<":"<<minutes<<":"<<seconds;
    return 0;
}