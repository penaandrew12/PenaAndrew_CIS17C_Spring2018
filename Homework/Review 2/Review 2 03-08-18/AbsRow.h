/* 
 * File:   AbsRow
 * Author: Andrew Pena
 * Created on March 5th, 2018, 11:50 AM
 * Specification for the Abstract Row Array Class
 */

#ifndef ABSROW_H
#define	ABSROW_H

class AbsRow{
    protected:
        int size;
        int *rowData;
    public:
        virtual int getSize()const = 0;
        virtual int getData(int)const = 0;
};

#endif	/* ABSROW_H */