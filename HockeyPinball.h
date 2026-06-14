// Bobby Orr Power Play (Bally #1120, 1978)
// MPU: AS-2518-17  →  RPU_MPU_ARCHITECTURE 1
//
// Switch/solenoid numbers confirmed from MAME by17.cpp (init_pwerplay).
// Lamp numbers and game-specific switch positions (marked TODO) must be
// verified against the physical wiring schematic / lamp matrix chart.

// ---------------------------------------------------------------------------
// LAMPS
// ---------------------------------------------------------------------------

#define LAMP_BONUS_1K                 0  // Q14, J1-18
#define LAMP_BONUS_2K                 1 // Q29, J1-1
#define LAMP_BONUS_3K                 2 // Q36, J3-26
#define LAMP_BONUS_4K                 3 // Q57, J3-1
#define LAMP_BONUS_5K                 4 // Q12, J1-19
#define LAMP_BONUS_6K                 5 // Q27, J1-9
#define LAMP_BONUS_7K                 6 // Q38, J3-25
#define LAMP_BONUS_8K                 7 // Q50, J3-12
#define LAMP_BONUS_9K                 8 // Q13, J1-17
#define LAMP_BONUS_10K                9 // Q28, J1-8
#define LAMP_BONUS_20K                10  // Q44, J3-19
#define LAMP_RT_ALLEY                 12  // Q8, J1-23
#define LAMP_RT_ALLEY_X2              13  // Q35, J1-3
#define LAMP_LEFT_ALLEY               14  // Q49, J3-17
#define LAMP_L_ALLEY_X2               15  // Q54, J3-11
#define LAMP_POT_2X                   16  // Q9, J1-14
#define LAMP_POT_3X                   17  // Q34, J1-2
#define LAMP_POT_5X                   18  // Q48, J3-16
#define LAMP_POT_X_BALL               19  // Q55, J3-9
#define LAMP_POT_SPECIAL              20  // Q10, J1-15
#define LAMP_TOP_3K                   24  // Q11, J1-16
#define LAMP_TOP_6K                   25  // Q26, J1-7
#define LAMP_TOP_9K                   26  // Q32, J3-27
#define LAMP_TOP                      27  // Q59, J3-4
#define LAMP_TOP_15K                  28  // Q4, J1-28
#define LAMP_5X                       33  // Q24, J1-5
#define LAMP_TRIPLE_BONUS             34  // Q42, J3-21
#define LAMP_DOUBLE_BONUS             35  // Q56, J3-10
#define LAMP_POST_UP_X2               37  // Q17, J1-11
#define LAMP_L_AND_R_BUMPERS          38  // Q41, J3-20
#define LAMP_BOTTOM_BUMPER            39  // Q46, J3-18
#define LAMP_HEAD_SAME_PLAYER_SHOOTS_AGAIN   40  // Q3, J2-21
#define LAMP_HEAD_MATCH                    41  // Q23, J2-8
#define LAMP_SHOOT_AGAIN           42  // Q40, J2-9
#define LAMP_HEAD_CREDIT_INDEX             43  // Q52, J2-5
#define LAMP_RT_OUTLANE_SPEC          46  // Q39, J2-4
#define LAMP_LT_OUTLANE_SPEC          47  // Q53, J2-3
#define LAMP_HEAD_BALL_IN_PLAY             48  // Q16, J2-22
#define LAMP_HEAD_HIGH_SCORE       49  // Q15, J2-23
#define LAMP_HEAD_GAME_OVER                50  // Q33, J2-11
#define LAMP_HEAD_TILT                     51  // Q47, J2-10
#define LAMP_HEAD_N_PLAY_1                 52  // Q5, J2-16
#define LAMP_HEAD_N_PLAY_2                 53  // Q18, J2-20
#define LAMP_HEAD_N_PLAY_3                 54  // Q30, J2-6
#define LAMP_HEAD_N_PLAY_4                 55  // Q43, J2-7
#define LAMP_HEAD_PLAYER_1_UP              56  // Q6, J2-14
#define LAMP_HEAD_PLAYER_2_UP              57  // Q19, J2-15
#define LAMP_HEAD_PLAYER_UP_3              58  // Q31, J2-2
#define LAMP_HEAD_PLAYER_UP_4              59  // Q45, J2-1


// ---------------------------------------------------------------------------
// SWITCHES
// Switch matrix: 5 columns (X0-X4) × 8 rows = switches 0-39.
// Column × 8 + row = switch number.
// ---------------------------------------------------------------------------

