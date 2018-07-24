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

double totalRainfall(double [], int);
double averageRainfall(double [], int);
double lowestRainfall(double [], int);
double highestRainfall(double [], int);

int main(int argc, char** argv) {

    const int SIZE = 12;
    double rain[SIZE];
    
    for (int i = 0; i < SIZE; i++){
        cout << "Enter rainfall for month " << i + 1 << " in inches: ";
        cin >> rain[i];
        while (rain[i] < 0){
            cout << "Enter rainfall for month " << i + 1 << " in inches: ";
            cin >> rain[i];
        }
    }
    
    cout << "Total rainfall for the year: " << totalRainfall(rain, SIZE) << endl;
    cout << "Average rainfall for the year: " << averageRainfall(rain, SIZE) << endl;
    cout << "Lowest rainfall for the year: " << lowestRainfall(rain, SIZE) << endl;
    cout << "Highest rainfall for the year: " << highestRainfall(rain, SIZE) << endl;
    
    return 0;
}

double totalRainfall(double rain[], int size){
    double total = 0;
    for (int i = 0; i < size; i++){
        total += rain[i];
    }
    return total;
}

double averageRainfall(double rain[], int size){
    double total = totalRainfall(rain, size);
    return total / size;
}

double lowestRainfall(double rain[], int size){
    double lowest = rain[0];
    for (int i = 1; i < size; i++){
        if (rain[i] < lowest){
            lowest = rain[i];
        }
    }
    return lowest;
}

double highestRainfall(double rain[], int size){
    double highest = rain[0];
    for (int i = 1; i < size; i++){
        if (rain[i] > highest){
            highest = rain[i];
        }
    }
    return highest;
}

