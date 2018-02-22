/* 
 * File:   main.cpp
 * Author: Andrew Pena
 * Created on February 14, 2017, 7:40 PM
 * Purpose: Develop a 2D Array Structure
 *          with potential future for different #cols per row
 */

//System Libraries
#include <iostream> //I/O stream Library
#include <cstdlib>  //Random Number Functions
#include <ctime>   //Time to set random Seed
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Strcut2D.h"

//Global Constants

//Function Prototype
Array2D *filStrc(int,int);      //Fill Structure
void prtStrc(Array2D *);        //Print Structure
void destroy(Array2D *);        //Destroy Array
void mrkSort(Array2D *,int);    //Mark Sort of 2D Array

// Execution begins here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and Initialize 2D Structure
    Array2D *x=filStrc(10,15);

    //Display Contents of 2D Structure
    prtStrc(x);
    
    //Sort a column of the 2DArray
    mrkSort(x,0);
    
    //Display Contents of 2D Structure
    prtStrc(x);
    
    //Destroy allocated memory
    destroy(x);

    //Exit stage right!
    return 0;
}

void mrkSort(Array2D *a,int col){
    for(int i=0;i<a->rows-1;i++){
        for(int j=i+1;j<a->rows;j++){
            if(a->data[i][col]>a->data[j][col]){
                for(int k=0;k<a->cols;k++){
                    int temp=a->data[i][k];
                    a->data[i][k]=a->data[j][k];
                    a->data[j][k]=temp;
                }
            }
        }
    }
}

void destroy(Array2D *a){
    //Deallocate Memory for 2D array structure
    for(int i=0;i<a->rows;i++){
        delete []a->data[i];        //Will be different for each and every row for hw
    }
    delete []a->data;
    delete []a;
}

void prtStrc(Array2D *a){
    //Display Structure
    cout<<"Structure data array size => rows = "<<a->rows
            <<" cols = "<<a->cols<<endl<<endl;
    for(int i=0;i<a->rows;i++){
        for(int j=0;j<a->cols;j++){
            cout<<a->data[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

Array2D *filStrc(int row,int col){
    //Variables
    Array2D *array=new Array2D;
    
    //Fill 2D Array Structure
    array->rows=row;
    array->cols=col;
    
    //Allocate Memory for 2D array structure
    array->data=new int*[array->rows];
    for(int i=0;i<array->rows;i++){
        array->data[i]=new int[col];        //Will be different for each and every row for hw
    }
    
    //Fill memory array
    for(int i=0;i<array->rows;i++){
        for(int j=0;j<array->cols;j++){
            array->data[i][j]=rand()%90+10;
        }
    }
    
    return array;
}