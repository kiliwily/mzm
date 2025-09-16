#include "data/fusion_gallery_data.h"
#include "macros.h"

static const u16 sFusionGallery_Palette_0[16 * 16] = INCBIN_U16("data/fusion_gallery/Image0.pal");
static const u16 sFusionGallery_Palette_1[16 * 16] = INCBIN_U16("data/fusion_gallery/Image1.pal");
static const u16 sFusionGallery_Palette_2[16 * 16] = INCBIN_U16("data/fusion_gallery/Image2.pal");
static const u16 sFusionGallery_Palette_3[16 * 16] = INCBIN_U16("data/fusion_gallery/Image3.pal");
static const u16 sFusionGallery_Palette_4[16 * 16] = INCBIN_U16("data/fusion_gallery/Image4.pal");
static const u16 sFusionGallery_Palette_11[16 * 16] = INCBIN_U16("data/fusion_gallery/Image11.pal");
static const u16 sFusionGallery_Palette_12[16 * 16] = INCBIN_U16("data/fusion_gallery/Image12.pal");
static const u16 sFusionGallery_Palette_5[16 * 16] = INCBIN_U16("data/fusion_gallery/Image5.pal");
static const u16 sFusionGallery_Palette_6[16 * 16] = INCBIN_U16("data/fusion_gallery/Image6.pal");
static const u16 sFusionGallery_Palette_7[16 * 16] = INCBIN_U16("data/fusion_gallery/Image7.pal");
static const u16 sFusionGallery_Palette_8[16 * 16] = INCBIN_U16("data/fusion_gallery/Image8.pal");
static const u16 sFusionGallery_Palette_9[16 * 16] = INCBIN_U16("data/fusion_gallery/Image9.pal");
static const u16 sFusionGallery_Palette_10[16 * 16] = INCBIN_U16("data/fusion_gallery/Image10.pal");

extern const u32 sFusionGallery_TopGfx_0[5628];
extern const u32 sFusionGallery_BottomGfx_0[3191];

extern const u32 sFusionGallery_TopGfx_1[5900];
extern const u32 sFusionGallery_BottomGfx_1[2986];

extern const u32 sFusionGallery_TopGfx_2[5731];
extern const u32 sFusionGallery_BottomGfx_2[3293];

extern const u32 sFusionGallery_TopGfx_3[6364];
extern const u32 sFusionGallery_BottomGfx_3[3818];

extern const u32 sFusionGallery_TopGfx_4[6851];
extern const u32 sFusionGallery_BottomGfx_4[3504];

extern const u32 sFusionGallery_TopTileTable_0[551];
extern const u32 sFusionGallery_BottomTileTable_0[368];

extern const u32 sFusionGallery_TopTileTable_1[551];
extern const u32 sFusionGallery_BottomTileTable_1[368];

extern const u32 sFusionGallery_TopTileTable_2[551];
extern const u32 sFusionGallery_BottomTileTable_2[368];

extern const u32 sFusionGallery_TopTileTable_3[551];
extern const u32 sFusionGallery_BottomTileTable_3[369];

extern const u32 sFusionGallery_TopTileTable_4[551];
extern const u32 sFusionGallery_BottomTileTable_4[369];

extern const u32 sFusionGallery_TopGfx_11[5936];
extern const u32 sFusionGallery_BottomGfx_11[3930];

extern const u32 sFusionGallery_TopGfx_12[5604];
extern const u32 sFusionGallery_BottomGfx_12[3582];

extern const u32 sFusionGallery_TopGfx_5[6633];
extern const u32 sFusionGallery_BottomGfx_5[3277];

extern const u32 sFusionGallery_TopGfx_6[6754];
extern const u32 sFusionGallery_BottomGfx_6[3419];

extern const u32 sFusionGallery_TopGfx_7[6977];
extern const u32 sFusionGallery_BottomGfx_7[4372];

extern const u32 sFusionGallery_TopGfx_8[6417];
extern const u32 sFusionGallery_BottomGfx_8[3919];

extern const u32 sFusionGallery_TopGfx_9[6918];
extern const u32 sFusionGallery_BottomGfx_9[4360];

extern const u32 sFusionGallery_TopGfx_10[5764];
extern const u32 sFusionGallery_BottomGfx_10[2273];

extern const u32 sFusionGallery_TopTileTable_11[551];
extern const u32 sFusionGallery_BottomTileTable_11[368];

