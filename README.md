# SeaOfCreatures
A project for CS16 that uses structures and mutidimensional arrays.

We are going to play a version of The Game of Life: https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life

Our version is ocean themed and the rules are a bit more complex. 

Read the Rules of Life and the What You Need To Implement in order to understand your job as a programmer for a piece in the game of life.

## Rules of Life

1. All Organisms can be either HEALTHY, SICK, or DEAD
2. All Organisms have a color of RED, ORANGE, YELLOW, GREEN, BLUE, or PURPLE
3. Plants and Creatures are both Organisms
4. Plants cannot move
5. Plants cannot eat anything
6. Plants may be poisonous, but only to Organisms of one specific color
7. If a poisonous plant is eaten by a Creature it is poisonous to, the Plant's status changes to SICK
8. Creatures can move
9. Creatures are either a CARNIVORE, HERBIVORE, OMNIVORE, or SCAVENGER
10. Creatures who are CARNIVORES can only eat Creatures who occupy the same position in the matrix as they do by the END of their turn
11. Creatures who are CARNIVORES can only eat Creatures who are smaller or equal to them in size
12. If a HEALTHY Creature is eaten by another Creature of the same size, its status changes to SICK
13. If a SICK Creature is eaten by another Creature of the same size, its status changes to DEAD
14. If a Creature is eaten by a larger Creature, its status changes to DEAD
15. Creatures who are HERBIVORES can only eat Plants who occupy the same position in the matrix as they do by the END of their turn
16. If a HEALTHY HERBIVORE eats a plant that is poisonous to it, its status changes to SICK
17. If a SICK HERBIVORE eats a plant that is poisonous to it, its status changes to DEAD
18. The eating rules that apply to CARNIVORES and HERBIVORES are all true for OMNIVORES
19. Creatures who are SCAVENGERS can only eat Organisms that are DEAD and who occupy the same position in the matrix as they do by the END of their turn
20. Every 10 turns a Creature takes without eating, its status declines (i.e. if it is HEALTHY it becomes SICK, if it is SICK it becomes DEAD
21. Whenever a Creature goes from being HEALTHY to SICK, it's velocity decreases by half.
22. Turns are taken in a Round Robin fashion
23. DEAD Organisms do not take Turns, but still occupy space in the matrix
24. The Game Of Life ends when there is only 1 Organism left in the matrix *OR* there have been no changes in Organism statuses after 100 times through the list of remaining Organisms  

## What You Need To Implement

You are responsible for implementing a Creature or Plant structure that MUST comply with the Rules of Life. You will implement these structures in the file Creatures/ of this repository. 

### 1. Implement an Organism Structure
I provided three examples in this repository (PickyDolphin.h, BlueTuna.h, and PoisonSeaweed.h). All of the Organisms comply with the Rules of Life, but some are special (if you look in the code, you will see PickyDolphin has some dietary restrictions).

Post your Organism structure name to the GauchoSpace forum so we do not have to deal with duplicates (before you post, make sure no one else has posted your Organisms structure name):

If I wanted to make a new Organism structure called HungryStarfish, I would post "HungryStarfish" to the GauchoSpace forum. I would then create a file called HungryStarfish.h in the Creatures/ directory. 

### Add it to the setupGameboard function in main.cpp

In main.cpp, there is a function called setupGameboard. In this function, make a call to addOrganism. Follow the instructions below based on an example from PickyDolphin:

```
// Adding PickyDolphin pd to the gameboard
PickyDolphin pd = PickyDolphin("Picky Little Dolphin", 5000, Purple);
addOrganism(pd);
```

### Pull request
If your fork of the code compiles, make a pull request. 
