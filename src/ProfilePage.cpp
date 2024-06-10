#include <Geode/Bindings.hpp>
#include <Geode/modify/ProfilePage.hpp>
#include <Geode/loader/Loader.hpp>
#include "Manager.h"
#include "Particles.h"

using namespace geode::prelude;

class $modify(ERProfilePage, ProfilePage) {

    static void onModify(auto &self) {
        self.setHookPriority("ProfilePage::loadPageFromUserInfo", -1);
    }

    struct Fields {
        bool m_hasBeenOpened = false;
    
        ccColor3B m_cColor = {0, 0, 0};
        ccColor3B m_gColor = {0, 0, 0};
        ccColor3B m_dColor = {0, 0, 0};
        ccColor3B m_mColor = {0, 0, 0};

        CCSprite* m_cTrophy = nullptr;
        CCSprite* m_gTrophy = nullptr;
        CCSprite* m_dTrophy = nullptr;
        CCSprite* m_mTrophy = nullptr;

        CCParticleSystem* m_cParticleBase = nullptr;
        CCParticleSystem* m_gParticleBase = nullptr;
        CCParticleSystem* m_dParticleBase = nullptr;
        CCParticleSystem* m_mParticleBase = nullptr;

        CCParticleSystem* m_cParticleExtra = nullptr;
        CCParticleSystem* m_gParticleExtra = nullptr;
        CCParticleSystem* m_dParticleExtra = nullptr;
        CCParticleSystem* m_mParticleExtra = nullptr;

        CCParticleSystem* m_cParticleExtra2 = nullptr;
        CCParticleSystem* m_gParticleExtra2 = nullptr;
        CCParticleSystem* m_dParticleExtra2 = nullptr;
        CCParticleSystem* m_mParticleExtra2 = nullptr;
    };

    // FEAST your eyes on this MONSTROSITY, CATTO!!!

    void creatorSetValues(int pos) {
        ERProfilePage* page = this;
        if (pos > 1500) {
            page->m_fields->m_cColor = { 10, 10, 10 };
            page->m_fields->m_cTrophy = CCSprite::createWithSpriteFrameName("trophy_0.png"_spr);
            page->m_fields->m_cParticleBase = nullptr;
            page->m_fields->m_cParticleExtra = nullptr;
            page->m_fields->m_cParticleExtra2 = nullptr;
        } else if (pos > 1000) {
            page->m_fields->m_cColor = { 204, 75, 0 };
            page->m_fields->m_cTrophy = CCSprite::createWithSpriteFrameName("trophy_1.png"_spr);
            page->m_fields->m_cParticleBase = Particles::trophyGeneral(page->m_fields->m_cColor, 5);
            page->m_fields->m_cParticleExtra = nullptr;
            page->m_fields->m_cParticleExtra2 = nullptr;
        } else if (pos > 750) {
            page->m_fields->m_cColor = { 185, 0, 179 };
            page->m_fields->m_cTrophy = CCSprite::createWithSpriteFrameName("trophy_2.png"_spr);
            page->m_fields->m_cParticleBase = Particles::trophyGeneral(page->m_fields->m_cColor, 6);
            page->m_fields->m_cParticleExtra = nullptr;
            page->m_fields->m_cParticleExtra2 = nullptr;
        } else if (pos > 500) {
            page->m_fields->m_cColor = { 26, 160, 255 };
            page->m_fields->m_cTrophy = CCSprite::createWithSpriteFrameName("trophy_3.png"_spr);
            page->m_fields->m_cParticleBase = Particles::trophyGeneral(page->m_fields->m_cColor, 7);
            page->m_fields->m_cParticleExtra = nullptr;
            page->m_fields->m_cParticleExtra2 = nullptr;
        } else if (pos > 250) {
            page->m_fields->m_cColor = { 23, 196, 0 };
            page->m_fields->m_cTrophy = CCSprite::createWithSpriteFrameName("trophy_4.png"_spr);
            page->m_fields->m_cParticleBase = Particles::trophyGeneral(page->m_fields->m_cColor, 8);
            page->m_fields->m_cParticleExtra = nullptr;
            page->m_fields->m_cParticleExtra2 = nullptr;
        } else if (pos > 100) {
            page->m_fields->m_cColor = { 220, 7, 68 };
            page->m_fields->m_cTrophy = CCSprite::createWithSpriteFrameName("trophy_5.png"_spr);
            page->m_fields->m_cParticleBase = Particles::trophyGeneral(page->m_fields->m_cColor, 9);
            page->m_fields->m_cParticleExtra = nullptr;
            page->m_fields->m_cParticleExtra2 = nullptr;
        } else if (pos > 50) {
            page->m_fields->m_cColor = { 255, 157, 0 };
            page->m_fields->m_cTrophy = CCSprite::createWithSpriteFrameName("trophy_6.png"_spr);
            page->m_fields->m_cParticleBase = Particles::trophyGeneral(page->m_fields->m_cColor, 10);
            page->m_fields->m_cParticleExtra = Particles::topTrophy0(15);
            page->m_fields->m_cParticleExtra2 = nullptr;
        } else if (pos > 10) {
            page->m_fields->m_cColor = { 255, 255, 255 };
            page->m_fields->m_cTrophy = CCSprite::createWithSpriteFrameName("trophy_7.png"_spr);
            page->m_fields->m_cParticleBase = Particles::trophyGeneral(page->m_fields->m_cColor, 11);
            page->m_fields->m_cParticleExtra = Particles::topTrophy0(20);
            page->m_fields->m_cParticleExtra2 = Particles::topTrophySparkles(2);
        } else if (pos > 1) {
            page->m_fields->m_cColor = { 255, 221, 0 };
            page->m_fields->m_cTrophy = CCSprite::createWithSpriteFrameName("trophy_8.png"_spr);
            page->m_fields->m_cParticleBase = Particles::trophyGeneral(page->m_fields->m_cColor, 12);
            page->m_fields->m_cParticleExtra = Particles::topTrophy0(25);
            page->m_fields->m_cParticleExtra2 = Particles::topTrophySparkles(3);
        } else {
            page->m_fields->m_cColor = { 0, 255, 255 };
            page->m_fields->m_cTrophy = CCSprite::createWithSpriteFrameName("trophy_9.png"_spr);
            page->m_fields->m_cParticleBase = Particles::trophyGeneral(page->m_fields->m_cColor, 13);
            page->m_fields->m_cParticleExtra = Particles::topTrophy0(30);
            page->m_fields->m_cParticleExtra2 = Particles::topTrophySparkles(4);
        }
    }

