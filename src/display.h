//
// Created by Orion Letizi on 2/5/23.
//

#ifndef CPP_TEST_DISPLAY_H
#define CPP_TEST_DISPLAY_H

#include <string>

class Display {
public:
    virtual void print(std::string msg) = 0;
};

class SerialDisplay : public Display {
public:
    void print(std::string msg) override;
};

#endif //CPP_TEST_DISPLAY_H