#pragma once
#include <vector>
#include <Geode/Bindings.hpp>
#include "Particles.h"

using namespace geode::prelude;

class Manager {
    public:
        inline static bool firstTimeOpen;
        inline static std::vector<int> userIDList;
        inline static std::vector<int> userIDListDemons;
        inline static std::vector<int> userIDListMoons;

        inline static void parseRequestString(std::string str, std::vector<int> &list) {

            size_t isFound = str.find("|");

            while (isFound != std::string::npos) {

                for (unsigned int i = 0; i < 3; i++) {
                    str = str.substr(str.find(":") + 1);
                }

                if (str.find(":") != std::string::npos) {
                    int userID = stoi(str.substr(0, str.find(":")));
                    list.push_back(userID);
                } else {
                    break;
                }

                // try {
                //     int userID = stoi(str.substr(0, str.find(":")));
                //     list.push_back(userID);
                // } catch (std::invalid_argument) {
                //     break;
                // }
                

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

        inline static int getPositionDemons(int id) {
            for (unsigned int i = 0; i < userIDListDemons.size(); i++) {
                if (userIDListDemons.at(i) == id) {
                    return i + 1;
                }
            }
            return -1;
        }

        inline static int getPositionMoons(int id) {
            for (unsigned int i = 0; i < userIDListMoons.size(); i++) {
                if (userIDListMoons.at(i) == id) {
                    return i + 1;
                }
            }
            return -1;
        }

};