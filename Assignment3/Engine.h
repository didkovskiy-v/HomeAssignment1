#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
    int power_;

public:
    explicit Engine(int power = 100);
    int GetPower() const;
    void SetPower(int power);
};

#endif

