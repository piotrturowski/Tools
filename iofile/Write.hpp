#include <iostream>
#include <fstream>
#include <string>
#ifndef write_hpp
#define write_hpp

class Write
{
protected:
    std::string name;
    std::ofstream file;
    void setFileName(std::string name);
public:
    Write();
    Write(std::string name);
    void clean();
    void setline( std::string text );
    friend class IOFile;
};

#endif // BaseArt_hpp
