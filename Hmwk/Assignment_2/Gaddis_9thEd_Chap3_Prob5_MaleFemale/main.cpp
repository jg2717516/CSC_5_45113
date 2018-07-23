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
    
    double males, females, totalStudents;
    
    cout << "Enter the number of males in the class: ";
    cin >> males;
    cout << "Enter the number of females in the class: ";
    cin >> females;
    
    totalStudents = males + females;
    
    cout << "Percentage of males: " << (males / totalStudents) * 100 << "%\n";
    cout << "Percentage of females: " << (females / totalStudents) * 100 << "%";

    return 0;
}

