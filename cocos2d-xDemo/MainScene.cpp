//
//  MainScene.cpp
//  cocos2d-xDemo
//
//  Created by geek on 13-6-25.
//
//

#include "MainScene.h"
#include "cocos2d.h"

using namespace cocos2d;

CCScene* Main::scene()
{
    CCScene* scene=CCScene::create();
    
    Main* layer=Main::create();
    
    scene->addChild(layer);
    
    return scene;
};

bool Main:: init()
{
    if (!CCLayer::init())
    {
        return false;
    }
    CCSpriteFrameCache* cache=CCSpriteFrameCache::sharedSpriteFrameCache();
    
    cache->addSpriteFramesWithFile("image-hd.plist");
    
    CCSprite* sPrite=CCSprite::createWithSpriteFrameName("background.png");
    
    CCSize size=CCDirector::sharedDirector()->getWinSize();
        
    sPrite->setPosition(ccp(size.width/2, size.height/2));
    
    this->addChild(sPrite,2);
    
    CCMenuItemImage* startItem=CCMenuItemImage::create("Start.png", "Started.png", this, menu_selector(Main::meunStartGame));
    
    startItem->setPosition(ccp(size.width/2,size.height/2-200));
    
    CCMenu* menu=CCMenu::create(startItem,NULL);
    
    menu->setPosition(CCPointZero);
    
    this->addChild(menu,2);
   
        
    return true;
};

void Main::meunStartGame(CCObject* pSender)
{
    
}