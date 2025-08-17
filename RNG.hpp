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

#include "ENGINECONSTANTS.hpp"
#include "EngineUtilities.hpp"

//RNG.hpp - This module includes utilities for generating random numbers easily and efficiently

namespace Jade{

    class RNG{
        private:
            std::mt19937 generator;
        public:
            RNG(){
                std::random_device randomSeed;
                generator.seed(randomSeed());
                std::cout << "RNG instance created successfully with a random seed" << "\n";
            }
            RNG(const unsigned int seed){
                generator.seed(seed);
                std::cout << "RNG instance created successfully with the specified seed: " << seed << "\n";
            }
            ~RNG(){
                std::cout << "RNG instance has been destroyed" << "\n";
            }

            bool getTruthWithProbability(float chance){
                std::bernoulli_distribution probability(chance);
                return probability(generator);
            }

            float getRandomFloat(float min, float max){
                std::uniform_real_distribution<float> range(min, max);
                return range(generator);
            }

            int getRandomInt(int min, int max){
                std::uniform_int_distribution<int> range(min, max);
                return range(generator);
            }
    };

}
