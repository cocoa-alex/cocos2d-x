#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"
#include "System.h"

using namespace cocos2d;
using namespace CocosDenshion;

CCScene* HelloWorld::scene()
{
    CCScene *scene = CCScene::create();
    
    HelloWorld *layer = HelloWorld::create();

    scene->addChild(layer);


    return scene;
}


bool HelloWorld::init()
{

    // 1. super init first
    if ( !CCLayer::init() )
    {
        return false;
    }
    CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
                                        "CloseNormal.png",
                                        "CloseSelected.png",
                                        this,
                                        menu_selector(HelloWorld::menuCloseCallback) );
    pCloseItem->setPosition( ccp(CCDirector::sharedDirector()->getWinSize().width - 20, 20) );

    // create menu, it's an autorelease object
    CCMenu* pMenu = CCMenu::create(pCloseItem, NULL);
    pMenu->setPosition( CCPointZero );
    this->addChild(pMenu, 1);

    System::init();
    
    CCSpriteFrameCache* cache=CCSpriteFrameCache::sharedSpriteFrameCache();
    if (System::IsPad()) {
        cache->addSpriteFramesWithFile("image.plist");
    } else {
        cache->addSpriteFramesWithFile("image-hd.plist");
    }
    
    
    CCSprite* sprite=CCSprite::createWithSpriteFrameName("background.png");
    
    CCSize size=CCDirector::sharedDirector()->getWinSize();
    
    sprite->setPosition(ccp(size.width/2,size.height/2 ));
    
    this->addChild(sprite,0);
    
    CCSprite* sPrite=CCSprite::createWithSpriteFrameName("logo.png");
    
    sPrite->setPosition(ccp(size.width/2, size.height/2));
    
    this->addChild(sPrite,1);
    
    return true;
}

void HelloWorld::menuCloseCallback(CCObject* pSender)
{
    CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
