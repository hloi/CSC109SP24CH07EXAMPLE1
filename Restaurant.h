//
// Created by Hao Loi on 1/23/24.
//

#ifndef CH07EXAMPLE1_RESTAURANT_H
#define CH07EXAMPLE1_RESTAURANT_H

#include <string>

// using namespace std;

class Restaurant {                          // Keeps a user's review of a restaurant
public:
    Restaurant();
    Restaurant(std::string name, int userRating);

    void SetName(std::string restaurantName);  // Sets the restaurant's name
    void SetRating(int userRating);       // Sets the rating (1-5, with 5 best)
    void Print();                         // Prints name and rating on one line

    const std::string &getName() const;

    int getRating() const;

private:
    std::string name;
    int rating;
};


#endif //CH07EXAMPLE1_RESTAURANT_H