    void globalSetValues(int pos) {
        ERProfilePage* page = this;
        if (pos > 1500) {
            page->m_fields->m_gColor = { 10, 10, 10 };
            page->m_fields->m_gTrophy = CCSprite::createWithSpriteFrameName("trophy_0.png"_spr);
            page->m_fields->m_gParticleBase = nullptr;
            page->m_fields->m_gParticleExtra = nullptr;
            page->m_fields->m_gParticleExtra2 = nullptr;
        } else if (pos > 1000) {
            page->m_fields->m_gColor = { 204, 75, 0 };
            page->m_fields->m_gTrophy = CCSprite::createWithSpriteFrameName("trophy_1.png"_spr);
            page->m_fields->m_gParticleBase = Particles::trophyGeneral(page->m_fields->m_gColor, 5);
            page->m_fields->m_gParticleExtra = nullptr;
            page->m_fields->m_gParticleExtra2 = nullptr;
        } else if (pos > 750) {
            page->m_fields->m_gColor = { 185, 0, 179 };
            page->m_fields->m_gTrophy = CCSprite::createWithSpriteFrameName("trophy_2.png"_spr);
            page->m_fields->m_gParticleBase = Particles::trophyGeneral(page->m_fields->m_gColor, 6);
            page->m_fields->m_gParticleExtra = nullptr;
            page->m_fields->m_gParticleExtra2 = nullptr;
        } else if (pos > 500) {
            page->m_fields->m_gColor = { 26, 160, 255 };
            page->m_fields->m_gTrophy = CCSprite::createWithSpriteFrameName("trophy_3.png"_spr);
            page->m_fields->m_gParticleBase = Particles::trophyGeneral(page->m_fields->m_gColor, 7);
            page->m_fields->m_gParticleExtra = nullptr;
            page->m_fields->m_gParticleExtra2 = nullptr;
        } else if (pos > 250) {
            page->m_fields->m_gColor = { 23, 196, 0 };
            page->m_fields->m_gTrophy = CCSprite::createWithSpriteFrameName("trophy_4.png"_spr);
            page->m_fields->m_gParticleBase = Particles::trophyGeneral(page->m_fields->m_gColor, 8);
            page->m_fields->m_gParticleExtra = nullptr;
            page->m_fields->m_gParticleExtra2 = nullptr;
        } else if (pos > 100) {
            page->m_fields->m_gColor = { 220, 7, 68 };
            page->m_fields->m_gTrophy = CCSprite::createWithSpriteFrameName("trophy_5.png"_spr);
            page->m_fields->m_gParticleBase = Particles::trophyGeneral(page->m_fields->m_gColor, 9);
            page->m_fields->m_gParticleExtra = nullptr;
            page->m_fields->m_gParticleExtra2 = nullptr;
        } else if (pos > 50) {
            page->m_fields->m_gColor = { 255, 157, 0 };
            page->m_fields->m_gTrophy = CCSprite::createWithSpriteFrameName("trophy_6.png"_spr);
            page->m_fields->m_gParticleBase = Particles::trophyGeneral(page->m_fields->m_gColor, 10);
            page->m_fields->m_gParticleExtra = Particles::topTrophy0(15);
            page->m_fields->m_gParticleExtra2 = nullptr;
        } else if (pos > 10) {
            page->m_fields->m_gColor = { 255, 255, 255 };
            page->m_fields->m_gTrophy = CCSprite::createWithSpriteFrameName("trophy_7.png"_spr);
            page->m_fields->m_gParticleBase = Particles::trophyGeneral(page->m_fields->m_gColor, 11);
            page->m_fields->m_gParticleExtra = Particles::topTrophy0(20);
            page->m_fields->m_gParticleExtra2 = Particles::topTrophySparkles(2);
        } else if (pos > 1) {
            page->m_fields->m_gColor = { 255, 221, 0 };
            page->m_fields->m_gTrophy = CCSprite::createWithSpriteFrameName("trophy_8.png"_spr);
            page->m_fields->m_gParticleBase = Particles::trophyGeneral(page->m_fields->m_gColor, 12);
            page->m_fields->m_gParticleExtra = Particles::topTrophy0(25);
            page->m_fields->m_gParticleExtra2 = Particles::topTrophySparkles(3);
        } else {
            page->m_fields->m_gColor = { 0, 255, 255 };
            page->m_fields->m_gTrophy = CCSprite::createWithSpriteFrameName("trophy_9.png"_spr);
            page->m_fields->m_gParticleBase = Particles::trophyGeneral(page->m_fields->m_gColor, 13);
            page->m_fields->m_gParticleExtra = Particles::topTrophy0(30);
            page->m_fields->m_gParticleExtra2 = Particles::topTrophySparkles(4);
        }
    }

