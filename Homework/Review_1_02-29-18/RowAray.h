/* 
 * File:   RowAray.h
 * Author: Andrew Pena
 * Created on February 26th, 2018, 12:00 PM
 * Purpose: Specification for the RowAray
 */

#ifndef ROWARAY_H
#define	ROWARAY_H

class RowAray{
    private:
        int size;
        int *rowData;
    public:
        RowAray(int);
        ~RowAray();
        int getSize(){return size;}
        int getData(int i){return rowData[i];}
};

#endif	/* ROWARAY_H */