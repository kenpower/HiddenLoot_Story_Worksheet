# Hidden Loot: Gear Vault

A small console app for a looter-shooter gear vault. Your Product Owner has
written some user stories. Your job is to implement the ones on your story cards.

## Build and run

```bash
cmake -S . -B build
cmake --build build
./build/hidden_loot          # Visual Studio: build\Debug\hidden_loot.exe
```

## Where things are

| File | What it is |
|------|------------|
| `src/vault.h` | The data model: `Item`, `LoadoutSlot`, `Vault` |
| `src/vault_data.cpp` | The seed vault (40 items, scrap, loadout). **Do not edit.** |
| `src/stories.h` | One function per story. **Do not change the signatures.** |
| `src/stories.cpp` | Stubs that return dummy values. **This is where you work.** |
| `src/main.cpp` | The menu. Each story already has a menu option. |

## Rules

- Only implement the stories on your cards.
- Only edit `src/stories.cpp`. Do not change any function signature or the seed data.
- Commit and push when you finish each story.
