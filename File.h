#ifndef FILE_H
#define FILE_H

#include "Date.h"

class File {

    public:
    File(string, string, Date&);
    File();

    string getName();

    bool lessThan(File&);
    void print();
    void printContents();

    private:

        string name;
        string content;
        Date date;

};


#endif