extern const u32 sFusionGallery_TopTileTable_12[550];
extern const u32 sFusionGallery_BottomTileTable_12[368];

extern const u32 sFusionGallery_TopTileTable_5[551];
extern const u32 sFusionGallery_BottomTileTable_5[369];

extern const u32 sFusionGallery_TopTileTable_6[551];
extern const u32 sFusionGallery_BottomTileTable_6[368];

extern const u32 sFusionGallery_TopTileTable_7[551];
extern const u32 sFusionGallery_BottomTileTable_7[369];

extern const u32 sFusionGallery_TopTileTable_8[551];
extern const u32 sFusionGallery_BottomTileTable_8[369];

extern const u32 sFusionGallery_TopTileTable_9[550];
extern const u32 sFusionGallery_BottomTileTable_9[368];

extern const u32 sFusionGallery_TopTileTable_10[551];
extern const u32 sFusionGallery_BottomTileTable_10[368];

const struct FusionGalleryImageEntry sFusionGalleryData[NUMBER_OF_FUSION_GALLERY_IMAGES] = {
    [0] = {
        .pTopGfx = sFusionGallery_TopGfx_0,
        .pBottomGfx = sFusionGallery_BottomGfx_0,
        .pTopTileTable = sFusionGallery_TopTileTable_0,
        .pBottomTileTable = sFusionGallery_BottomTileTable_0,
        .pPalette = sFusionGallery_Palette_0
    },
    [1] = {
        .pTopGfx = sFusionGallery_TopGfx_1,
        .pBottomGfx = sFusionGallery_BottomGfx_1,
        .pTopTileTable = sFusionGallery_TopTileTable_1,
        .pBottomTileTable = sFusionGallery_BottomTileTable_1,
        .pPalette = sFusionGallery_Palette_1
    },
    [2] = {
        .pTopGfx = sFusionGallery_TopGfx_2,
        .pBottomGfx = sFusionGallery_BottomGfx_2,
        .pTopTileTable = sFusionGallery_TopTileTable_2,
        .pBottomTileTable = sFusionGallery_BottomTileTable_2,
        .pPalette = sFusionGallery_Palette_2
    },
    [3] = {
        .pTopGfx = sFusionGallery_TopGfx_3,
        .pBottomGfx = sFusionGallery_BottomGfx_3,
        .pTopTileTable = sFusionGallery_TopTileTable_3,
        .pBottomTileTable = sFusionGallery_BottomTileTable_3,
        .pPalette = sFusionGallery_Palette_3
    },
    [4] = {
        .pTopGfx = sFusionGallery_TopGfx_4,
        .pBottomGfx = sFusionGallery_BottomGfx_4,
        .pTopTileTable = sFusionGallery_TopTileTable_4,
        .pBottomTileTable = sFusionGallery_BottomTileTable_4,
        .pPalette = sFusionGallery_Palette_4
    },
    [5] = {
        .pTopGfx = sFusionGallery_TopGfx_5,
        .pBottomGfx = sFusionGallery_BottomGfx_5,
        .pTopTileTable = sFusionGallery_TopTileTable_5,
        .pBottomTileTable = sFusionGallery_BottomTileTable_5,
        .pPalette = sFusionGallery_Palette_5
    },
    [6] = {
        .pTopGfx = sFusionGallery_TopGfx_6,
        .pBottomGfx = sFusionGallery_BottomGfx_6,
        .pTopTileTable = sFusionGallery_TopTileTable_6,
        .pBottomTileTable = sFusionGallery_BottomTileTable_6,
        .pPalette = sFusionGallery_Palette_6
    },
    [7] = {
        .pTopGfx = sFusionGallery_TopGfx_7,
        .pBottomGfx = sFusionGallery_BottomGfx_7,
        .pTopTileTable = sFusionGallery_TopTileTable_7,
        .pBottomTileTable = sFusionGallery_BottomTileTable_7,
        .pPalette = sFusionGallery_Palette_7
    },
    [8] = {
        .pTopGfx = sFusionGallery_TopGfx_8,
        .pBottomGfx = sFusionGallery_BottomGfx_8,
        .pTopTileTable = sFusionGallery_TopTileTable_8,
        .pBottomTileTable = sFusionGallery_BottomTileTable_8,
        .pPalette = sFusionGallery_Palette_8
    },
    [9] = {
        .pTopGfx = sFusionGallery_TopGfx_9,
        .pBottomGfx = sFusionGallery_BottomGfx_9,
        .pTopTileTable = sFusionGallery_TopTileTable_9,
        .pBottomTileTable = sFusionGallery_BottomTileTable_9,
        .pPalette = sFusionGallery_Palette_9
    },
    [10] = {
        .pTopGfx = sFusionGallery_TopGfx_10,
        .pBottomGfx = sFusionGallery_BottomGfx_10,
        .pTopTileTable = sFusionGallery_TopTileTable_10,
        .pBottomTileTable = sFusionGallery_BottomTileTable_10,
        .pPalette = sFusionGallery_Palette_10
    },
    [11] = {
        .pTopGfx = sFusionGallery_TopGfx_11,
        .pBottomGfx = sFusionGallery_BottomGfx_11,
        .pTopTileTable = sFusionGallery_TopTileTable_11,
        .pBottomTileTable = sFusionGallery_BottomTileTable_11,
        .pPalette = sFusionGallery_Palette_11
    },
    [12] = {
        .pTopGfx = sFusionGallery_TopGfx_12,
        .pBottomGfx = sFusionGallery_BottomGfx_12,
        .pTopTileTable = sFusionGallery_TopTileTable_12,
        .pBottomTileTable = sFusionGallery_BottomTileTable_12,
        .pPalette = sFusionGallery_Palette_12
    },
};

