#include "write.hpp"

Write::Write()
{

}

Write::Write(std::string name)
:name(name)
{

}

void Write::setline(std::string text)
{
    file.open( &name[0] , std::ios::app );
    if( file.good() == true )
    {
        file.seekp(0,std::ios::end);
        if(file.tellp() != 0)
        {
            text = "\n" + text;
        }
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
