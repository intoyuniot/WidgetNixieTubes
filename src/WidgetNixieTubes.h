#ifndef WIDGET_NIXIETUBES_H_
#define WIDGET_NIXIETUBES_H_

#include "application.h"

class WidgetNixieTubes : public WidgetBaseClass
{
    public:
        WidgetNixieTubes(uint8_t ucItem = 0);
        ~WidgetNixieTubes();
        void begin(void (*UserCallBack)(void) = NULL);
        void displayNumber(uint16_t ucVal);
        void displayNumber(float ucVal);

    private:
        char pDataStateTopic[64];
        uint8_t _Item = 0;

        void (*_EventCb)(void);
        void widgetBaseCallBack(uint8_t *payload, uint32_t len);
};

#endif
