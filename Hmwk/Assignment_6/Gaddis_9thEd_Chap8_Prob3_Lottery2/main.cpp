/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: josephgutierrez
 *
 * Created on July 24, 2018, 4:05 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

void sortArray(int [], int);
bool binarySearch(int [], int, int);

int main(int argc, char** argv) {

    const int SIZE = 10;
    int tckt;
    bool vld;
    int tckts[SIZE] = {
        13579, 26771, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121
    };
    
    cout << "Enter winning ticket number: ";
    cin >> tckt;
    
    sortArray(tckts, SIZE);
    vld = binarySearch(tckts, SIZE, tckt);
    if (vld)
        cout << "Ticket was found!";
    else
        cout << "Ticket was not found.";
    
    return 0;
}

void sortArray(int array[], int size){
    bool swap;
    int temp;
    
    do {
        swap = false;
        for (int i = 0; i < (size - 1); i++){
            if (array[i] > array[i + 1]){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

bool binarySearch(int array[], int size, int value){
    
    int first = 0,
            last = size - 1,
            middle;
    bool found = false;
    
    while (!found && first <= last){
        middle = (first + last) / 2;
        if (array[middle] == value){
            found = true;
        } else if (array[middle] > value){
            last = middle - 1;
        } else {
            first = middle + 1;
        }
    }
    return found;
}