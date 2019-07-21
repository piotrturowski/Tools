#include "iofile.hpp"
IOFile::IOFile()
    :Read()
    ,Write()
{

}


IOFile::IOFile(std::string name)
    :name(name+".txt")
    ,Read(this->name)
    ,Write(this->name)
{

}



void IOFile::setFileName(std::string name)
{
    this->name += ".txt";
    Read.setFileName(name);
    Write.setFileName(name);
}

void IOFile::deleteFile(std::string name)
{
    name += ".txt";
    std::remove(&name[0]);
}
