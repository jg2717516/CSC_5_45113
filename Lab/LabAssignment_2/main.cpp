/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joseph
 *
 * Created on June 29, 2018, 7:11 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double pumpPrice;
    double basePrice;
    double totalTax;
    
    double oilProfitLow = 0.07; // $
    double oilProfitHigh = 0.065; // %
    double fedTax = 0.184; // $
    double stateTax = 0.417; // $
    double salesTax = 0.0225; // %
    
    
    cout << setprecision(2) << fixed;
    cout << "Enter your pump price: $";
    cin >> pumpPrice;
    
    basePrice = -((fedTax - pumpPrice + stateTax)/(salesTax + 1));
    totalTax = fedTax + stateTax + (basePrice * salesTax);
    
    cout << "The base price for a gallon of gas: $" << basePrice << endl;
    cout << "The total tax on a gallon of gas: $" << totalTax << endl;
    cout << "Percentage price due to gas tax: " << (totalTax / basePrice) * 100 << "%\n";
    cout << "Oil Company profit range: " << (oilProfitLow / pumpPrice) * 100 << "% to " << oilProfitHigh * 100 << "%";

    return 0;
}

