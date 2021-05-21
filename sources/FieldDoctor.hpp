#pragma once
#include "Player.hpp"
namespace pandemic{
    class FieldDoctor : public Player{
        
        public:
            FieldDoctor(Board& b , City c):Player(b,c){
                Player::setRole("FieldDoctor");
            }
            Player& treat(City c) override;
    };
}