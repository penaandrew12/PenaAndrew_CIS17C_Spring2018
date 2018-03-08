/* 
 * File:   PlusTab
 * Author: Andrew Pena
 * Created on March 5th, 2018, 11:50 AM
 * Specification for the Table addition operator
 */

#ifndef PLUSTAB_H
#define	PLUSTAB_H

#include "Table.h"

class PlusTab:public Table{
    public:
        PlusTab(unsigned int r,unsigned int c):Table(r,c){};
        PlusTab operator+(const PlusTab &);
};

#endif	/* PLUSTAB_H */