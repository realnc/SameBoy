#ifndef MBC_h
#define MBC_h
#include "defs.h"
#include <stdbool.h>

typedef struct {
    enum {
        GB_NO_MBC,
        GB_MBC1,
        GB_MBC2,
        GB_MBC3,
        GB_MBC5,
        GB_MBC7,
        GB_MMM01,
        GB_HUC1,
        GB_HUC3,
        GB_TPP1,
    } mbc_type;
    enum {
        GB_STANDARD_MBC,
        GB_CAMERA,
    } mbc_subtype;
    bool has_ram;
    bool has_battery;
    bool has_rtc;
    bool has_rumble;
} GB_cartridge_t;

#ifdef GB_INTERNAL
internal extern const GB_cartridge_t GB_cart_defs[256];
internal void GB_update_mbc_mappings(GB_gameboy_t *gb);
internal void GB_configure_cart(GB_gameboy_t *gb);
internal void GB_reset_mbc(GB_gameboy_t *gb);
#endif

#endif /* MBC_h */
