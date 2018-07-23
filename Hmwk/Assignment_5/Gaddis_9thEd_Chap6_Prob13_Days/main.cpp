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

using namespace std;

/*
 * 
 */

int numEmployees();
int daysMissed(int);
double avgDaysAbsent(int, int);

int main(int argc, char** argv) {

    int empl = numEmployees();
    int mssd = daysMissed(empl);
    
    cout << "Average numbers of days missed: " << avgDaysAbsent(empl, mssd);
    
    return 0;
}

int numEmployees(){
    int num;
    
    cout << "Enter number of employees in company: ";
    cin >> num;
    
    while (num < 1){
        cout << "Enter number of employees in company: ";
        cin >> num;
    }
    
    return num;
}

int daysMissed(int emply){
    
    int days, count = 0;
    
    for (int i = 1; i <= emply; i++){
        cout << "Enter number of days missed for employee " << i << ": ";
        cin >> days;
        
        while (days < 0){
            cout << "Enter number of days missed for employee " << i << ": ";
            cin >> days;
        }
        
        count = count + days;
    }
    
    return count;
}

double avgDaysAbsent(int emply, int days){
    double dysAbs;
    return (double)days /(double) emply;
}