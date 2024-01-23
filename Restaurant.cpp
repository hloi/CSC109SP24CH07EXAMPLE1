//
// Created by Hao Loi on 1/23/24.
//

#include "Restaurant.h"
#include <iostream>

using namespace std;


void Restaurant::SetName(std::string restaurantName) {
    name = restaurantName;
}

void Restaurant::SetRating(int userRating) {
    rating = userRating;
}

void Restaurant::Print() {
    cout << name << " Rating: " << rating << endl;
}

Restaurant::Restaurant() {
    name = "";
    rating = 0;
}

Restaurant::Restaurant(std::string name, int userRating) {
    this->name = name;
    rating = userRating;

}


void SetName(std::string restaurantName) {

}
