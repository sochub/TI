#ifndef __SWM181_SLEEP_H__
#define __SWM181_SLEEP_H__

#if   defined ( __CC_ARM )

__asm void EnterSleepMode(void);
__asm void EnterStopMode(void);

#elif defined ( __ICCARM__ )

#endif


#endif //__SWM181_SLEEP_H__
