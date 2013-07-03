//
//  CardControl.cpp
//  cocos2d-xDemo
//
//  Created by geek on 13-6-28.
//
//

#include "CardControl.h"
#include "cocos2d.h"

using namespace cocos2d;

CardControl::CardControl()
{
    m_bDisplay=false;
    m_bHorizontal=true;
    m_bPositively=false;
    
    m_dwCardHSpace=10;
    m_dwCardVSpace=9;
    m_dwShootAltitude=10;
    
    m_XCollocateMode=enXCenter;
    m_YCollocateMode=enYCenter;
    m_BenchmarkPos.setPoint(0, 0);
    
    m_dwCurrentIndex=0xFFFFFFFF;

    return;
};

CardControl::~CardControl()
{
};

void CardControl::SetDirection(bool bHorizontal)
{
    if (m_bHorizontal==bHorizontal) return;
    
    m_bHorizontal=bHorizontal;
    
    return;
}

void CardControl::ShootAllCard(bool bShoot)
{
    bool bRectify=false;
    
    tagCardItem* pCardItem=NULL;
    
    int dwCardCount=(int)m_CardDataItem->count();
    
    m_CardDataItem=new CCArray(dwCardCount);
    
    for (int i=0; i<dwCardCount; i++) {
        
        pCardItem=&m_CardDataItem[i];
    }
    
    
}
