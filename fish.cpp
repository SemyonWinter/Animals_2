
#include "fish.h"

void fish::Read(std::ifstream &ifs) {
    int int_location;
    ifs >> int_location;
    living_place = (location)int_location;
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

void fish::MultiMethod(animal *other, std::ofstream &ofst) {
    other->MultiFish(ofst);
}

void fish::MultiBird(std::ofstream &ofst) {
    ofst << "Fish and bird" << std::endl;
}

void fish::MultiFish(std::ofstream &ofst) {
    ofst << "Fish and fish" << std::endl;
}

