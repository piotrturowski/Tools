#include "write.hpp"

Write::Write()
{

}

Write::Write(std::string name)
{
    setFileName(name);
}

void Write::setline(std::string text)
{
    file.open( &name[0] , std::ios::app );
    if( file.good() == true )
    {
        text += "\n";
        file.write(&text[0],text.length());
        file.close();
    } else std::cout << "error: i can't open file " << name << std::endl;
}

void Write::clean()
{
   file.open( &name[0] , std::ios::out );
    file.close();
}

void Write::setFileName(std::string name)
{
    name += ".txt";
    this->name = name;
}