    void demonSetValues(int pos) {
        ERProfilePage* page = this;
        if (pos > 1500) {
            page->m_fields->m_dColor = { 10, 10, 10 };
            page->m_fields->m_dTrophy = CCSprite::createWithSpriteFrameName("trophy_0.png"_spr);
            page->m_fields->m_dParticleBase = nullptr;
            page->m_fields->m_dParticleExtra = nullptr;
            page->m_fields->m_dParticleExtra2 = nullptr;
        } else if (pos > 1000) {
            page->m_fields->m_dColor = { 204, 75, 0 };
            page->m_fields->m_dTrophy = CCSprite::createWithSpriteFrameName("trophy_1.png"_spr);
            page->m_fields->m_dParticleBase = Particles::trophyGeneral(page->m_fields->m_dColor, 5);
            page->m_fields->m_dParticleExtra = nullptr;
            page->m_fields->m_dParticleExtra2 = nullptr;
        } else if (pos > 750) {
            page->m_fields->m_dColor = { 185, 0, 179 };
            page->m_fields->m_dTrophy = CCSprite::createWithSpriteFrameName("trophy_2.png"_spr);
            page->m_fields->m_dParticleBase = Particles::trophyGeneral(page->m_fields->m_dColor, 6);
            page->m_fields->m_dParticleExtra = nullptr;
            page->m_fields->m_dParticleExtra2 = nullptr;
        } else if (pos > 500) {
            page->m_fields->m_dColor = { 26, 160, 255 };
            page->m_fields->m_dTrophy = CCSprite::createWithSpriteFrameName("trophy_3.png"_spr);
            page->m_fields->m_dParticleBase = Particles::trophyGeneral(page->m_fields->m_dColor, 7);
            page->m_fields->m_dParticleExtra = nullptr;
            page->m_fields->m_dParticleExtra2 = nullptr;
        } else if (pos > 250) {
            page->m_fields->m_dColor = { 23, 196, 0 };
            page->m_fields->m_dTrophy = CCSprite::createWithSpriteFrameName("trophy_4.png"_spr);
            page->m_fields->m_dParticleBase = Particles::trophyGeneral(page->m_fields->m_dColor, 8);
            page->m_fields->m_dParticleExtra = nullptr;
            page->m_fields->m_dParticleExtra2 = nullptr;
        } else if (pos > 100) {
            page->m_fields->m_dColor = { 220, 7, 68 };
            page->m_fields->m_dTrophy = CCSprite::createWithSpriteFrameName("trophy_5.png"_spr);
            page->m_fields->m_dParticleBase = Particles::trophyGeneral(page->m_fields->m_dColor, 9);
            page->m_fields->m_dParticleExtra = nullptr;
            page->m_fields->m_dParticleExtra2 = nullptr;
        } else if (pos > 50) {
            page->m_fields->m_dColor = { 255, 157, 0 };
            page->m_fields->m_dTrophy = CCSprite::createWithSpriteFrameName("trophy_6.png"_spr);
            page->m_fields->m_dParticleBase = Particles::trophyGeneral(page->m_fields->m_dColor, 10);
            page->m_fields->m_dParticleExtra = Particles::topTrophy0(15);
            page->m_fields->m_dParticleExtra2 = nullptr;
        } else if (pos > 10) {
            page->m_fields->m_dColor = { 255, 255, 255 };
            page->m_fields->m_dTrophy = CCSprite::createWithSpriteFrameName("trophy_7.png"_spr);
            page->m_fields->m_dParticleBase = Particles::trophyGeneral(page->m_fields->m_dColor, 11);
            page->m_fields->m_dParticleExtra = Particles::topTrophy0(20);
            page->m_fields->m_dParticleExtra2 = Particles::topTrophySparkles(2);
        } else if (pos > 1) {
            page->m_fields->m_dColor = { 255, 221, 0 };
            page->m_fields->m_dTrophy = CCSprite::createWithSpriteFrameName("trophy_8.png"_spr);
            page->m_fields->m_dParticleBase = Particles::trophyGeneral(page->m_fields->m_dColor, 12);
            page->m_fields->m_dParticleExtra = Particles::topTrophy0(25);
            page->m_fields->m_dParticleExtra2 = Particles::topTrophySparkles(3);
        } else {
            page->m_fields->m_dColor = { 0, 255, 255 };
            page->m_fields->m_dTrophy = CCSprite::createWithSpriteFrameName("trophy_9.png"_spr);
            page->m_fields->m_dParticleBase = Particles::trophyGeneral(page->m_fields->m_dColor, 13);
            page->m_fields->m_dParticleExtra = Particles::topTrophy0(30);
            page->m_fields->m_dParticleExtra2 = Particles::topTrophySparkles(4);
        }
    }

