#pragma once

#include <any>
#include <fstream>
#include <vector>

#include <cmath>

#include "../util/types.h"

class Reader
{
public:
    Reader(std::ifstream &);
    std::any parse();

private:
    std::ifstream *file;

    std::vector<std::any>        object_cache;
    std::vector<std::vector<u8>> symbol_cache;
};
