//
//  MainScene.h
//  cocos2d-xDemo
//
//  Created by geek on 13-6-25.
//
//

#ifndef __cocos2d_xDemo__MainScene__
#define __cocos2d_xDemo__MainScene__

#include "cocos2d.h"

class Main:public cocos2d::CCLayer
{
public:
    virtual bool init();
    
    static cocos2d::CCScene* scene();
    
    void meunStartGame(CCObject* pSender);
    
    CREATE_FUNC(Main);
};
#endif /* defined(__cocos2d_xDemo__MainScene__) */
