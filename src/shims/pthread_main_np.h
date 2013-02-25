#ifndef __DISPATCH_SHIMS_PTHREAD_MAIN_NP__
#define __DISPATCH_SHIMS_PTHREAD_MAIN_NP__

#if !HAVE_PTHREAD_MAIN_NP
extern __attribute__ ((visibility("hidden"))) pthread_t _pthread_main;

static inline int
pthread_main_np(void)
{
	return pthread_equal(_pthread_main, pthread_self());
}
#endif /* HAVE_PTHREAD_MAIN_NP */

#endif /* __DISPATCH_SHIMS_PTHREAD_MAIN_NP__ */
