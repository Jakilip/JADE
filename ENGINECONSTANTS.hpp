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

namespace Jade{

inline const std::string EngineName = "DodgeEngine 0.1";
inline const int UpdatesPerSecond = 240;
inline const float FixedTimestep = 1.f/UpdatesPerSecond;
inline const float epsilon = 0.0001f;

}

