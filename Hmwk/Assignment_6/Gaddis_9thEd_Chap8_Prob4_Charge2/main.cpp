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

    const int SIZE = 18;
    int num;
    int vld;
    int accnt[SIZE] = {
        5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    
    cout << "Enter account number to search: ";
    cin >> num;
    
    sortArray(accnt, SIZE);
    vld = binarySearch(accnt, SIZE, num);
    if (vld)
        cout << "Account number is valid";
    else
        cout << "Account number is invalid";
    
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