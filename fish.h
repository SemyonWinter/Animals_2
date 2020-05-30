
#ifndef FISH_H
#define FISH_H

#include <iostream>
#include <fstream>
#include "animal.h"

enum location {
    river, sea, ocean, lake, other
};

class fish : public animal {
public:
    location living_place; // Локация

    void Read(std::ifstream& ifs);
    void Out(std::ofstream& ofs);
    void MultiMethod(animal *other, std::ofstream &ofst);
    void MultiBird(std::ofstream &ofst);
    void MultiFish(std::ofstream &ofst);
};

#endif //FISH_H