// --- STROBE0 (col 0, switches 0-7) ---
#define SW_LR_RETURN_LANES          0
#define SW_50_REBOUND               1
#define SW_10_DROP_REBOUND          2
#define SW_RIGHT_ROLLOVER_BOTTOM    3
#define SW_LEFT_ROLLOVER_BOTTOM     4
// Standard cabinet (confirmed):
#define SW_CREDIT_RESET             5
#define SW_TILT                     6
#define SW_PLUMB_TILT               6
#define SW_OUTHOLE                  7

// --- STROBE1 (col 1, switches 8-15) ---
// Standard cabinet (confirmed):
#define SW_COIN_3                   8
#define SW_COIN_1                   9
#define SW_COIN_2                   10
// Standard cabinet (confirmed):
#define SW_SLAM                     15
#define SW_PLAYFIELD_TILT           15

// --- STROBE2 (col 2, switches 16-23) – all drop targets (confirmed for Power Play) ---
#define SW_DROP_RIGHT_D             16
#define SW_DROP_RIGHT_C             17
#define SW_DROP_RIGHT_B             18
#define SW_DROP_RIGHT_A             19
#define SW_DROP_LEFT_D              20
#define SW_DROP_LEFT_C              21
#define SW_DROP_LEFT_B              22
#define SW_DROP_LEFT_A              23

// --- STROBE3 (col 3, switches 24-31) ---
#define SW_DOWN_POST_ROLLOVER       24
#define SW_CENTER_ROLLOVER          25
#define SW_RIGHT_OUTLANE            26
#define SW_LEFT_OUTLANE             27
#define SW_RIGHT_ROLLOVER_TOP       28
#define SW_LEFT_ROLLOVER_TOP        29
#define SW_SAUCER                   31

// --- STROBE4 (col 4, switches 32-39) ---
#define SW_TOP_ROLLOVER_AND_CENTER  32
#define SW_RIGHT_ROLLOVER_CENTER    33
#define SW_LEFT_ROLLOVER_CENTER     34
#define SW_RIGHT_SLING              35
#define SW_LEFT_SLING               36
#define SW_POP_BUMPER_BOTTOM        37
#define SW_POP_BUMPER_RIGHT         38
#define SW_POP_BUMPER_LEFT          39

// ---------------------------------------------------------------------------
// SOLENOIDS  (all confirmed from MAME init_pwerplay)
// ---------------------------------------------------------------------------

// Momentary solenoids (0-15):
#define SOL_POST_DOWN               0   // Center post – retract (ball drains through)
#define SOL_CHIME_10                1
#define SOL_CHIME_100               2
#define SOL_CHIME_1000              3
#define SOL_CHIME_EXTRA             4
#define SOL_KNOCKER                 5
#define SOL_OUTHOLE                 6
#define SOL_SAUCER                  7
#define SOL_POP_BUMPER_LEFT         8
#define SOL_POP_BUMPER_RIGHT        9
#define SOL_POP_BUMPER_BOTTOM       10
#define SOL_LEFT_SLING              11
#define SOL_DROP_TARGET_RESET_LEFT  12  // resets SW_DROP_LEFT_1 – SW_DROP_LEFT_4
#define SOL_RIGHT_SLING             13
#define SOL_DROP_TARGET_RESET_RIGHT 14  // resets SW_DROP_RIGHT_1 – SW_DROP_RIGHT_4
// Continuous solenoids (16-18):
#define SOLCONT_FLIPPER_ENABLE      16
#define SOLCONT_POST_UP             17  // Center post – extend (blocks drain)
#define SOLCONT_COIN_LOCKOUT        19


// ---------------------------------------------------------------------------
// SOFTWARE-TRIGGERED SOLENOIDS (Bally -17 architecture)
// The RPU OS fires these solenoids automatically when their paired switch
// closes. All five are priority entries (fire immediately, don't queue).
// ---------------------------------------------------------------------------

#define NUM_SWITCHES_WITH_TRIGGERS          5
#define NUM_PRIORITY_SWITCHES_WITH_TRIGGERS 5

struct PlayfieldAndCabinetSwitch SolenoidAssociatedSwitches[] = {
  { SW_LEFT_SLING,        SOL_LEFT_SLING,        4 },
  { SW_RIGHT_SLING,       SOL_RIGHT_SLING,       4 },
  { SW_POP_BUMPER_LEFT,   SOL_POP_BUMPER_LEFT,   4 },
  { SW_POP_BUMPER_RIGHT,  SOL_POP_BUMPER_RIGHT,  4 },
  { SW_POP_BUMPER_BOTTOM, SOL_POP_BUMPER_BOTTOM, 4 },
};
