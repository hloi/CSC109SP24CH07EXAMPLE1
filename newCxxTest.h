/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newCxxTest.h
 * Author: hloi
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "Restaurant.h"
#include <string>
using std::string;

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testMyFunction1() { // test non default constructor

        Restaurant rest3("GG", 3);
        string name = rest3.getName();
        TS_ASSERT_EQUALS(name, "GG");
        int rating = rest3.getRating();
        TS_ASSERT_EQUALS(rating, 3);

    }

    void testMyFunction2() { // test default constructor

        Restaurant rest3;
        string name = rest3.getName();
        TS_ASSERT_EQUALS(name, "");
        int rating = rest3.getRating();
        TS_ASSERT_EQUALS(rating, 0);

    }
};
#endif /* NEWCXXTEST_H */
