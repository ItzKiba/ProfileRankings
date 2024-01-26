#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/utils/web.hpp>
#include "Manager.h"

using namespace geode::prelude;

class $modify(MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) {
			return false;
		}
		// If the game has already been opened, don't do the request.
		if (Manager::firstTimeOpen) {
			return true;
		}

		web::AsyncWebRequest()
        .postRequest()
        .bodyRaw(fmt::format("type={}", "creators"))
        .fetch("https://clarifygdps.com/gdutils/moreleaderboards.php")
        .text()
        .then([this](const std::string& response) {

			Manager::parseRequestString(response);

        }).expect([](std::string const& error) {
		
			

		});

		Manager::firstTimeOpen = true;

		return true;
	}
};
