#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double num1,num2,num3,num4,num5;
    int sum;
    cout<<"ENTER 5 INTEGERS: ";
    cin>>num1>>num2>>num3>>num4>>num5;
    sum = num1+num2+num3+num4+num5;
    sum = round(sum);
    cout<<"SUM = "<<sum<<" IS ALSO THE NEAREST INTEGER";
    return 0;
}