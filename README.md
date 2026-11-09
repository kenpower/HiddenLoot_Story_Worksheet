# Hidden Loot: Gear Vault

Hidden Loot is a looter-shooter RPG. Between missions, players manage the weapons and armour
they have collected in their personal vault. This repo is the vault module of the game, cut down
to a console app with a sample vault so you can work on it without the rest of the game.

The module's features are written as short user stories, and in this lab you work on them in two
roles: developer on some stories and Product Owner on others.

## What happens in the lab

| Step | What you do | You'll need |
|---|---|---|
| 1. Before ticket | On your own, write down what would need deciding to build a new story ([details](#step-1-before-ticket)) | Form link from Ken |
| 2. Tour | Build and run the app, then follow along with the sample story and the code | [BUILD.md](BUILD.md) |
| 3. Be the Product Owner | Decide and write acceptance criteria for your two Product Owner stories | Product Owner worksheet |
| 4. Develop | Write down your assumptions and questions, then build your two stories ([details](#step-4-develop)) | Story card and Story Log |
| 5. Review | Show your code to a visiting Product Owner, and check another pair's code against your criteria ([details](#step-5-review)) | Product Owner worksheet, Story Log |
| 6. Lecturer's tests | When Ken says so, get the tests, run them on your stories, and complete your Story Log | [TESTS.md](TESTS.md), Story Log |
| 7. Debrief | Share the one question that would have saved you the most rework | Story Log |
| 8. After ticket | On your own, do the same exercise as step 1 with a different story, then hand in your sheets ([details](#step-8-after-ticket)) | Form link from Ken, all your sheets |

### Step 1: Before ticket

Ken gives you a form link. The form shows a one-line story, and you get 3 minutes, working alone. List everything someone would
have to decide before they could build it. For an online shop's "see my recent orders", you might
write: how recent is recent? Are cancelled orders included? What order are they shown in? This
isn't marked, so write what you can.

### Step 4: Develop

You and your partner are the developers for the two stories on your story cards.

- [ ] On the Story Log (the back of each card), write what you are assuming the story means (A1 to A3).
- [ ] Write the questions you'd want to ask a Product Owner (Q1 to Q3). Nobody will answer them today, so go with your assumptions.
- [ ] Implement the story in `src/stories.cpp`, and try it with the menu option on the card.
- [ ] Commit and push when you finish each story.

### Step 5: Review

Another pair was the Product Owner for the stories you built, and wrote their own acceptance criteria
for them. Ken will tell you who is reviewing whom. Split up for this step:

- **One partner stays** and runs your code for the visiting Product Owner. At the end, write their score on your Story Log under "Product Owners' review".
- **The other partner visits** the pair building your Product Owner stories, taking your two worksheets. For each criterion, ask them to run the code, and mark **Met?** Y or N on the back of the worksheet. Judge what the program does, without reading the code. Tell them the score before you leave.

### Step 8: After ticket

Ken gives you the form link again, for a different story. As in step 1, you get 3 minutes, working alone, to
list everything someone would have to decide. It shows how your thinking has changed during the lab
and isn't marked. Then hand your Story Logs and Product Owner worksheets to Ken.

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