    void moonSetValues(int pos) {
        ERProfilePage* page = this;
        if (pos > 1500) {
            page->m_fields->m_mColor = { 10, 10, 10 };
            page->m_fields->m_mTrophy = CCSprite::createWithSpriteFrameName("trophy_0.png"_spr);
            page->m_fields->m_mParticleBase = nullptr;
            page->m_fields->m_mParticleExtra = nullptr;
            page->m_fields->m_mParticleExtra2 = nullptr;
        } else if (pos > 1000) {
            page->m_fields->m_mColor = { 204, 75, 0 };
            page->m_fields->m_mTrophy = CCSprite::createWithSpriteFrameName("trophy_1.png"_spr);
            page->m_fields->m_mParticleBase = Particles::trophyGeneral(page->m_fields->m_mColor, 5);
            page->m_fields->m_mParticleExtra = nullptr;
            page->m_fields->m_mParticleExtra2 = nullptr;
        } else if (pos > 750) {
            page->m_fields->m_mColor = { 185, 0, 179 };
            page->m_fields->m_mTrophy = CCSprite::createWithSpriteFrameName("trophy_2.png"_spr);
            page->m_fields->m_mParticleBase = Particles::trophyGeneral(page->m_fields->m_mColor, 6);
            page->m_fields->m_mParticleExtra = nullptr;
            page->m_fields->m_mParticleExtra2 = nullptr;
        } else if (pos > 500) {
            page->m_fields->m_mColor = { 26, 160, 255 };
            page->m_fields->m_mTrophy = CCSprite::createWithSpriteFrameName("trophy_3.png"_spr);
            page->m_fields->m_mParticleBase = Particles::trophyGeneral(page->m_fields->m_mColor, 7);
            page->m_fields->m_mParticleExtra = nullptr;
            page->m_fields->m_mParticleExtra2 = nullptr;
        } else if (pos > 250) {
            page->m_fields->m_mColor = { 23, 196, 0 };
            page->m_fields->m_mTrophy = CCSprite::createWithSpriteFrameName("trophy_4.png"_spr);
            page->m_fields->m_mParticleBase = Particles::trophyGeneral(page->m_fields->m_mColor, 8);
            page->m_fields->m_mParticleExtra = nullptr;
            page->m_fields->m_mParticleExtra2 = nullptr;
        } else if (pos > 100) {
            page->m_fields->m_mColor = { 220, 7, 68 };
            page->m_fields->m_mTrophy = CCSprite::createWithSpriteFrameName("trophy_5.png"_spr);
            page->m_fields->m_mParticleBase = Particles::trophyGeneral(page->m_fields->m_mColor, 9);
            page->m_fields->m_mParticleExtra = nullptr;
            page->m_fields->m_mParticleExtra2 = nullptr;
        } else if (pos > 50) {
            page->m_fields->m_mColor = { 255, 157, 0 };
            page->m_fields->m_mTrophy = CCSprite::createWithSpriteFrameName("trophy_6.png"_spr);
            page->m_fields->m_mParticleBase = Particles::trophyGeneral(page->m_fields->m_mColor, 10);
            page->m_fields->m_mParticleExtra = Particles::topTrophy0(15);
            page->m_fields->m_mParticleExtra2 = nullptr;
        } else if (pos > 10) {
            page->m_fields->m_mColor = { 255, 255, 255 };
            page->m_fields->m_mTrophy = CCSprite::createWithSpriteFrameName("trophy_7.png"_spr);
            page->m_fields->m_mParticleBase = Particles::trophyGeneral(page->m_fields->m_mColor, 11);
            page->m_fields->m_mParticleExtra = Particles::topTrophy0(20);
            page->m_fields->m_mParticleExtra2 = Particles::topTrophySparkles(2);
        } else if (pos > 1) {
            page->m_fields->m_mColor = { 255, 221, 0 };
            page->m_fields->m_mTrophy = CCSprite::createWithSpriteFrameName("trophy_8.png"_spr);
            page->m_fields->m_mParticleBase = Particles::trophyGeneral(page->m_fields->m_mColor, 12);
            page->m_fields->m_mParticleExtra = Particles::topTrophy0(25);
            page->m_fields->m_mParticleExtra2 = Particles::topTrophySparkles(3);
        } else {
            page->m_fields->m_mColor = { 0, 255, 255 };
            page->m_fields->m_mTrophy = CCSprite::createWithSpriteFrameName("trophy_9.png"_spr);
            page->m_fields->m_mParticleBase = Particles::trophyGeneral(page->m_fields->m_mColor, 13);
            page->m_fields->m_mParticleExtra = Particles::topTrophy0(30);
            page->m_fields->m_mParticleExtra2 = Particles::topTrophySparkles(4);
        }
    }


