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

inline bool floatsAreEqual(float a, float b){
    return std::abs(a - b) < Jade::epsilon;
}
