/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: josephgutierrez
 *
 * Created on July 22, 2018, 1:37 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */

float presentValue(float, float, float);

int main(int argc, char** argv) {

    float ftr, rate, years;
    cout << "Enter future value: $";
    cin >> ftr;
    cout << "Enter interest rate: ";
    cin >> rate;
    cout << "Enter number of years: ";
    cin >> years;
    
    rate /= 100;
    
    cout << endl << "$" << presentValue(ftr, rate, years) << endl;
    
    return 0;
}

float presentValue(float f, float r, float n){
    return f/(pow(1 + r, n));
}