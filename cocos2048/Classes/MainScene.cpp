#include "MainScene.h"
#include "Games.h"

USING_NS_CC;

cocos2d::Scene* MainScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();

    // 'layer' is an autorelease object
    auto layer = MainScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

bool MainScene::init()
{
    if (!Layer::init())
    {
        return false;
    }

    auto gametile = Label::createWithBMFont("futura-48.fnt", "2048");
    gametile->setPosition(GAME_SCREEN_WIDTH / 2, GAME_SCREEN_HIGH / 2);
    gametile->setScale(1.5f);
    this->addChild(gametile);

    auto author = Label::createWithBMFont("futura-48.fnt", "xxx 2016/1/19");
    author->setPosition(GAME_SCREEN_WIDTH / 2, GAME_SCREEN_HIGH / 4);
    author->setScale(0.8f);
    this->addChild(author);

    this->scheduleOnce(schedule_selector(MainScene::jumpToGame), 3);

    return true;
}

void MainScene::jumpToGame(float dt)
{
    log("Jump to Game");
    //Director::getInstance()->replaceScene()
}
