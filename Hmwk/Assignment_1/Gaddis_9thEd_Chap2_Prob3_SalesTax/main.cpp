/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joseph
 *
 * Created on June 24, 2018, 2:53 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float purchase = 95;
    float stateTax = 0.04;
    float countyTax = 0.02;
    
    float totalTax = stateTax + countyTax;
    
    cout << purchase * totalTax;
}

