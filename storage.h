#ifndef STORAGE_H
#define STORAGE_H

#include <vector>
#include <string>
#include "block.h"

class Storage {
private:
    std::vector<Block> blocks;
    int currentBlockId = 0;

public:
    void loadData(const std::string &filename);
    int getNumOfBlocks();
    Block getBlock(int offset);
    void printAllBlocks() const;
    void printStatistics() const;
    void loadFromDB(const std::string &filename);
    void saveToDB(const std::string &filename);
};

#endif // STORAGE_H
