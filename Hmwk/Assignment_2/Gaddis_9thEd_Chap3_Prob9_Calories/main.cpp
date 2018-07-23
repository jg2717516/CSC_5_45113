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

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    double cookies = 30, servings = 10, servingCal = 300;
    double cookiesEaten;
    
    cout << "How many cookies did you eat? ";
    cin >> cookiesEaten;
    
    cout << "Total calories consumed: " << (servingCal / (cookies / servings)) * cookiesEaten;
    
    return 0;
}

