#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"
#include "System.h"
#include "MainScene.h"

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
    CCSize size=CCDirector::sharedDirector()->getWinSize();
    CCSpriteFrameCache* cache=CCSpriteFrameCache::sharedSpriteFrameCache();
    cache->addSpriteFramesWithFile("image-hd.plist");
    
    CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
                                                          "CloseNormal.png",
                                                          "CloseSelected.png",
                                                          this,
                                                          menu_selector(HelloWorld::menuCloseCallback) );
    pCloseItem->setPosition( ccp(CCDirector::sharedDirector()->getWinSize().width - 20, 20) );
    
    CCMenuItemImage *pStartItem = CCMenuItemImage::create(
                                                          "btnLogin.png",
                                                          "btnLoging.png",
                                                          this,
                                                          menu_selector(HelloWorld::menuStartGame) );
    pStartItem->setPosition( ccp(size.width/2,size.height/2-200) );
    
    // create menu, it's an autorelease object
    CCMenu* pMenu = CCMenu::create(pCloseItem, pStartItem,NULL);
    pMenu->setPosition( CCPointZero );
    this->addChild(pMenu, 1);
    
    	
    CCSprite* sPrite=CCSprite::createWithSpriteFrameName("logo.png");
    sPrite->setPosition(ccp(size.width/2, size.height/2));
    this->addChild(sPrite,1);
    
    CCSprite* sBack=CCSprite::createWithSpriteFrameName("background.png");
    sBack->setPosition(ccp(size.width/2, size.height/2));
    
    this->addChild(sBack,0);
    

    
    return true;
}

void HelloWorld::menuCloseCallback(CCObject* pSender)
{
    CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}

void HelloWorld::menuStartGame(CCObject* pSender)
{
    CCDirector::sharedDirector()->replaceScene(Main::scene());
}