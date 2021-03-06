#ifndef A7_H
#define A7_H
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xos.h>
#include <pthread.h>

#define PORTIONS_PER_PACK (7)
#define MAXWORKINGTIME (3)
// dishwasher to take 5 seconds (10 steps to show off properly)
#define DISHWASHERTIME (10)
#define DISHWASHERWAITINGTIMEUNIT (500000)
#define WAITINGTIME (300000)
#define COFFEEDRINKINGTIME (3*WAITINGTIME)
#define E_WRONGPARAMETERS (-2)

extern Display* display;
extern bool all_threads_created;
extern pthread_mutex_t cout_lock;
extern pthread_cond_t thread_cv;
extern pthread_mutex_t thread_m;
#endif // A7_H
