#include "WidgetNixieTubes.h"


WidgetNixieTubes::WidgetNixieTubes(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataStateTopic,0,sizeof(pDataStateTopic));
    sprintf(pDataStateTopic,"channel/nixieTubes_%d/data/state",_Item);
}

WidgetNixieTubes::~WidgetNixieTubes()
{

}

void WidgetNixieTubes::begin(void (*UserCallBack)(void))
{
}


void WidgetNixieTubes::displayNumber(uint16_t ucVal)
{
    IntoRobot.publish(pDataStateTopic,ucVal);
}

void WidgetNixieTubes::displayNumber(float ucVal)
{
    IntoRobot.publish(pDataStateTopic,ucVal);
}


void WidgetNixieTubes::widgetBaseCallBack(uint8_t *payload, uint32_t len)
{
}

