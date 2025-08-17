#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Jade.hpp"

using namespace std;

int main(){
    Jade::RNG rng;
    Jade::Hitbox hitboxTest({0, 0}, 40.5, 20.4, 9.1);
    cout << hitboxTest.get("width") << "\n";
    hitboxTest.set("rozmiar kutasa", 30000);
    cout << hitboxTest.getType() << "\n";
    return 0;
}
