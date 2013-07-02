//
//  CardControl.h
//  cocos2d-xDemo
//
//  Created by geek on 13-6-28.
//
//

#ifndef __cocos2d_xDemo__CardControl__
#define __cocos2d_xDemo__CardControl__

#include <iostream>
#include "cocos2d.h"
//X arrangement
enum enXCollocateMode
{
    enXLeft,
    enXCenter,
    enXRight
};

//Y arrangement
enum enYCollocateMode
{
    enYTop,
    enYCenter,    enYBotton
};

//puker stuct
struct tagCardItem
{
    bool bShoot;
    int  bCardData;
};

class CardControl:public cocos2d::CCLayer,cocos2d::CCPoint,cocos2d::CCArray,cocos2d::CCSize,cocos2d::CCSprite
{
public:
    CardControl();
    ~ CardControl();
    
protected:
    bool                m_bDisplay;        //display flag
    bool                m_bHorizontal;     //horizontal flag
    bool                m_bPositively;     //response flag
    
    int                 m_dwCardHSpace;     //horizontal space
    int                 m_dwCardVSpace;     //vertical space
    int                 m_dwShootAltitude;  //bounce height
    int                 m_dwCurrentIndex;   //click index
    
    CCPoint             m_BenchmarkPos;     //benchmark position
    enXCollocateMode    m_XCollocateMode;   //display mode
    enYCollocateMode    m_YCollocateMode;   //display mode
    
    CCArray*            m_CardDataItem;     //card data
    CCSize              m_CardSize;         //card size
    CCSprite            m_ImageCard;        //card image
    
public:
    void ShootAllCard(bool bShoot);
    
    void SetDisplayFlag(bool bDisplay);
    
    void SetDirection(bool bHorizontal);
    
    void SetPosively(bool bPositively);
    
    void SetCardSpace(int dwCardHSpace,int dwCardVSpace,int dwShootAltitude);
    
    void SetBenchmarkPos(int nXPos,int nYPos,enXCollocateMode XCollocateMode,enYCollocateMode YCollorcateMode);
    
    void SetBenchmarkPos(const CCPoint &BenchmarkPos,enXCollocateMode XCollocateMode,enYCollocateMode YCollorcateMode);
    
    int GetCardCount();

    int GetShootCard(int bCardData[],int dwMaxCount);

    int SetCardData(const int bCardData[],int dwCardCount);

    int GetCardData(tagCardItem CardItemArrary[],int dwCardCount);

    int SetCardItem(const tagCardItem CardItemArray[],int dwCardCount);

    int SetShootCard(const int bCardData[],int dwCardCount);

    int SwitchCardPoint(const CCPoint &TouchPoint);

};
#endif /* defined(__cocos2d_xDemo__CardControl__) */
