//
//  BBHandleLayer.h
//  puzzle
//
//  Created by FengZi on 14-1-22.
//
//

#ifndef __puzzle__BBHandleLayer__
#define __puzzle__BBHandleLayer__

#include "cocos2d.h"

USING_NS_CC;

class BBHandleLayer : public Layer
{
public:
    BBHandleLayer();
    ~BBHandleLayer();
    virtual bool init();
    CREATE_FUNC(BBHandleLayer);
    
public:
//    virtual bool        onTouchBegan(Touch *touch, Event * event);
//    virtual void        onTouchEnded(Touch *touch, Event * event);
//    virtual void        onTouchCancelled(Touch *touch, Event * event);
//    virtual void        onTouchMoved(Touch *touch, Event * event);
    
private:
    EventListenerTouchOneByOne* m_listener;
    Size                m_visibleSize;
    
private:
    void                initData();
    void                initSprite();
    void                resetData();
};

#endif /* defined(__puzzle__BBHandleLayer__) */
