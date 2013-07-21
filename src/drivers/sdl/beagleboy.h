#ifndef __BEAGLEBOY_H__
#define __BEAGLEBOY_H__

extern int bb_a;
extern int bb_b;
extern int bb_joy_x;
extern int bb_joy_y;

void bb_init(void);
void bb_close(void);
void bb_refresh(void);
void bb_cal(void);
void bb_load_cal(void);

#endif
