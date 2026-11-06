#include "vault.h"

// ---------------------------------------------------------------
// Seed data: the player's vault at the start of the lab.
// DO NOT EDIT. The Product Owner's acceptance tests use this data.
// ---------------------------------------------------------------

Vault makeSeedVault() {
    const ItemType RIFLE = ItemType::Rifle, SHOTGUN = ItemType::Shotgun,
                   SNIPER = ItemType::Sniper, SWORD = ItemType::Sword,
                   ARMOUR = ItemType::Armour;
    const Rarity COMMON = Rarity::Common, RARE = Rarity::Rare, EPIC = Rarity::Epic,
                 LEGENDARY = Rarity::Legendary, EXOTIC = Rarity::Exotic;
    const Element KINETIC = Element::Kinetic, ARC = Element::Arc,
                  SOLAR = Element::Solar, VOID = Element::Void;
    const bool LOCKED = true, NO = false;

    Vault v;
    v.items = {
        // name                  type     rarity     power dmg  rpm  element  locked  scrap qty
        {"Paper Comet",          RIFLE,   COMMON,    1640,  27, 380, SOLAR,   NO,       5,  1},
        {"Static Widow Mk II",   RIFLE,   RARE,      1745,  38, 450, ARC,     NO,      12,  1},
        {"Quiet Engine",         RIFLE,   EPIC,      1795,  42, 390, KINETIC, NO,      25,  1},
        {"Thunder Lullaby",      SHOTGUN, RARE,      1750,  95, 300, ARC,     NO,      12,  1},
        {"Hollow Requiem",       SNIPER,  LEGENDARY, 1820, 140,  72, SOLAR,   NO,      40,  1},
        {"Bastion of Ash",       ARMOUR,  LEGENDARY, 1830,   0,   0, SOLAR,   NO,      40,  1},
        {"Gilded Mourning",      RIFLE,   LEGENDARY, 1702,  40, 360, KINETIC, NO,      40,  1},
        {"Ninth Veil",           SWORD,   EPIC,      1810, 160,   0, VOID,    NO,      25,  1},
        {"Ember Litany",         SHOTGUN, RARE,      1820,  88,  65, SOLAR,   NO,      12,  1},
        {"Rusted Promise",       RIFLE,   COMMON,    1655,  30, 340, KINETIC, LOCKED,   5,  1},
        {"Starfall Covenant",    RIFLE,   EXOTIC,    1760,  45, 420, ARC,     NO,      80,  3},
        {"Tin Sparrow",          SHOTGUN, COMMON,    1710,  70,  70, KINETIC, NO,       5,  1},
        {"Static Widow",         RIFLE,   LEGENDARY, 1780,  41, 450, ARC,     NO,      40,  1},
        {"Copper Psalm",         SNIPER,  RARE,      1600, 110,  60, SOLAR,   NO,      12,  1},
        {"Bent Halo",            RIFLE,   COMMON,    1690,  28, 360, ARC,     NO,       5,  1},
        {"Dull Thorn",           SHOTGUN, COMMON,    1680,  60,  70, VOID,    NO,       5,  2},
        {"Veil of Nothing",      ARMOUR,  EPIC,      1770,   0,   0, VOID,    NO,      25,  1},
        {"Hush Protocol",        RIFLE,   RARE,      1735,  39, 400, VOID,    NO,      12,  1},
        {"Null Choir",           SNIPER,  EXOTIC,    1790, 150,  70, VOID,    NO,      80,  2},
        {"Crown of Cinders",     ARMOUR,  EXOTIC,    1800,   0,   0, SOLAR,   NO,      80,  1},
        {"Lantern of Mercy",     SHOTGUN, EXOTIC,    1775,  90,  65, SOLAR,   LOCKED,  80,  1},
        {"Grave Orchid",         SWORD,   LEGENDARY, 1765, 150,   0, VOID,    LOCKED,  40,  1},
        {"Marrow Signal",        SNIPER,  EPIC,      1740, 125,  66, ARC,     NO,      25,  1},
        {"Pale Meridian",        RIFLE,   RARE,      1725,  37, 420, KINETIC, NO,      12,  1},
        {"Iron Vespers",         SHOTGUN, EPIC,      1755,  85,  70, KINETIC, LOCKED,  25,  1},
        {"Glass Harbour",        ARMOUR,  COMMON,    1650,   0,   0, ARC,     NO,       5,  2},
        {"Wren's Debt",          SNIPER,  RARE,      1720, 105,  72, VOID,    NO,      12,  1},
        {"Ossuary Bell",         SWORD,   RARE,      1715, 140,   0, SOLAR,   NO,      12,  1},
        {"Kestrel Oath",         RIFLE,   EPIC,      1785,  43, 400, SOLAR,   NO,      25,  1},
        {"Low Tide",             SHOTGUN, COMMON,    1660,  65,  75, ARC,     NO,       5,  3},
        {"Sable Arithmetic",     ARMOUR,  RARE,      1745,   0,   0, KINETIC, NO,      12,  1},
        {"Silt Warden",          ARMOUR,  LEGENDARY, 1790,   0,   0, ARC,     LOCKED,  40,  1},
        {"Velvet Artillery",     SNIPER,  LEGENDARY, 1800, 135,  72, KINETIC, NO,      40,  1},
        {"Driftglass",           RIFLE,   RARE,      1730,  36, 450, ARC,     NO,      12,  2},
        {"Quillback",            SHOTGUN, RARE,      1705,  80,  70, VOID,    NO,      12,  1},
        {"Tallow Saint",         SWORD,   COMMON,    1670, 120,   0, KINETIC, NO,       5,  1},
        {"Eventide Lattice",     ARMOUR,  EPIC,      1760,   0,   0, SOLAR,   NO,      25,  1},
        {"Cobalt Absolution",    RIFLE,   EXOTIC,    1805,  46, 400, KINETIC, NO,      80,  1},
        {"Oriole Mandate",       SNIPER,  COMMON,    1645, 100,  60, SOLAR,   NO,       5,  1},
        {"Umbral Tithe",         RIFLE,   EPIC,      1770,  40, 390, VOID,    NO,      25,  1},
    };
    v.scrap = 1250;
    v.loadout = {
        {"Primary",   "Quiet Engine"},
        {"Secondary", "Tin Sparrow"},
        {"Heavy",     ""},
        {"Armour",    "Bastion of Ash"},
    };
    return v;
}
