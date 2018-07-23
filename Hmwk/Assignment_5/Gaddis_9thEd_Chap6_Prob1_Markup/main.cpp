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
#include <iomanip>

using namespace std;

/*
 * 
 */

float calculateRetail(float, float);

int main(int argc, char** argv) {

    float cost, mrkup;
    
    cout << "Enter wholesale cost: $";
    cin >> cost;
    cout << "Enter markup percentage: ";
    cin >> mrkup;
    
    mrkup /= 100;
    
    cout << setprecision(2) << fixed;
    cout << "Retail price: $" << calculateRetail(cost, mrkup);
    
    return 0;
}

float calculateRetail(float cst, float mrk){
    return cst + (cst * mrk);
}

