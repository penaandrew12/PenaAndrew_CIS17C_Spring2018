/* 
 * File:   Table.h
 * Author: Andrew Pena
 * Created on March 5th, 2018, 11:50 AM
 * Specification for the Table
 */

#ifndef TABLE_H
#define	TABLE_H

#include "AbsTab1.h"

class Table:public AbsTabl{
    public:
        Table(unsigned int,unsigned int);
        Table(const Table &);
        virtual ~Table();
        int getSzRow()const {return szRow;}
        int getSzCol()const {return szCol;}
        int getData(int,int)const;
        void setData(int,int,int);
};

#endif	/* TABLE_H */