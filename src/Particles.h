#pragma once
#include <Geode/Bindings.hpp>

using namespace geode::prelude;

class Particles {
    public:

        inline static CCParticleSystem* trophyGeneral(ccColor3B color, int numParticles) {

            auto dict = CCDictionary::createWithContentsOfFileThreadSafe("dragEffect.plist");
            float col_r = color.r / 255.f;
            float col_g = color.g / 255.f;
            float col_b = color.b / 255.f;

            dict->setObject(CCString::create("0"), "emitterType");
            dict->setObject(CCString::create("-1"), "duration");
            dict->setObject(CCString::createWithFormat("%i", numParticles), "maxParticles");
            dict->setObject(CCString::create("2"), "particleLifespan");
            dict->setObject(CCString::create("0.5"), "particleLifespanVariance");
            dict->setObject(CCString::create("90"), "angle");
            dict->setObject(CCString::create("0"), "angleVariance");
            dict->setObject(CCString::create("0"), "sourcePositionx");
            dict->setObject(CCString::create("0"), "sourcePositiony");
            dict->setObject(CCString::create("14"), "sourcePositionVariancex");
            dict->setObject(CCString::create("2"), "sourcePositionVariancey");
            dict->setObject(CCString::create("4"), "startParticleSize");
            dict->setObject(CCString::create("1"), "finishParticleSize");
            dict->setObject(CCString::create("1"), "startParticleSizeVariance");
            dict->setObject(CCString::create("8"), "speed");
            dict->setObject(CCString::create("4"), "speedVariance");
            dict->setObject(CCString::create("0"), "gravityx");
            dict->setObject(CCString::create("0"), "gravityy");
            dict->setObject(CCString::createWithFormat("%f", col_r), "startColorRed");
            dict->setObject(CCString::createWithFormat("%f", col_g), "startColorGreen");
            dict->setObject(CCString::createWithFormat("%f", col_b), "startColorBlue");
            dict->setObject(CCString::create("1"), "startColorAlpha");
            dict->setObject(CCString::create("0"), "startColorVarianceRed");
            dict->setObject(CCString::create("0"), "startColorVarianceBlue");
            dict->setObject(CCString::create("0"), "startColorVarianceGreen");
            dict->setObject(CCString::create("0"), "startColorVarianceAlpha");
            dict->setObject(CCString::createWithFormat("%f", col_r), "finishColorRed");
            dict->setObject(CCString::createWithFormat("%f", col_g), "finishColorGreen");
            dict->setObject(CCString::createWithFormat("%f", col_b), "finishColorBlue");
            dict->setObject(CCString::create("0"), "finishColorAlpha");
            dict->setObject(CCString::create("0"), "finishColorVarianceRed");
            dict->setObject(CCString::create("0"), "finishColorVarianceBlue");
            dict->setObject(CCString::create("0"), "finishColorVarianceGreen");
            dict->setObject(CCString::create("0"), "finishColorVarianceAlpha");

            dict->setObject(CCString::create("square.png"), "textureFileName");

            auto emitter = CCParticleSystemQuad::create();
            emitter->initWithDictionary(dict, false);
            
            return emitter;
        }

