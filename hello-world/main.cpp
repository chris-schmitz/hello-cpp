#include <iostream>
#include "Log.h"

class Entity {
public:
    float X, Y;
public:
    Entity(){}
    
    Entity(float x, float y){
        X = x;
        Y = y;
    }
    
    void setX(float x){
        X = x;
    }
    void setY(float y){
        Y = y;
    }

    void Print (){
        std::cout << "X: " << X << ",Y: " << Y << std::endl;
    }
};

int main() {
    
    Log log;
    
    Entity e;
    e.setX(123.45f);
    e.setY(0.00f);
    e.Print();

    log.SetLevel(Log::LevelError);
    log.Warn("hello from main");
    log.Error("hello from main");
    log.Info("hello from main");
}
