//
//  BBHandleLayer.cpp
//  puzzle
//
//  Created by FengZi on 14-1-22.
//
//


#include "BBHandleLayer.h"
#include "GameCenterApi.h"
#include "BBGameDataManager.h"
#include "BBBlockSprite.h"
#include "BBAudio.h"

BBHandleLayer::BBHandleLayer()
{
    
}

BBHandleLayer::~BBHandleLayer()
{
}

bool BBHandleLayer::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    initData();
    
    initSprite();
    
    return true;
}

#pragma mark - initData
void BBHandleLayer::initData()
{
    m_visibleSize = Director::getInstance()->getVisibleSize();

    GameCenterApi::getInstance()->showAdBanner();
    
}

void BBHandleLayer::resetData()
{
    
}

#pragma mark - initSprite
void BBHandleLayer::initSprite()
{
//    BBAudio::playMusic(__String::createWithFormat("game_bg_0%d.mp3", arc4random()%6+1)->getCString());
    
//    GameCenterApi::getInstance()->initStoreKit();
    
}