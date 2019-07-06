#include "iofile.hpp"
IOFile::IOFile()
    :Read()
    ,Write()
{

}


IOFile::IOFile(std::string name)
    :Read(name)
    ,Write(name)
{

}



void IOFile::setFileName(std::string name)
{
    Read.setFileName(name);
    Write.setFileName(name);
}
