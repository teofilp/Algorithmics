#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED

class Position{
    private:
    int x,y;
public:
    Position(int,int);
    ~Position();
    void getPosition()const;
    void setPosition(int,int);
   friend void setX(Position &,int);

};



#endif // POSITION_H_INCLUDED
