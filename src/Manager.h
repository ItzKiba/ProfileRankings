#pragma once
#include <vector>
#include <Geode/Bindings.hpp>
#include "Particles.h"

using namespace geode::prelude;

class Manager {
    public:
        inline static bool firstTimeOpen;
        inline static std::vector<int> userIDList;

        inline static void parseRequestString(std::string str) {

            size_t isFound = str.find("|");

            while (isFound != std::string::npos) {

                for (unsigned int i = 0; i < 3; i++) {
                    str = str.substr(str.find(":") + 1);
                }

                try {
                    int userID = stoi(str.substr(0, str.find(":")));
                    userIDList.push_back(userID);
                } catch (std::invalid_argument) {
                    break;
                }
                

                isFound = str.find("|");
                str = str.substr(isFound + 1);
            
            }            
            
        }

        inline static int getPosition(int id) {
            for (unsigned int i = 0; i < userIDList.size(); i++) {
                if (userIDList.at(i) == id) {
                    return i + 1;
                }
            }
            return -1;
        }

};