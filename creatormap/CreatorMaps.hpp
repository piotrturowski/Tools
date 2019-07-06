#ifndef CreatorMaps_hpp
#define CreatorMaps_hpp

class CreatorMaps
{
private:
    int X;
    int Y;
    int ** tab;
protected:

public:
    void create(int x, int y);
    void show();
    void reset();
    CreatorMaps();
    CreatorMaps(int x,int y);
};

#endif
