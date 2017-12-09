/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"

class CGeneral {
public:
    //funcs
    static float GetATanOfXY(float x, float y);
    static float GetAngleBetweenPoints(float x1, float y1, float x2, float y2);
    static int GetNodeHeadingFromVector(float x, float y);
    static float GetRadianAngleBetweenPoints(float x1, float y1, float x2, float y2);
    static float LimitAngle(float angle);
    static float LimitRadianAngle(float angle);
    // returns random int in range [min;max)
    static inline unsigned int GetRandomNumberInRange(int min, int max) {
        return static_cast<unsigned int>(min + (max - min) * (float)rand() / 32767.0f);
    }
    // returns random float in range [min;max)
    static inline float GetRandomNumberInRange(float min, float max) {
        return (min + (max - min) * (float)rand() / 32767.0f);
    }
};