    void loadPageFromUserInfo(GJUserScore* score) {
        ProfilePage::loadPageFromUserInfo(score);

        bool creatorExists = false;
        bool globalExists = false;
        bool moonsExists = false;
        bool demonsExists = false;

        if (this->m_mainLayer->getChildByID("global-rank-icon") != nullptr) {
            this->m_mainLayer->getChildByID("global-rank-icon")->setVisible(false);
            this->m_mainLayer->getChildByID("global-rank-hint")->setVisible(false);
            this->m_mainLayer->getChildByID("global-rank-label")->setVisible(false);
        }
        if (this->m_mainLayer->getChildByID("my-stuff-hint") != nullptr) {
            this->m_mainLayer->getChildByID("my-stuff-hint")->setVisible(false);
        }
        
        auto btn = typeinfo_cast<CCMenuItemSpriteExtra*>(this->m_mainLayer->getChildByIDRecursive("cvolton.betterinfo/leaderboard-button"));
        if (btn != nullptr) {
            btn->removeFromParent();
            auto leftMenu = this->m_mainLayer->getChildByID("left-menu");
            leftMenu->addChild(btn);
            leftMenu->updateLayout();
        }

        if (m_fields->m_hasBeenOpened) {
            return;
        }

        m_fields->m_hasBeenOpened = true;

        auto winSize = CCDirector::sharedDirector()->getWinSize();
        auto layerSize = this->m_mainLayer->getContentSize();
        ccBlendFunc blending = {GL_ONE, GL_ONE};
        int userID = this->m_score->m_userID;
        auto layer = this->m_mainLayer;
        CCSize labelSize = {190, 55};

        auto layerBG = this->m_mainLayer->getChildByID("background");
        auto tempPos = layerBG->getPosition();
        float leftLabelX = convertToWorldSpace(tempPos).x - (layerBG->getContentSize().width / 2.f) + 77.f;
        float rightLabelX = winSize.width - leftLabelX;
        

        int creatorPosition = Manager::getPosition(userID);
        int demonsPosition = Manager::getPositionDemons(userID);
        int moonsPosition = Manager::getPositionMoons(userID);

        // Shrink Floor Line
        auto floorLine = static_cast<CCSprite*>(layer->getChildByID("floor-line"));
        floorLine->setScaleX(0.5f);

        auto creatorBG = CCScale9Sprite::create("square02_001.png");
        auto globalBG = CCScale9Sprite::create("square02_001.png");
        auto demonBG = CCScale9Sprite::create("square02_001.png");
        auto moonBG = CCScale9Sprite::create("square02_001.png");

        if (creatorPosition != -1) {
            creatorExists = true;
            std::string creatorString = "# " + std::to_string(creatorPosition);
            creatorSetValues(creatorPosition);
            
            auto creatorColor = this->m_fields->m_cColor;
            
            creatorBG->setContentSize(labelSize);
            creatorBG->setZOrder(9);
            creatorBG->setPosition({rightLabelX, layerSize.height * 0.845f});
            creatorBG->setOpacity(60);
            creatorBG->setID("creator-rank-tab"_spr);
            auto creatorBGScale = creatorBG->getContentSize();

            auto creatorBorder = CCScale9Sprite::createWithSpriteFrameName("border.png"_spr);
            creatorBorder->setContentSize(labelSize);
            creatorBorder->setZOrder(10);
            creatorBorder->setPosition(creatorBGScale / 2);
            creatorBorder->setOpacity(200);
            creatorBorder->setColor(creatorColor);
            creatorBorder->setScaleX(-1);
            creatorBG->addChild(creatorBorder);
            
            auto crTitle = CCLabelBMFont::create("Creator Rank:", "gjFont05.fnt");
            creatorBG->addChild(crTitle);
            crTitle->setScale(0.7f);
            crTitle->setZOrder(12);
            crTitle->setPosition({labelSize.width * (1-0.655f), labelSize.height * 0.69f});
            crTitle->setBlendFunc(blending);
            crTitle->setOpacity(255);

            auto crRank = CCLabelBMFont::create(creatorString.c_str(), "gjFont05.fnt");
            creatorBG->addChild(crRank);
            crRank->setScale(0.7f);
            crRank->setZOrder(12);
            crRank->setPosition({labelSize.width * (1-0.655f), labelSize.height * 0.26f});
            crRank->setBlendFunc(blending);
            crRank->setOpacity(255);

            auto crSprite = this->m_fields->m_cTrophy;
            creatorBG->addChild(crSprite);
            crSprite->setZOrder(12);
            crSprite->setPosition({labelSize.width * (1-0.19f), labelSize.height * 0.5f});
            crSprite->setScale(1.5f);
            crSprite->setOpacity(255);

            auto crParticles = this->m_fields->m_cParticleBase;
            if (crParticles != nullptr) {
                creatorBG->addChild(crParticles);
                crParticles->setPosition({labelSize.width * (1-0.19f), labelSize.height * 0.2f});
                crParticles->setZOrder(20);
            }
            

            auto crParticles2 = this->m_fields->m_cParticleExtra;
            if (crParticles2 != nullptr) {
                creatorBG->addChild(crParticles2);
                crParticles2->setPosition({labelSize.width * (1-0.19f), labelSize.height * 0.5f});
                crParticles2->setZOrder(11);
            }
            

            auto crParticles3 = this->m_fields->m_cParticleExtra2;
            if (crParticles3 != nullptr) {
                creatorBG->addChild(crParticles3);
                crParticles3->setPosition({labelSize.width * (1-0.19f), labelSize.height * 0.6f});
                crParticles3->setZOrder(20);
            }
            

            auto crCP = CCSprite::createWithSpriteFrameName("GJ_hammerIcon_001.png");
            creatorBG->addChild(crCP);
            crCP->setZOrder(13);
            crCP->setScale(0.55f);
            crCP->setPosition({labelSize.width * (1-0.19f), labelSize.height * 0.65f});

            creatorBG->setScale(0.3f);
            layer->addChild(creatorBG);

        }

        int globalPosition = score->m_globalRank;
        if (globalPosition > 0) {
            globalExists = true;
            std::string globalString = "# " + std::to_string(globalPosition);
            globalSetValues(globalPosition);
            auto globalColor = this->m_fields->m_gColor;
            
            globalBG->setContentSize(labelSize);
            globalBG->setZOrder(9);
            globalBG->setPosition({leftLabelX, layerSize.height * 0.9f});
            globalBG->setOpacity(60);
            globalBG->setID("global-rank-tab"_spr);
            auto globalBGScale = globalBG->getContentSize();

            auto globalBorder = CCScale9Sprite::createWithSpriteFrameName("border.png"_spr);
            globalBorder->setContentSize(labelSize);
            globalBorder->setZOrder(10);
            globalBorder->setPosition(globalBGScale / 2);
            globalBorder->setOpacity(200);
            globalBorder->setColor(globalColor);
            globalBG->addChild(globalBorder);
            
            auto grTitle = CCLabelBMFont::create("Global Rank:", "gjFont05.fnt");
            globalBG->addChild(grTitle);
            grTitle->setScale(0.7f);
            grTitle->setZOrder(12);
            grTitle->setPosition({labelSize.width * 0.655f, labelSize.height * 0.69f});
            grTitle->setBlendFunc(blending);
            grTitle->setOpacity(255);

            auto grRank = CCLabelBMFont::create(globalString.c_str(), "gjFont05.fnt");
            globalBG->addChild(grRank);
            grRank->setScale(0.7f);
            grRank->setZOrder(12);
            grRank->setPosition({labelSize.width * 0.655f, labelSize.height * 0.26f});
            grRank->setBlendFunc(blending);
            grRank->setOpacity(255);

            auto grSprite = this->m_fields->m_gTrophy;
            globalBG->addChild(grSprite);
            grSprite->setZOrder(12);
            grSprite->setPosition({labelSize.width * 0.19f, labelSize.height * 0.5f});
            grSprite->setScale(1.5f);
            grSprite->setOpacity(255);

            auto grStar = CCSprite::createWithSpriteFrameName("GJ_starsIcon_001.png");
            globalBG->addChild(grStar);
            grStar->setZOrder(13);
            grStar->setScale(0.55f);
            grStar->setPosition({labelSize.width * 0.19f, labelSize.height * 0.65f});

            auto grParticles = this->m_fields->m_gParticleBase;
            if (grParticles != nullptr) {
                globalBG->addChild(grParticles);
                grParticles->setPosition({labelSize.width * 0.19f, labelSize.height * 0.2f});
                grParticles->setZOrder(20);
            }
            

            auto grParticles2 = this->m_fields->m_gParticleExtra;
            if (grParticles2 != nullptr) {
                globalBG->addChild(grParticles2);
                grParticles2->setPosition({labelSize.width * 0.19f, labelSize.height * 0.5f});
                grParticles2->setZOrder(11);
            }
            

            auto grParticles3 = this->m_fields->m_gParticleExtra2;
            if (grParticles3 != nullptr) {
                globalBG->addChild(grParticles3);
                grParticles3->setPosition({labelSize.width * 0.19f, labelSize.height * 0.6f});
                grParticles3->setZOrder(20);
            }


            globalBG->setScale(0.3f);

            layer->addChild(globalBG);
        }


        if (demonsPosition != -1) {
            demonsExists = true;
            std::string demonsString = "# " + std::to_string(demonsPosition);
            demonSetValues(demonsPosition);
            
            auto demonColor = this->m_fields->m_dColor;
            
            demonBG->setContentSize(labelSize);
            demonBG->setZOrder(9);
            demonBG->setPosition({rightLabelX, layerSize.height * 0.9f});
            demonBG->setOpacity(60);
            demonBG->setID("demon-rank-tab"_spr);
            auto demonBGScale = demonBG->getContentSize();

            auto demonBorder = CCScale9Sprite::createWithSpriteFrameName("border.png"_spr);
            demonBorder->setContentSize(labelSize);
            demonBorder->setZOrder(10);
            demonBorder->setPosition(demonBGScale / 2);
            demonBorder->setOpacity(200);
            demonBorder->setColor(demonColor);
            demonBorder->setScaleX(-1);
            demonBG->addChild(demonBorder);
            
            auto drTitle = CCLabelBMFont::create("Demons Rank:", "gjFont05.fnt");
            demonBG->addChild(drTitle);
            drTitle->setScale(0.7f);
            drTitle->setZOrder(12);
            drTitle->setPosition({labelSize.width * (1-0.655f), labelSize.height * 0.69f});
            drTitle->setBlendFunc(blending);
            drTitle->setOpacity(255);

            auto drRank = CCLabelBMFont::create(demonsString.c_str(), "gjFont05.fnt");
            demonBG->addChild(drRank);
            drRank->setScale(0.7f);
            drRank->setZOrder(12);
            drRank->setPosition({labelSize.width * (1-0.655f), labelSize.height * 0.26f});
            drRank->setBlendFunc(blending);
            drRank->setOpacity(255);

            auto drSprite = this->m_fields->m_dTrophy;
            demonBG->addChild(drSprite);
            drSprite->setZOrder(12);
            drSprite->setPosition({labelSize.width * (1-0.19f), labelSize.height * 0.5f});
            drSprite->setScale(1.5f);
            drSprite->setOpacity(255);

            auto drParticles = this->m_fields->m_dParticleBase;
            if (drParticles != nullptr) {
                demonBG->addChild(drParticles);
                drParticles->setPosition({labelSize.width * (1-0.19f), labelSize.height * 0.2f});
                drParticles->setZOrder(20);
            }
            

            auto drParticles2 = this->m_fields->m_dParticleExtra;
            if (drParticles2 != nullptr) {
                demonBG->addChild(drParticles2);
                drParticles2->setPosition({labelSize.width * (1-0.19f), labelSize.height * 0.5f});
                drParticles2->setZOrder(11);
            }
            

            auto drParticles3 = this->m_fields->m_dParticleExtra2;
            if (drParticles3 != nullptr) {
                demonBG->addChild(drParticles3);
                drParticles3->setPosition({labelSize.width * (1-0.19f), labelSize.height * 0.6f});
                drParticles3->setZOrder(20);
            }
            
            auto drDM = CCSprite::createWithSpriteFrameName("GJ_demonIcon_001.png");
            demonBG->addChild(drDM);
            drDM->setZOrder(13);
            drDM->setScale(0.55f);
            drDM->setPosition({labelSize.width * (1-0.19f), labelSize.height * 0.65f});

            demonBG->setScale(0.3f);
            layer->addChild(demonBG);

        }


        if (moonsPosition > 0) {
            moonsExists = true;
            std::string moonsString = "# " + std::to_string(moonsPosition);
            moonSetValues(moonsPosition);
            auto moonColor = this->m_fields->m_mColor;
            
            moonBG->setContentSize(labelSize);
            moonBG->setZOrder(9);
            moonBG->setPosition({leftLabelX, layerSize.height * 0.845f});
            moonBG->setOpacity(60);
            moonBG->setID("moons-rank-tab"_spr);
            auto moonBGScale = moonBG->getContentSize();

            auto moonBorder = CCScale9Sprite::createWithSpriteFrameName("border.png"_spr);
            moonBorder->setContentSize(labelSize);
            moonBorder->setZOrder(10);
            moonBorder->setPosition(moonBGScale / 2);
            moonBorder->setOpacity(200);
            moonBorder->setColor(moonColor);
            moonBG->addChild(moonBorder);
            
            auto mrTitle = CCLabelBMFont::create("Lunar Rank:", "gjFont05.fnt");
            moonBG->addChild(mrTitle);
            mrTitle->setScale(0.7f);
            mrTitle->setZOrder(12);
            mrTitle->setPosition({labelSize.width * 0.655f, labelSize.height * 0.69f});
            mrTitle->setBlendFunc(blending);
            mrTitle->setOpacity(255);

            auto mrRank = CCLabelBMFont::create(moonsString.c_str(), "gjFont05.fnt");
            moonBG->addChild(mrRank);
            mrRank->setScale(0.7f);
            mrRank->setZOrder(12);
            mrRank->setPosition({labelSize.width * 0.655f, labelSize.height * 0.26f});
            mrRank->setBlendFunc(blending);
            mrRank->setOpacity(255);

            auto mrSprite = this->m_fields->m_mTrophy;
            moonBG->addChild(mrSprite);
            mrSprite->setZOrder(12);
            mrSprite->setPosition({labelSize.width * 0.19f, labelSize.height * 0.5f});
            mrSprite->setScale(1.5f);
            mrSprite->setOpacity(255);

            auto mrMoon = CCSprite::createWithSpriteFrameName("GJ_moonsIcon_001.png");
            moonBG->addChild(mrMoon);
            mrMoon->setZOrder(13);
            mrMoon->setScale(0.55f);
            mrMoon->setPosition({labelSize.width * 0.19f, labelSize.height * 0.65f});

            auto mrParticles = this->m_fields->m_mParticleBase;
            if (mrParticles != nullptr) {
                moonBG->addChild(mrParticles);
                mrParticles->setPosition({labelSize.width * 0.19f, labelSize.height * 0.2f});
                mrParticles->setZOrder(20);
            }
            

            auto mrParticles2 = this->m_fields->m_mParticleExtra;
            if (mrParticles2 != nullptr) {
                moonBG->addChild(mrParticles2);
                mrParticles2->setPosition({labelSize.width * 0.19f, labelSize.height * 0.5f});
                mrParticles2->setZOrder(11);
            }
            

            auto mrParticles3 = this->m_fields->m_mParticleExtra2;
            if (mrParticles3 != nullptr) {
                moonBG->addChild(mrParticles3);
                mrParticles3->setPosition({labelSize.width * 0.19f, labelSize.height * 0.6f});
                mrParticles3->setZOrder(20);
            }


            moonBG->setScale(0.3f);

            layer->addChild(moonBG);
        }

        if (!demonsExists && creatorExists) {
            creatorBG->setPositionY(layerSize.height * 0.9f);
        }

        if (!globalExists && moonsExists) {
            moonBG->setPositionY(layerSize.height * 0.9f);
        }

        // last moves bc im too lazy lol
        float offsetY = 1.f;
        creatorBG->setPositionY(creatorBG->getPositionY() + offsetY);
        demonBG->setPositionY(demonBG->getPositionY() + offsetY);
        globalBG->setPositionY(globalBG->getPositionY() + offsetY);
        moonBG->setPositionY(moonBG->getPositionY() + offsetY);
    }
};