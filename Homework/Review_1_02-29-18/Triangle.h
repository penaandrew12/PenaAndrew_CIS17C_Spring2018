/* 
 * File:   Triangle.h
 * Author: Andrew Pena
 * Created on February 26th, 2018, 12:00 PM
 * Purpose:  Specification of a Triangular array from a Row Array
 */

#ifndef TRIANGLE_H
#define	TRIANGLE_H

#include "RowAray.h"

class Triangle{
    private:
        int szRow;
        RowAray **records;
    public:
        Triangle(int);
        ~Triangle();
        int getSzRow(){return szRow;}
        int getData(int,int);
};


#endif	/* TRIANGLE_H */

