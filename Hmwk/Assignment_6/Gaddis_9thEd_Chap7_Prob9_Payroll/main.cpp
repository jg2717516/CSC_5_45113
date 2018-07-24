/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: josephgutierrez
 *
 * Created on July 24, 2018, 2:10 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */



int main(int argc, char** argv) {

    const int SIZE = 7;
    int empID[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[SIZE];
    int payRate[SIZE];
    int wages[SIZE];
    
    for (int i = 0; i < SIZE; i++){
        cout << "Enter employee " << empID[i] << " hours: ";
        cin >> hours[i];
        while (hours[i] < 0){
            cout << "Enter employee " << empID[i] << " hours: ";
            cin >> hours[i];            
        }
        cout << "Enter employee " << empID[i] << " pay rate: ";
        cin >> payRate[i];
        while (payRate[i] < 15){
            cout << "Enter employee " << empID[i] << " pay rate: ";
            cin >> payRate[i];
        }
        
        wages[i] = hours[i] * payRate[i];
    }
    
    for (int i = 0; i < SIZE; i++){
        cout << "Employee " << empID[i] << " wage: " << wages[i] << endl;
    }
    
    return 0;
}

