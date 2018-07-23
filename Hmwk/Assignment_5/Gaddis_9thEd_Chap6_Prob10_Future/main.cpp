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

float futureValue(float, float, float);

int main(int argc, char** argv) {

    float prsnt, rate, mnths;
    cout << "Enter present value: $";
    cin >> prsnt;
    cout << "Enter interest rate: ";
    cin >> rate;
    cout << "Enter number of months: ";
    cin >> mnths;
    
    rate /= 100;
    
    cout << endl << "$" << futureValue(prsnt, rate, mnths) << endl;
    
    return 0;
}

float futureValue(float p, float i, float t){
    return p * pow(1 + i, t);
}