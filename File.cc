#include "File.h"

File::File(string name, string content, Date & date):
 name(name), content(content), date(date) {}

File::File(){

    name = "";
    content = "";
    date = Date();
}

string File::getName() {
    return name;
}

bool File::lessThan(File& f)
{
    if (this->date.getYear() < f.date.getYear()) {
        return true;
    } else if (this->date.getYear() > f.date.getYear()) {
        return false;
    } else {
        if (this->date.getMonth() < f.date.getMonth()) {
            return true;
        } else if (this->date.getMonth() > f.date.getMonth()) {
            return false;
        } else {
             if (this->date.getDay() < f.date.getDay()) {
                return true;
            } else {
                return false;
            }
        }
    }
}

void File::print() {
    cout << "File: " << name << endl;
    cout << "Date added: ";
    date.print();
    cout << endl;
}

void File::printContents() {
    print();
    cout << "File Contents:" << endl;
    cout << content << endl << endl;
}
