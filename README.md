# Hidden Loot: Gear Vault

A small console app for a looter-shooter gear vault. Your Product Owner has
written some user stories. Your job is to implement the ones on your story cards.

## Build and run

See [BUILD.md](BUILD.md) for instructions for Visual Studio, CLion, VS Code and the command line.

## Rules

- Only implement the stories on your cards.
- Only edit `src/stories.cpp`. Do not change any function signature (function arguments and return types) or the seed data.
- Commit and push when you finish each story.

## Where things are

| File | What it is | Can you edit it? |
|------|------------|------------------|
| `src/vault.h` | The data model: `Item`, `LoadoutSlot`, `Vault` | **DO NOT EDIT** |
| `src/vault.cpp` | Helpers for converting values to text and printing items | **DO NOT EDIT** |
| `src/vault_data.cpp` | The seed vault (40 items, scrap, loadout) | **DO NOT EDIT** |
| `src/stories.h` | One function per story | **DO NOT EDIT** |
| `src/stories.cpp` | Useful snippets, a finished sample story, and stubs that return dummy values. This is where you work. | Can edit |
| `src/main.cpp` | The menu. Each story already has a menu option. | **DO NOT EDIT** |
