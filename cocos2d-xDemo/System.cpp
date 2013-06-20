//
//  System.cpp
//  cocos2d-xDemo
//
//  Created by geek on 13-6-20.
//
//

#include "System.h"
#import "Foundation/Foundation.h"

bool System::mIsPad=false;

void System::init(){
    mIsPad=UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad;
    
}

bool System::IsPad(){
    return mIsPad;
}