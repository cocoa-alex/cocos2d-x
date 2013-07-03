//
//  CardControl.cpp
//  cocos2d-xDemo
//
//  Created by geek on 13-6-28.
//
//

#include "CardControl.h"
#include "cocos2d.h"
#include <stdio.h>

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
    m_BenchmarkPos.setPoint(0,0);
    
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
    
    //m_CardDataItem=CCArray::create();
    
    //m_CardDataItem->retain();
    
    int dwCardCount=(int)m_CardDataItem->count();
    
    for (int i=0; i<dwCardCount; i++) {
        
        pCardItem=(tagCardItem*)m_CardDataItem->objectAtIndex(i);
        
        if (pCardItem->bShoot!=bShoot) {
            bRectify=true;
            pCardItem->bShoot=bShoot;
        }
    }
    
    return;
    
}

void CardControl::SetDisplayFlag(bool bDisplay)
{
    if (m_bDisplay==bDisplay) return;
    
    m_bDisplay=bDisplay;
    
    return;
}

void CardControl::SetPosively(bool bPositively)
{
    m_bPositively=bPositively;
    return;
}

void CardControl::SetCardSpace(int dwCardHSpace, int dwCardVSpace, int dwShootAltitude)
{
    m_dwCardHSpace=dwCardHSpace;
    m_dwCardVSpace=dwCardVSpace;
    m_dwShootAltitude=dwShootAltitude;
    
    return;
}

void CardControl::SetBenchmarkPos(int nXPos, int nYPos, enXCollocateMode XCollocateMode, enYCollocateMode YCollorcateMode)
{
    m_BenchmarkPos.x=nXPos;
    m_BenchmarkPos.y=nYPos;
    m_XCollocateMode=XCollocateMode;
    m_YCollocateMode=YCollorcateMode;
    
    return;
}

void CardControl::SetBenchmarkPos(const cocos2d::CCPoint &BenchmarkPos, enXCollocateMode XCollocateMode, enYCollocateMode YCollorcateMode)
{
    m_BenchmarkPos=BenchmarkPos;
    m_XCollocateMode=XCollocateMode;
    m_YCollocateMode=YCollorcateMode;
    
    return;
}

int CardControl::GetCardCount()
{
    return (int)m_CardDataItem->count();
}

int CardControl::GetShootCard(int bCardData[], int dwMaxCount)
{
    int bShootCount=0;
    int dwCardCount=(int)m_CardDataItem->count();
    
    tagCardItem* pCardItem=NULL;
    
    for (int i=0; i<dwCardCount; i++) {
        pCardItem=(tagCardItem*)m_CardDataItem->objectAtIndex(i);
        
        if (pCardItem->bShoot==true) {
            bCardData[bShootCount++]=pCardItem->bCardData;
        }
    }
    return bShootCount;
}

//设置扑克
int CardControl::SetCardData(const int bCardData[], int dwCardCount)
{
    tagCardItem* pTagItem=NULL;
    m_CardDataItem=new CCArray(dwCardCount);
    for (int i=0; i<dwCardCount; i++) {
        pTagItem=(tagCardItem*)m_CardDataItem->objectAtIndex(i);
        pTagItem->bShoot=false;
        pTagItem->bCardData=bCardData[i];
    }
    
    return dwCardCount;
}

int CardControl::GetCardData(tagCardItem CardItemArrary[], int dwMaxCount)
{
    assert(dwMaxCount>=(int)m_CardDataItem->count());
    
    int dwCardCount=(int)m_CardDataItem->count();
    tagCardItem* pCardItemData=m_CardDataItem->get
    memccpy(<#void *#>, <#const void *#>, <#int#>, <#size_t#>)
}
