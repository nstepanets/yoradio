#ifndef displayST7567_h
#define displayST7567_h
#include "../core/options.h"

#include "Arduino.h"
#include <Adafruit_GFX.h>
#include "../ST7567/ST7567.h"
#include "tools/l10n.h"

#define CHARWIDTH   6
#define CHARHEIGHT  8

#define DSP_OLED

typedef GFXcanvas1 Canvas;
#include "widgets/widgets.h"
#include "widgets/pages.h"

#if __has_include("conf/displayST7567conf_custom.h")
  #include "conf/displayST7567conf_custom.h"
#else
  #include "conf/displayST7567conf.h"
#endif

class DspCore: public ST7567 {
#include "tools/commongfx.h"
};

extern DspCore dsp;

/*
 * OLED COLORS
 */
#define BOOT_PRG_COLOR    BLACK
#define BOOT_TXT_COLOR    BLACK
#define SILVER            BLACK
#define TFT_BG            WHITE
#define TFT_FG            BLACK
#define TFT_LOGO          BLACK

#endif
