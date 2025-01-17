#include "macros.h"
#include "audio_api.h"

static bool audio_null_init(void) {
    return true;
}

static int audio_null_buffered(void) {
    return 0;
}

static int audio_null_get_desired_buffered(void) {
    return 0;
}

static void audio_null_play(UNUSED const uint8_t *buf, UNUSED size_t len) {
}

#ifdef TARGET_N3DS
static void audio_null_stop(void) {
}
#endif

struct AudioAPI audio_null = {
    audio_null_init,
    audio_null_buffered,
    audio_null_get_desired_buffered,
    audio_null_play,
#ifdef TARGET_N3DS
    audio_null_stop
#endif    
};
