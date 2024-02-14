# Summary

This is a text-based adventure game based on the series, "The Hunger Games". In this game, the user will be prompted to pick a tribute they wish to play as. They will then be given the stats of the player, then the games will begin. In this game, the user will be put in scenarios where they have to make choices to survive. Throughout the game, it will become harder to survive with the odds stacked against you.

# Switch-Case

In the code, I chose to use switch-case statements to be the main tool for this project. These statements allow me to effectively put the user in scenarios where they would pick a choice, and move on from there. I was also able to utilize classes and functions to be able to shorten my code and have it run more smoothly.

# Stats

I have decided on stats for each tribute, and those can be viewed in the code "functions.cpp". These stats play a key role throughout the game, and certain tributes will be more prepared for certain scenarios compared to others. The stats for all tributes max out to 200, and the stats cover camouflage, speed, strength, etc. How these stats will be used in the code will be described below in the "Math Logic" explanation. 

# Math Logic

While the user plays the game, the odds will stack up against them over time. How does that happen? Well, I am so glad you asked, I can explain. Below is the function I use to determine whether a tribute lives or dies in a specific scenario. 

'''python
bool if_dead(int trait, int liveChance) {
    srand(time(0)); int chance = rand() % 100 + 1;
    if (((trait + liveChance) / chance) < 1) {
        return true;
    }
    return false;
}
'''

This block of code takes in the stats of the tribute being tested and the chance of living. Throughout the encounters faced, the chance of living decreases from 100 to 20. This causes luck to be a factor when playing, no matter how prepared the user is for any situation.
