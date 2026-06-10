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

// --- X0 (col 0, switches 0-7) ---
// TODO: verify X0 bits 0-4 against Power Play schematic
#define SW_LEFT_OUTLANE             0   // X0 bit 0
#define SW_RIGHT_OUTLANE            1   // X0 bit 1
#define SW_LEFT_RETURN_LANE         2   // X0 bit 2
#define SW_RIGHT_RETURN_LANE        3   // X0 bit 3
#define SW_SHOOTER_LANE             4   // X0 bit 4
// Standard cabinet (confirmed):
#define SW_CREDIT_RESET             5   // X0 bit 5 – Start / Credit-Reset button
#define SW_TILT                     6   // X0 bit 6 – Plumb-bob tilt
#define SW_PLUMB_TILT               6
#define SW_OUTHOLE                  7   // X0 bit 7

// --- X1 (col 1, switches 8-15) ---
// Standard cabinet (confirmed):
#define SW_COIN_3                   8   // X1 bit 0 – right coin chute
#define SW_COIN_1                   9   // X1 bit 1 – center coin chute
#define SW_COIN_2                   10  // X1 bit 2 – left coin chute
// TODO: verify X1 bits 3-6 against Power Play schematic
#define SW_LEFT_ROLLOVER_BUTTON     11  // X1 bit 3
#define SW_RIGHT_ROLLOVER_BUTTON    12  // X1 bit 4
#define SW_SPINNER                  13  // X1 bit 5
#define SW_SHOOTER_LANE_2           14  // X1 bit 6 (second shooter-lane switch, if present)
// Standard cabinet (confirmed):
#define SW_SLAM                     15  // X1 bit 7 – slam tilt
#define SW_PLAYFIELD_TILT           15

// --- X2 (col 2, switches 16-23) – all drop targets (confirmed for Power Play) ---
#define SW_DROP_LEFT_1              16  // X2 bit 0 – left bank, target 1 (top)
#define SW_DROP_LEFT_2              17  // X2 bit 1
#define SW_DROP_LEFT_3              18  // X2 bit 2
#define SW_DROP_LEFT_4              19  // X2 bit 3 – left bank, target 4 (bottom)
#define SW_DROP_RIGHT_1             20  // X2 bit 4 – right bank, target 1 (top)
#define SW_DROP_RIGHT_2             21  // X2 bit 5
#define SW_DROP_RIGHT_3             22  // X2 bit 6
#define SW_DROP_RIGHT_4             23  // X2 bit 7 – right bank, target 4 (bottom)

// --- X3 (col 3, switches 24-31) ---
// TODO: verify X3 bits 0-6 against Power Play schematic
#define SW_POP_BUMPER_LEFT          24  // X3 bit 0
#define SW_POP_BUMPER_RIGHT         25  // X3 bit 1
#define SW_POP_BUMPER_BOTTOM        26  // X3 bit 2
#define SW_LEFT_SLING               27  // X3 bit 3
#define SW_RIGHT_SLING              28  // X3 bit 4
// Confirmed for Power Play:
#define SW_SAUCER                   31  // X3 bit 7

// --- X4 (col 4, switches 32-39) – TODO: verify all against schematic ---
// (assign as additional playfield switches are discovered)

// ---------------------------------------------------------------------------
// SOLENOIDS  (all confirmed from MAME init_pwerplay)
// ---------------------------------------------------------------------------

// Momentary solenoids (0-15):
#define SOL_POST_DOWN               0   // Center post – retract (ball drains through)
#define SOL_CHIME_10                1
#define SOL_CHIME_100               2
#define SOL_CHIME_1000              3
#define SOL_CHIME_10000             4
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
// SOL 15 = unused / all-off

// Continuous solenoids (16-18):
#define SOLCONT_POST_UP             16  // Center post – extend (blocks drain)
#define SOLCONT_COIN_LOCKOUT        17
#define SOLCONT_FLIPPER_ENABLE      18

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
