// Bobby Orr Power Play (Bally #1120, 1978)
// MPU: AS-2518-17  →  RPU_MPU_ARCHITECTURE 1
//
// Switch/solenoid numbers confirmed from MAME by17.cpp (init_pwerplay).
// Lamp numbers and game-specific switch positions (marked TODO) must be
// verified against the physical wiring schematic / lamp matrix chart.

// ---------------------------------------------------------------------------
// LAMPS
// ---------------------------------------------------------------------------

// --- Backglass / Head (TODO: verify exact positions against lamp matrix) ---
#define LAMP_HEAD_SAME_PLAYER_SHOOTS_AGAIN  40
#define LAMP_HEAD_MATCH                     41
#define LAMP_SHOOT_AGAIN                    42
#define LAMP_APRON_CREDIT                   43
#define LAMP_HEAD_BIP                       48
#define LAMP_HEAD_HIGH_SCORE                49
#define LAMP_HEAD_GAME_OVER                 50
#define LAMP_HEAD_TILT                      51
#define LAMP_HEAD_1_PLAYER                  52
#define LAMP_HEAD_2_PLAYER                  53
#define LAMP_HEAD_3_PLAYER                  54
#define LAMP_HEAD_4_PLAYER                  55
#define LAMP_HEAD_PLAYER_1_UP               56
#define LAMP_HEAD_PLAYER_2_UP               57
#define LAMP_HEAD_PLAYER_3_UP               58
#define LAMP_HEAD_PLAYER_4_UP               59

// --- Playfield (TODO: verify all numbers against lamp matrix schematic) ---

// Drop target banks (left = targets 1-4 top-to-bottom, right = targets 1-4)
#define LAMP_DROP_LEFT_1                    1
#define LAMP_DROP_LEFT_2                    2
#define LAMP_DROP_LEFT_3                    3
#define LAMP_DROP_LEFT_4                    4
#define LAMP_DROP_RIGHT_1                   5
#define LAMP_DROP_RIGHT_2                   6
#define LAMP_DROP_RIGHT_3                   7
#define LAMP_DROP_RIGHT_4                   8

// Pop bumpers
#define LAMP_POP_BUMPER_LEFT                9
#define LAMP_POP_BUMPER_RIGHT               10
#define LAMP_POP_BUMPER_BOTTOM              11

// Rollover buttons (left / right lane change)
#define LAMP_ROLLOVER_LEFT                  12
#define LAMP_ROLLOVER_RIGHT                 13

// Top saucer
#define LAMP_SAUCER                         14

// Bonus multiplier
#define LAMP_BONUS_2X                       15
#define LAMP_BONUS_3X                       16
#define LAMP_BONUS_4X                       17
#define LAMP_BONUS_5X                       18

// Bonus value (1-10)
#define LAMP_BONUS_1                        20
#define LAMP_BONUS_2                        21
#define LAMP_BONUS_3                        22
#define LAMP_BONUS_4                        23
#define LAMP_BONUS_5                        24
#define LAMP_BONUS_6                        25
#define LAMP_BONUS_7                        26
#define LAMP_BONUS_8                        27
#define LAMP_BONUS_9                        28
#define LAMP_BONUS_10                       29

// Outlane specials
#define LAMP_LEFT_OUTLANE_SPECIAL           30
#define LAMP_RIGHT_OUTLANE_SPECIAL          31

// Center post indicator
#define LAMP_POST_UP                        32

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

// Confirmed for Power Play:


// --- X4 (col 4, switches 32-39) – TODO: verify all against schematic ---
// (assign as additional playfield switches are discovered)

// ---------------------------------------------------------------------------
// SOLENOIDS  (all confirmed from MAME init_pwerplay)
// ---------------------------------------------------------------------------

// Momentary solenoids (0-15):
#define SOL_OUTHOLE                 0
#define SOL_KNOCKER                 1
#define SOL_SAUCER                  2
#define SOL_POST_DOWN               3   // Center post – retract (ball drains through)
#define SOL_CHIME_10                4
#define SOL_CHIME_100               5
#define SOL_CHIME_1000              6
#define SOL_CHIME_EXTRA             7
#define SOL_POP_BUMPER_LEFT         8
#define SOL_POP_BUMPER_RIGHT        9
#define SOL_POP_BUMPER_BOTTOM       10
#define SOL_DROP_TARGET_RESET_LEFT  11  // resets SW_DROP_LEFT_1 – SW_DROP_LEFT_4
#define SOL_DROP_TARGET_RESET_RIGHT 12  // resets SW_DROP_RIGHT_1 – SW_DROP_RIGHT_4
#define SOL_LEFT_SLING              13
#define SOL_RIGHT_SLING             14
// Continuous solenoids (16-18):
#define SOLCONT_POST_UP             15  // Center post – extend (blocks drain)
#define SOLCONT_COIN_LOCKOUT        16
#define SOLCONT_FLIPPER_ENABLE      17

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
