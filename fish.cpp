
#include "fish.h"

bool fish::Read(std::ifstream &ifs) {
    int int_location;
    if(!ifs.eof()) return false;
    ifs >> int_location;
    if(!ifs.fail()) return false;
    living_place = (location)int_location;
    return true;
}

void fish::Out(std::ofstream &ofs) {
    ofs << "Location: ";
    switch (living_place) {
        case location::lake:
            ofs << "Lake\n";
            return;
        case location::ocean:
            ofs << "Ocean\n";
            return;
        case location::river:
            ofs << "River\n";
            return;
        case location::sea:
            ofs << "Sea\n";
            return;
        default:
            ofs << "Other\n";
            return;
    }
}

