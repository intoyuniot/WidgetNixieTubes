/*
************************************************************************
* 作者:  IntoRobot Team    
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
数码管显示

所需器件:

*/

/*该头文件引用由IntoRobot自动添加.*/
#include <WidgetNixieTubes.h>

WidgetNixieTubes nixie;

uint16_t nub = 1008;

void setup() 
{
// put your setup code here, to run once.
    nixie.begin();
}

void loop() 
{
// put your main code here, to run repeatedly.
     nixie.displayNumber(nub);
     delay(2000);
}
