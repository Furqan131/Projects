#include<iostream>
using namespace std;
double calculateNetPay(double hoursWorked, double hourlyRate, double taxRate){
    double grossPay = hoursWorked * hourlyRate;
    double taxDeduction = grossPay * taxRate;
    double netPay = grossPay - taxDeduction;
    return netPay;
}
int main(){
    int numEmployees;
    cout<<"Enter the number of employees: ";
    cin>>numEmployees;

    for(int i = 1; i <= numEmployees; i++){
        double hoursWorked, hourlyRate, taxRate;

        cout<<"\nEmployee "<<i<<endl;
        cout<<"Enter hours worked: ";
        cin>>hoursWorked;
        cout<<"Enter hourly rate: ";
        cin>>hourlyRate;
        cout<<"Enter tax rate(as a decimal): ";
        cin>>taxRate;

        double netPay = calculateNetPay(hoursWorked, hourlyRate, taxRate);
        cout<<"Net pay for Employee "<<i<<": PKR"<<netPay<<endl;
    }
    return 0;
}
