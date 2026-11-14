# Text-based Hunger Games

A terminal adventure where you pick one of nine tributes and try to survive branching encounters.

## What it does

- Each tribute is a `Tribute` with defense, speed, strength, camouflage, a district, a weapon, and an inventory. The roster is Marvel, Glimmer, Cato, Clove, Foxface, Thresh, Rue, Peeta, and Katniss.
- Encounters are switch statements in `src/functions.cpp`. A choice changes stats or inventory and then calls the survival check.
- Survival draws a number from 1 to 100. The tribute dies when `(trait + liveChance) / chance` is below 1. `liveChance` falls from 100 toward 20 as the game goes on, so a strong stat can still lose.

## Layout

- `src/main.cpp` — starts the game and walks the player into the first encounter
- `src/functions.h` — the `Tribute` class and the function declarations
- `src/functions.cpp` — tribute stats, encounters, and `if_dead`

## Run

From the repository root:

```bash
g++ -std=c++17 -o hunger-games src/main.cpp src/functions.cpp
./hunger-games
```

## Stack

C++17. The program uses `unistd.h` for short pauses, so build it on macOS or Linux.
