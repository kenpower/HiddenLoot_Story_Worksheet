#include "stories.h"

// ===============================================================
// USEFUL SNIPPETS
// A general C++ reference for working with the vault. Copy and
// adapt what you need. They are not tied to any particular story.
// ===============================================================
//
// 1. Look at every item in the vault
//     for (const Item& item : v.items) {
//         std::string label = item.name;
//         int copies = item.quantity;
//     }
//
// 2. Look at every item when you also need its position
//     for (int i = 0; i < (int)v.items.size(); i++) {
//         const Item& item = v.items[i];
//     }
//
// 3. Look at every loadout slot
//     for (const LoadoutSlot& slot : v.loadout) {
//         std::string where = slot.slotName;
//         std::string what = slot.itemName;
//         bool nothingThere = slot.itemName.empty();
//     }
//
// 4. Test an item's type, rarity or element
//     const Item& item = v.items[0];
//     bool isSniper = item.type == ItemType::Sniper;
//     bool notEpic = item.rarity != Rarity::Epic;
//     bool isArc = item.element == Element::Arc;
//
// 5. Combine tests: && is and, || is or, ! is not
//     const Item& item = v.items[0];
//     if (item.damage > 100 && !item.locked) { }
//     if (item.fireRate == 0 || item.damage == 0) { }
//
// 6. Build a list of names to return
//     std::vector<std::string> names;
//     names.push_back("Some Name");
//
// 7. Count things and add things up
//     int count = 0;
//     int total = 0;
//     for (const Item& item : v.items) {
//         count++;
//         total += item.damage * item.fireRate;
//     }
//
// 8. Remember the highest value seen so far
//     int highest = 0;
//     for (const Item& item : v.items) {
//         if (item.fireRate > highest) {
//             highest = item.fireRate;
//         }
//     }
//
// 9. Compare text (== matches the whole text, including case)
//     std::string a = "Sniper";
//     bool same = a == "sniper";   // false
//
// 10. Make a lower-case copy of some text
//     (needs #include <cctype> at the top of this file)
//     std::string text = "LOUD";
//     for (char& c : text) {
//         c = (char)std::tolower((unsigned char)c);
//     }
//
// 11. Divide whole numbers (the fraction is thrown away)
//     int whole = 7 / 2;                 // 3
//     double exact = (double)7 / 2;      // 3.5
//
// 12. Change the vault (only if the function takes Vault& and not const Vault&)
//     v.scrap += 10;
//     v.items[0].quantity = 2;
//
// 13. Remove some items by keeping only the ones you want
//     std::vector<Item> kept;
//     for (const Item& item : v.items) {
//         if (item.type != ItemType::Sniper) {
//             kept.push_back(item);
//         }
//     }
//     v.items = kept;

// ===============================================================
// SAMPLE STORY (already done: try it with menu option 10)
// As a player I want to see my locked items.
// ===============================================================
std::vector<std::string> lockedItems(const Vault& v) {
    std::vector<std::string> names;
    for (const Item& item : v.items) {
        if (item.locked) {
            names.push_back(item.name);
        }
    }
    return names;
}

// Each function below is a stub that returns a dummy value.
// Replace the body of the functions for YOUR stories only.

// Story 1: As a player I want to see my most powerful weapon.
std::vector<std::string> mostPowerfulWeapon(const Vault& v) {
    return {}; //return an empty vector for now
}

// Story 2: As a player I want to see what my vault is worth.
int vaultWorth(const Vault& v) {
    return 0;
}

// Story 3: As a player I want to scrap my junk.
int scrapJunk(Vault& v) { // this function can change the vault, so it is not const
    return 0;
}

// Story 4: As a player I want to know how many Exotics I own.
int countExotics(const Vault& v) {
    return 0;
}

// Story 5: As a player I want to see all my Void weapons.
std::vector<std::string> voidWeapons(const Vault& v) {
    return {}; //return an empty vector for now
}

// Story 6: As a player I want to know my average power level.
int averagePowerLevel(const Vault& v) {
    return 0;
}

// Story 7: As a player I want to check if my loadout is complete.
bool isLoadoutComplete(const Vault& v) {
    return false;
}

// Story 8: As a player I want to find a weapon by name.
int findWeapon(const Vault& v, const std::string& name) {
    return 0;
}
