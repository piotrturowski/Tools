#include "Read.hpp"

Read::Read()
{

}

Read::Read(std::string name)
:name(name)
{
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
    std::string bufferText,returnedText;
    file.open( &name[0] , std::ios::in );
    if( file.good() == true )
    {
        for(int lineNumber = 0; lineNumber <= numberOfLine; lineNumber++ )
        {
            if(!file.eof())
            {
                std::getline(file,bufferText);
                if(numberOfLine == lineNumber)
                {
                    returnedText = bufferText;
                }
            }
        }
        file.close();
        return returnedText;
    } else std::cout << "error: i can't open file " << name << std::endl;
    return "error";
}

void Read::setFileName(std::string name)
{
    name += ".txt";
    this->name = name;
}

int Read::linesQuantity()
{
    int linesQuantity = 0;
    std::string bufferText;
    file.open( &name[0] , std::ios::in );
    if( file.good() == true )
    {
        for(;;)
        {
            if(!file.eof())
            {
                std::getline(file,bufferText);
                linesQuantity++;
            }
            else
            {

                file.close();
                return linesQuantity-1;
            }
        }

        return linesQuantity;
    } else std::cout << "error: i can't open file " << name << std::endl;
    return 0;
}
