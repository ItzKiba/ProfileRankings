#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/loader/Event.hpp>
#include <Geode/utils/web.hpp>

#include "Manager.h"

using namespace geode::prelude;

class $modify(MenuLayer) {
    struct Fields {
        EventListener<web::WebTask> m_listener1;
        EventListener<web::WebTask> m_listener2;
        EventListener<web::WebTask> m_listener3;
        EventListener<web::WebTask> m_listener4;
    };

	bool init() {
		if (!MenuLayer::init()) {
			return false;
		}
		// If the game has already been opened, don't do the request.
		if (Manager::firstTimeOpen) {
			return true;
		}

        /*
		web::AsyncWebRequest()
        .postRequest()
        .bodyRaw(fmt::format("type={}", "creators"))
        .fetch("https://clarifygdps.com/gdutils/moreleaderboards.php")
        .text()
        .then([this](const std::string& response) {

			Manager::parseRequestString(response, Manager::userIDList);

        });

		web::AsyncWebRequest()
        .postRequest()
        .bodyRaw(fmt::format("type={}", "moons"))
        .fetch("https://clarifygdps.com/gdutils/moreleaderboards.php")
        .text()
        .then([this](const std::string& response) {

			Manager::parseRequestString(response, Manager::userIDListMoons);

        });

		web::AsyncWebRequest()
        .postRequest()
        .bodyRaw(fmt::format("type={}", "demons"))
        .fetch("https://clarifygdps.com/gdutils/moreleaderboards.php")
        .text()
        .then([this](const std::string& response) {

			Manager::parseRequestString(response, Manager::userIDListDemons);

        });

		web::AsyncWebRequest()
        .postRequest()
        .bodyRaw(fmt::format("type={}", "pointercratePoints"))
        .fetch("https://clarifygdps.com/gdutils/moreleaderboards.php")
        .text()
        .then([this](const std::string& response) {

			Manager::parseRequestString(response, Manager::userIDListPointercrate);

        });
        */

        m_fields->m_listener1.bind([] (web::WebTask::Event* e) {
            if (web::WebResponse* res = e->getValue()) {
                Manager::parseRequestString(res->string().unwrapOr("Failed."), Manager::userIDListDemons);
            }
        });

        m_fields->m_listener2.bind([] (web::WebTask::Event* e) {
            if (web::WebResponse* res = e->getValue()) {
                Manager::parseRequestString(res->string().unwrapOr("Failed."), Manager::userIDList);
            }
        });

        m_fields->m_listener3.bind([] (web::WebTask::Event* e) {
            if (web::WebResponse* res = e->getValue()) {
                Manager::parseRequestString(res->string().unwrapOr("Failed."), Manager::userIDListMoons);
            }
        });

        m_fields->m_listener4.bind([] (web::WebTask::Event* e) {
            if (web::WebResponse* res = e->getValue()) {
                Manager::parseRequestString(res->string().unwrapOr("Failed."), Manager::userIDListPointercrate);
            }
        });

        auto req1 = web::WebRequest();
        req1.param("type", "demons");
        req1.param("count", "2500");
        req1.bodyString(fmt::format("type={}&count={}", "demons", "2500"));
        m_fields->m_listener1.setFilter(req1.get("https://clarifygdps.com/gdutils/moreleaderboards.php"));

        auto req2 = web::WebRequest();
        req2.param("type", "cp");
        req2.param("count", "2500");
        req2.bodyString(fmt::format("type={}&count={}", "cp", "2500"));
        m_fields->m_listener2.setFilter(req2.get("https://clarifygdps.com/gdutils/moreleaderboards.php"));

        auto req3 = web::WebRequest();
        req3.param("type", "moons");
        req3.param("count", "2500");
        req3.bodyString(fmt::format("type={}&count={}", "moons", "2500"));
        m_fields->m_listener3.setFilter(req3.get("https://clarifygdps.com/gdutils/moreleaderboards.php"));

        auto req4 = web::WebRequest();
        req3.param("type", "pointercratePoints");
        req3.param("count", "2500");
        req3.bodyString(fmt::format("type={}&count={}", "moons", "2500"));
        m_fields->m_listener3.setFilter(req3.get("https://clarifygdps.com/gdutils/moreleaderboards.php"));
        
		return true;
	}
};
