//
//  System.h
//  cocos2d-xDemo
//
//  Created by geek on 13-6-20.
//
//

#ifndef __cocos2d_xDemo__System__
#define __cocos2d_xDemo__System__

#include "cocos2d.h"

using namespace cocos2d;

class System
{
public:
    static void init();
    static bool IsPad();
    
private:
    static bool mIsPad;
};

#endif /* defined(__cocos2d_xDemo__System__) */
