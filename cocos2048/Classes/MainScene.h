#ifndef __MAINE_SCENE_H__
#define __MAINE_SCENE_H__

#include "cocos2d.h"

class MainScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    void jumpToGame(float dt);

    CREATE_FUNC(MainScene);
};

#endif