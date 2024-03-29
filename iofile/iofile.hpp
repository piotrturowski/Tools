#ifndef IOFILE_HPP
#define IOFILE_HPP
#include "Read.hpp"
#include "Write.hpp"

class IOFile
{
private:
    std::string name;
protected:

public:
    Read Read;
    Write Write;
    IOFile(std::string name);
    IOFile();
    void setFileName(std::string name);
    void deleteFile(std::string name);
};
#endif // IOFILE_HPP
