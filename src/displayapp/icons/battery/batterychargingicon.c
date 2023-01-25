#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BATTERYCHARGINGICON
#define LV_ATTRIBUTE_IMG_BATTERYCHARGINGICON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATTERYCHARGINGICON uint8_t batterychargingicon_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x6a, 0xfc, 0x6c, 0xff, 	/*Color of index 1*/

  0x9c, 
  0x9c, 
  0x9c, 
  0x84, 
  0x84, 
  0x84, 
  0x84, 
  0xe4, 
  0xe4, 
  0xe4, 
};

const lv_img_dsc_t batterychargingicon = {
  {
      LV_IMG_CF_INDEXED_1BIT,
      0,
      0,
      6,
      10,
  },
  18,
  batterychargingicon_map,
};
