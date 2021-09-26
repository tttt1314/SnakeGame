#ifndef FOOD_H
#define FOOD_H

#include "SDL.h"

class Food {
  public:
    enum class State { normal, silver, golden };
    Food():state(State::normal), counter(0){};
    State getState(){ return state; };
    void updateState();
    void counterAdd();
    void counterClear(){ counter = 0; };
    int getCounter(){ return counter; };
    SDL_Point place;
 private:
    State state;
    int counter;
};

#endif