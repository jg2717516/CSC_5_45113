/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joseph
 *
 * Created on June 28, 2018, 8:20 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    double loan, insurance, gas, oil, tires, maintenance;
    double monthlyCost;
    
    cout << "Monthly Car Costs\n";
    
    cout << "Enter loan payment: ";
    cin >> loan;   
    cout << "Enter insurance payment: ";
    cin >> insurance;
    cout << "Enter gas payment: ";
    cin >> gas;
    cout << "Enter oil payment: ";
    cin >> oil;
    cout << "Enter tires payment: ";
    cin >> tires;
    cout << "Enter maintenance payment: ";
    cin >> maintenance; 
    
    monthlyCost = loan + insurance + gas + oil + tires + maintenance;
    
    cout << setprecision(2) << fixed;
    cout << "Total monthly cost: $" << monthlyCost << endl;
    cout << "Total yearly cost: $" << monthlyCost * 12;
    
    return 0;
}

