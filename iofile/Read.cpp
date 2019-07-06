#include "Read.hpp"

Read::Read()
{

}

Read::Read(std::string name)
{
    setFileName(name);
}

std::string Read::getline()
{
    std::string text;
    file.open( &name[0] , std::ios::in );
    if( file.good() == true )
    {
        std::getline(file,text);
        file.close();
        return text;
    } else std::cout << "error: i can't open file " << name << std::endl;
    return "error";
}

std::string Read::getline(unsigned int numberOfLine)
{
    std::string text;
    file.open( &name[0] , std::ios::in );
    if( file.good() == true )
    {
        for(int lineNumber = 0; lineNumber <= numberOfLine; lineNumber++ )
        {
            std::getline(file,text);
        }
        file.close();
        return text;
    } else std::cout << "error: i can't open file " << name << std::endl;
    return "error";
}

void Read::setFileName(std::string name)
{
    name += ".txt";
    this->name = name;
}

