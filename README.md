# SeaOfCreatures
A project for CS16 that uses structures and mutidimensional arrays.

= Rules of Life =

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