static const u32 sFusionGallery_TopGfx_0[5628] = INCBIN_U32("data/fusion_gallery/Image0_Top.gfx.lz");
static const u32 sFusionGallery_BottomGfx_0[3191] = INCBIN_U32("data/fusion_gallery/Image0_Bottom.gfx.lz");

static const u32 sFusionGallery_TopGfx_1[5900] = INCBIN_U32("data/fusion_gallery/Image1_Top.gfx.lz");
static const u32 sFusionGallery_BottomGfx_1[2986] = INCBIN_U32("data/fusion_gallery/Image1_Bottom.gfx.lz");

static const u32 sFusionGallery_TopGfx_2[5731] = INCBIN_U32("data/fusion_gallery/Image2_Top.gfx.lz");
static const u32 sFusionGallery_BottomGfx_2[3293] = INCBIN_U32("data/fusion_gallery/Image2_Bottom.gfx.lz");

static const u32 sFusionGallery_TopGfx_3[6364] = INCBIN_U32("data/fusion_gallery/Image3_Top.gfx.lz");
static const u32 sFusionGallery_BottomGfx_3[3818] = INCBIN_U32("data/fusion_gallery/Image3_Bottom.gfx.lz");

static const u32 sFusionGallery_TopGfx_4[6851] = INCBIN_U32("data/fusion_gallery/Image4_Top.gfx.lz");
static const u32 sFusionGallery_BottomGfx_4[3504] = INCBIN_U32("data/fusion_gallery/Image4_Bottom.gfx.lz");

static const u32 sFusionGallery_TopTileTable_0[551] = INCBIN_U32("data/fusion_gallery/Image0_Top.tt");
static const u32 sFusionGallery_BottomTileTable_0[368] = INCBIN_U32("data/fusion_gallery/Image0_Bottom.tt");

static const u32 sFusionGallery_TopTileTable_1[551] = INCBIN_U32("data/fusion_gallery/Image1_Top.tt");
static const u32 sFusionGallery_BottomTileTable_1[368] = INCBIN_U32("data/fusion_gallery/Image1_Bottom.tt");

static const u32 sFusionGallery_TopTileTable_2[551] = INCBIN_U32("data/fusion_gallery/Image2_Top.tt");
static const u32 sFusionGallery_BottomTileTable_2[368] = INCBIN_U32("data/fusion_gallery/Image2_Bottom.tt");

static const u32 sFusionGallery_TopTileTable_3[551] = INCBIN_U32("data/fusion_gallery/Image3_Top.tt");
static const u32 sFusionGallery_BottomTileTable_3[369] = INCBIN_U32("data/fusion_gallery/Image3_Bottom.tt");

static const u32 sFusionGallery_TopTileTable_4[551] = INCBIN_U32("data/fusion_gallery/Image4_Top.tt");
static const u32 sFusionGallery_BottomTileTable_4[369] = INCBIN_U32("data/fusion_gallery/Image4_Bottom.tt");

static const u32 sFusionGallery_TopGfx_11[5936] = INCBIN_U32("data/fusion_gallery/Image11_Top.gfx.lz");
static const u32 sFusionGallery_BottomGfx_11[3930] = INCBIN_U32("data/fusion_gallery/Image11_Bottom.gfx.lz");

