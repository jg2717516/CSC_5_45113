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

    double score1, score2, score3, score4, score5;
    
    cout << "Enter test score 1: ";
    cin >> score1;
    cout << "Enter test score 2: ";
    cin >> score2;
    cout << "Enter test score 3: ";
    cin >> score3;
    cout << "Enter test score 4: ";
    cin >> score4;
    cout << "Enter test score 5: ";
    cin >> score5;
    
    cout << setprecision(1) << fixed;
    cout << "Average score: " << (score1 + score2 + score3 + score4 + score5) / 5 << "%";
    
    return 0;
}