        inline static CCParticleSystem* topTrophy0(int numParticles) {
            auto dict = CCDictionary::createWithContentsOfFileThreadSafe("dragEffect.plist");

            dict->setObject(CCString::create("1"), "emitterType");
            dict->setObject(CCString::create("-1"), "duration");
            dict->setObject(CCString::createWithFormat("%i", numParticles), "maxParticles");
            dict->setObject(CCString::create("1.5"), "particleLifespan");
            dict->setObject(CCString::create("0.5"), "particleLifespanVariance");
            dict->setObject(CCString::create("90"), "angle");
            dict->setObject(CCString::create("180"), "angleVariance");
            dict->setObject(CCString::create("0"), "sourcePositionx");
            dict->setObject(CCString::create("0"), "sourcePositiony");
            dict->setObject(CCString::create("0"), "sourcePositionVariancex");
            dict->setObject(CCString::create("0"), "sourcePositionVariancey");
            dict->setObject(CCString::create("5"), "maxRadius");
            dict->setObject(CCString::create("40"), "minRadius");
            dict->setObject(CCString::create("4"), "startParticleSize");
            dict->setObject(CCString::create("2"), "finishParticleSize");
            dict->setObject(CCString::create("1"), "startParticleSizeVariance");
            dict->setObject(CCString::create("15"), "speed");
            dict->setObject(CCString::create("8"), "speedVariance");
            dict->setObject(CCString::create("0"), "gravityx");
            dict->setObject(CCString::create("0"), "gravityy");
            dict->setObject(CCString::create("1"), "startColorRed");
            dict->setObject(CCString::create("1"), "startColorGreen");
            dict->setObject(CCString::create("1"), "startColorBlue");
            dict->setObject(CCString::create("0.5"), "startColorAlpha");
            dict->setObject(CCString::create("0.6"), "startColorVarianceRed");
            dict->setObject(CCString::create("0.6"), "startColorVarianceBlue");
            dict->setObject(CCString::create("0.6"), "startColorVarianceGreen");
            dict->setObject(CCString::create("0"), "startColorVarianceAlpha");
            dict->setObject(CCString::create("1"), "finishColorRed");
            dict->setObject(CCString::create("1"), "finishColorGreen");
            dict->setObject(CCString::create("1"), "finishColorBlue");
            dict->setObject(CCString::create("0"), "finishColorAlpha");
            dict->setObject(CCString::create("0.3"), "finishColorVarianceRed");
            dict->setObject(CCString::create("0.3"), "finishColorVarianceBlue");
            dict->setObject(CCString::create("0.3"), "finishColorVarianceGreen");
            dict->setObject(CCString::create("0"), "finishColorVarianceAlpha");

            dict->setObject(CCString::create("square.png"), "textureFileName");

            auto emitter = CCParticleSystemQuad::create();
            emitter->initWithDictionary(dict, false);
            
            return emitter;
        }

        inline static CCParticleSystem* topTrophySparkles(int numParticles) {
            auto dict = CCDictionary::createWithContentsOfFileThreadSafe("dragEffect.plist");

            dict->setObject(CCString::create("0"), "emitterType");
            dict->setObject(CCString::create("-1"), "duration");
            dict->setObject(CCString::createWithFormat("%i", numParticles), "maxParticles");
            dict->setObject(CCString::create("1.5"), "particleLifespan");
            dict->setObject(CCString::create("0.5"), "particleLifespanVariance");
            dict->setObject(CCString::create("0"), "angle");
            dict->setObject(CCString::create("0"), "angleVariance");
            dict->setObject(CCString::create("0"), "sourcePositionx");
            dict->setObject(CCString::create("0"), "sourcePositiony");
            dict->setObject(CCString::create("10"), "sourcePositionVariancex");
            dict->setObject(CCString::create("10"), "sourcePositionVariancey");
            dict->setObject(CCString::create("0"), "maxRadius");
            dict->setObject(CCString::create("0"), "minRadius");
            dict->setObject(CCString::create("30"), "startParticleSize");
            dict->setObject(CCString::create("5"), "finishParticleSize");
            dict->setObject(CCString::create("10"), "startParticleSizeVariance");
            dict->setObject(CCString::create("0"), "speed");
            dict->setObject(CCString::create("0"), "speedVariance");
            dict->setObject(CCString::create("0"), "gravityx");
            dict->setObject(CCString::create("0"), "gravityy");
            dict->setObject(CCString::create("1"), "startColorRed");
            dict->setObject(CCString::create("1"), "startColorGreen");
            dict->setObject(CCString::create("1"), "startColorBlue");
            dict->setObject(CCString::create("0.6"), "startColorAlpha");
            dict->setObject(CCString::create("0"), "startColorVarianceRed");
            dict->setObject(CCString::create("0"), "startColorVarianceBlue");
            dict->setObject(CCString::create("0"), "startColorVarianceGreen");
            dict->setObject(CCString::create("0"), "startColorVarianceAlpha");
            dict->setObject(CCString::create("1"), "finishColorRed");
            dict->setObject(CCString::create("1"), "finishColorGreen");
            dict->setObject(CCString::create("1"), "finishColorBlue");
            dict->setObject(CCString::create("0"), "finishColorAlpha");
            dict->setObject(CCString::create("0"), "finishColorVarianceRed");
            dict->setObject(CCString::create("0"), "finishColorVarianceBlue");
            dict->setObject(CCString::create("0"), "finishColorVarianceGreen");
            dict->setObject(CCString::create("0"), "finishColorVarianceAlpha");

            dict->setObject(CCString::create("270"), "rotationEndVariance");

            dict->setObject(CCString::create("sun.png"), "textureFileName");

            auto emitter = CCParticleSystemQuad::create();
            emitter->initWithDictionary(dict, false);
            
            return emitter;
        }
};