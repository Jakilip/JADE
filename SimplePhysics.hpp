#pragma once

#include <iostream>
#include <fstream>
#include <cmath>
#include <random>
#include <utility>
#include <unordered_map>
#include <filesystem>
#include <vector>
#include <memory>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "ENGINECONSTANTS.hpp"
#include "EngineUtilities.hpp"

namespace Jade{

    enum HitboxType{
        SQUARE,
        CIRCLE,
        BEAM
    };

    class Hitbox{  //rewrite this later
        private:

            HitboxType hitboxType;
            std::unordered_map<std::string, float> hitbox;
            sf::Vector2f pos;

        public:

            void set(const std::string& variableName, const float& value){
                if(hitbox.find(variableName) == hitbox.end()){
                    std::cerr << "Attempted to change a variable that doesn't exist at Hitbox: " << this << "\n";
                    return;
                }
                hitbox[variableName] = value;
            }
            void setPosition(const sf::Vector2f& pos){
                this->pos = pos;
            }

            float get(const std::string& variableName){
                if(hitbox.find(variableName) == hitbox.end())
                    return 0.f;
                return hitbox[variableName];
            }
            sf::Vector2f getPosition(){
                return pos;
            }
            HitboxType getType(){
                return hitboxType;
            }

            Hitbox(const sf::Vector2f& pos, const float& height, const float& width){
                this->pos = pos;
                hitboxType = SQUARE;
                hitbox["width"] = width;
                hitbox["height"] = height;
            }

            Hitbox(const sf::Vector2f& pos, const float& radius){
                this->pos = pos;
                hitboxType = CIRCLE;
                hitbox["radius"] = radius;
            }

            Hitbox(const sf::Vector2f& pos, const float& width, const float& length, const float& angle){
                this->pos = pos;
                hitboxType = BEAM;
                hitbox["width"] = width;
                hitbox["length"] = length;
                hitbox["angle"] = angle;
            }

    };

    class PhysicsObject{
        private:

            float weight;
            std::vector<Hitbox> hitboxes;

        public:


    };

}
