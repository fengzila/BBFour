//
//  GameCenterApi.mm
//  puzzle
//
//  Created by FengZi on 14-2-21.
//
//

#include "GameCenterApi.h"

#include <iostream>
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
#include "AdBannerManager.h"
#endif

static GameCenterApi *instance = NULL;

GameCenterApi::GameCenterApi()
{
    
}

GameCenterApi::~GameCenterApi()
{
    
}

GameCenterApi* GameCenterApi::getInstance()
{
    if (!instance) {
        instance = new GameCenterApi();
    }
    return instance;
}

void GameCenterApi::showAdBanner()
{
    #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    [AdBannerManager show];
    #endif
}

void GameCenterApi::hiddenAdBanner()
{
    #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    [AdBannerManager hiden];
    #endif
}