static const u32 sFusionGallery_TopGfx_12[5604] = INCBIN_U32("data/fusion_gallery/Image12_Top.gfx.lz");
static const u32 sFusionGallery_BottomGfx_12[3582] = INCBIN_U32("data/fusion_gallery/Image12_Bottom.gfx.lz");

static const u32 sFusionGallery_TopGfx_5[6633] = INCBIN_U32("data/fusion_gallery/Image5_Top.gfx.lz");
static const u32 sFusionGallery_BottomGfx_5[3277] = INCBIN_U32("data/fusion_gallery/Image5_Bottom.gfx.lz");

static const u32 sFusionGallery_TopGfx_6[6754] = INCBIN_U32("data/fusion_gallery/Image6_Top.gfx.lz");
static const u32 sFusionGallery_BottomGfx_6[3419] = INCBIN_U32("data/fusion_gallery/Image6_Bottom.gfx.lz");

static const u32 sFusionGallery_TopGfx_7[6977] = INCBIN_U32("data/fusion_gallery/Image7_Top.gfx.lz");
static const u32 sFusionGallery_BottomGfx_7[4372] = INCBIN_U32("data/fusion_gallery/Image7_Bottom.gfx.lz");

static const u32 sFusionGallery_TopGfx_8[6417] = INCBIN_U32("data/fusion_gallery/Image8_Top.gfx.lz");
static const u32 sFusionGallery_BottomGfx_8[3919] = INCBIN_U32("data/fusion_gallery/Image8_Bottom.gfx.lz");

static const u32 sFusionGallery_TopGfx_9[6918] = INCBIN_U32("data/fusion_gallery/Image9_Top.gfx.lz");
static const u32 sFusionGallery_BottomGfx_9[4360] = INCBIN_U32("data/fusion_gallery/Image9_Bottom.gfx.lz");

static const u32 sFusionGallery_TopGfx_10[5764] = INCBIN_U32("data/fusion_gallery/Image10_Top.gfx.lz");
static const u32 sFusionGallery_BottomGfx_10[2273] = INCBIN_U32("data/fusion_gallery/Image10_Bottom.gfx.lz");

static const u32 sFusionGallery_TopTileTable_11[551] = INCBIN_U32("data/fusion_gallery/Image11_Top.tt");
static const u32 sFusionGallery_BottomTileTable_11[368] = INCBIN_U32("data/fusion_gallery/Image11_Bottom.tt");

static const u32 sFusionGallery_TopTileTable_12[550] = INCBIN_U32("data/fusion_gallery/Image12_Top.tt");
static const u32 sFusionGallery_BottomTileTable_12[368] = INCBIN_U32("data/fusion_gallery/Image12_Bottom.tt");

static const u32 sFusionGallery_TopTileTable_5[551] = INCBIN_U32("data/fusion_gallery/Image5_Top.tt");
static const u32 sFusionGallery_BottomTileTable_5[369] = INCBIN_U32("data/fusion_gallery/Image5_Bottom.tt");

static const u32 sFusionGallery_TopTileTable_6[551] = INCBIN_U32("data/fusion_gallery/Image6_Top.tt");
static const u32 sFusionGallery_BottomTileTable_6[368] = INCBIN_U32("data/fusion_gallery/Image6_Bottom.tt");

static const u32 sFusionGallery_TopTileTable_7[551] = INCBIN_U32("data/fusion_gallery/Image7_Top.tt");
static const u32 sFusionGallery_BottomTileTable_7[369] = INCBIN_U32("data/fusion_gallery/Image7_Bottom.tt");

static const u32 sFusionGallery_TopTileTable_8[551] = INCBIN_U32("data/fusion_gallery/Image8_Top.tt");
static const u32 sFusionGallery_BottomTileTable_8[369] = INCBIN_U32("data/fusion_gallery/Image8_Bottom.tt");

static const u32 sFusionGallery_TopTileTable_9[550] = INCBIN_U32("data/fusion_gallery/Image9_Top.tt");
static const u32 sFusionGallery_BottomTileTable_9[368] = INCBIN_U32("data/fusion_gallery/Image9_Bottom.tt");

static const u32 sFusionGallery_TopTileTable_10[551] = INCBIN_U32("data/fusion_gallery/Image10_Top.tt");
static const u32 sFusionGallery_BottomTileTable_10[368] = INCBIN_U32("data/fusion_gallery/Image10_Bottom.tt");
