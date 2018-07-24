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

int getLowest(int [], int);
int getLargest(int [], int);

int main(int argc, char** argv) {

    const int SIZE = 10;
    int array[SIZE];
    
    for (int i = 0; i < SIZE; i++){
        cout << "Enter number " << i + 1 << " of array: ";
        cin >> array[i];
    }
    
    cout << "Lowest value in array: " << getLowest(array, SIZE) << endl;
    cout << "Largest value in array: " << getLargest(array, SIZE) << endl;
    
    return 0;
}

int getLowest(int array[], int size){
    int lowest = array[0];
    for (int i = 1; i < size; i++){
        if (array[i] < lowest){
            lowest = array[i];
        }
    }
    
    return lowest;
}

int getLargest(int array[], int size){
    int largest = array[0];
    for (int i = 1; i < size; i++){
        if (array[i] > largest){
            largest = array[i];
        }
    }
    
    return largest;
}