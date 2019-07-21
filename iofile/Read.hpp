#include <iostream>
#include <fstream>
#include <string>
#ifndef Read_hpp
#define Read_hpp

class Read
{
protected:
    std::string name;
    std::ifstream file;
    void setFileName(std::string name);
public:
    Read();
    Read(std::string name);
    std::string getline();
    std::string getline(unsigned int numberOfLine);
    int linesQuantity();
    friend class IOFile;
};

#endif // BaseArt_hpp
