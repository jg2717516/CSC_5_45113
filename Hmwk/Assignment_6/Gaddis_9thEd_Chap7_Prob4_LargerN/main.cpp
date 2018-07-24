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
#include <ctime>

using namespace std;

/*
 * 
 */

void largerThanN(int [], int, int);

int main(int argc, char** argv) {

    srand(time(NULL));
    
    const int SIZE = 5;
    int array[SIZE];
    int n;
    
    for (int i = 0; i < SIZE; i++){
        array[i] = rand()%SIZE+1;
    }
    
    cout << "Enter a number n to compare: ";
    cin >> n;
    
    largerThanN(array, SIZE, n);
    
    return 0;
}

void largerThanN(int array[], int size, int n){
    cout << "Numbers larger than " << n << " in array: ";
    for (int i = 0; i < size; i++){
        if (array[i] > n){
            cout << array[i] << " ";
        }
    }
}