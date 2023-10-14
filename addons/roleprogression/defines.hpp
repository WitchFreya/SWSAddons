// Pixel grid
#define pixelScale  0.25
#define GRID_W (pixelW * pixelGridNoUIScale * pixelScale)
#define GRID_H (pixelH * pixelGridNoUIScale * pixelScale)

#define IDX_virtMisc 17 // The virtual items in the miscellaneous category

// IDCs
#define IDC_leftTabContent 13
#define IDC_rightTabContent 14
#define IDC_buttonMisc 38
#define IDC_iconBackgroundRole 2038
#define IDC_buttonRole 2039

// Indexes of current items array
#define IDX_CURR_PRIMARY_WEAPON 0
#define IDX_CURR_SECONDARY_WEAPON 1
#define IDX_CURR_HANDGUN_WEAPON 2
#define IDX_CURR_HEADGEAR 3
#define IDX_CURR_UNIFORM 4
#define IDX_CURR_VEST 5
#define IDX_CURR_BACKPACK 6
#define IDX_CURR_GOGGLES 7
#define IDX_CURR_NVG 8
#define IDX_CURR_BINO 9
#define IDX_CURR_MAP 10
#define IDX_CURR_COMPASS 11
#define IDX_CURR_RADIO 12
#define IDX_CURR_WATCH 13
#define IDX_CURR_COMMS 14
#define IDX_CURR_UNIFORM_ITEMS 15
#define IDX_CURR_VEST_ITEMS 16
#define IDX_CURR_BACKPACK_ITEMS 17
#define IDX_CURR_PRIMARY_WEAPON_ITEMS 18
#define IDX_CURR_SECONDARY_WEAPON_ITEMS 19
#define IDX_CURR_HANDGUN_WEAPON_ITEMS 20
#define IDX_CURR_BINO_ITEMS 21


#define IDC_blockRightFrame 5
#define IDC_blockRighttBackground 6
#define IDC_loadIndicator 7
#define IDC_rightTabContent 14
#define IDC_rightTabContentListnBox 15
#define IDC_sortRightTab 17
#define IDC_rightSearchbar 19
#define IDC_iconBackgroundOptic 21
#define IDC_buttonOptic 22
#define IDC_iconBackgroundItemAcc 23
#define IDC_buttonItemAcc 24
#define IDC_iconBackgroundMuzzle 25
#define IDC_buttonMuzzle 26
#define IDC_iconBackgroundBipod 27
#define IDC_buttonBipod 28
#define IDC_iconBackgroundMag 29
#define IDC_buttonMag 30
#define IDC_iconBackgroundMagALL 31
#define IDC_buttonMagALL 32
#define IDC_iconBackgroundThrow 33
#define IDC_buttonThrow 34
#define IDC_iconBackgroundPut 35
#define IDC_buttonPut 36
#define IDC_iconBackgroundMisc 37
#define IDC_buttonMisc 38
#define IDC_buttonRemoveAll 40
#define IDC_rightSearchbarButton 42
#define IDC_sortRightTabDirection 171
#define IDC_iconBackgroundCurrentMag 3001
#define IDC_buttonCurrentMag 3002
#define IDC_iconBackgroundCurrentMag2 3003
#define IDC_buttonCurrentMag2 3004

#define RIGHT_PANEL_CUSTOM_BACKGROUND 60, 62, 64, 66, 68, 70, 72, 74, 76, 78
#define RIGHT_PANEL_CUSTOM_BUTTONS 61, 63, 65, 67, 69, 71, 73, 75, 77, 79

#define RIGHT_PANEL_ACC_BACKGROUND_IDCS IDC_iconBackgroundOptic, IDC_iconBackgroundItemAcc, IDC_iconBackgroundMuzzle, IDC_iconBackgroundBipod
#define RIGHT_PANEL_ACC_IDCS IDC_buttonOptic, IDC_buttonItemAcc, IDC_buttonMuzzle, IDC_buttonBipod
#define RIGHT_PANEL_ITEMS_BACKGROUND_IDCS IDC_iconBackgroundMag, IDC_iconBackgroundMagALL, IDC_iconBackgroundThrow, IDC_iconBackgroundPut, IDC_iconBackgroundMisc, RIGHT_PANEL_CUSTOM_BACKGROUND
#define RIGHT_PANEL_ITEMS_IDCS IDC_buttonMag, IDC_buttonMagALL, IDC_buttonThrow, IDC_buttonPut, IDC_buttonMisc, RIGHT_PANEL_CUSTOM_BUTTONS

#define TOGGLE_RIGHT_PANEL_HIDE\
{\
    _x = _display displayCtrl _x;\
    _x ctrlSetFade 1;\
    _x ctrlShow false;\
    _x ctrlEnable false;\
    _x ctrlCommit FADE_DELAY;\
} forEach [\
    IDC_blockRightFrame,\
    IDC_blockRighttBackground,\
    IDC_loadIndicator,\
    IDC_rightTabContent,\
    IDC_rightTabContentListnBox,\
    IDC_sortRightTab,\
    IDC_sortRightTabDirection,\
    RIGHT_PANEL_ACC_BACKGROUND_IDCS,\
    RIGHT_PANEL_ACC_IDCS,\
    RIGHT_PANEL_ITEMS_BACKGROUND_IDCS,\
    RIGHT_PANEL_ITEMS_IDCS,\
    IDC_buttonRemoveAll,\
    IDC_rightSearchbar,\
    IDC_rightSearchbarButton,\
    IDC_buttonCurrentMag,\
    IDC_buttonCurrentMag2,\
    IDC_iconBackgroundCurrentMag,\
    IDC_iconBackgroundCurrentMag2\
]
