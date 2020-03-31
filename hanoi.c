/*
Author: Joachim Larsen Mathisen
Program: Tower of Hanoi
 
  =         |        |
  ==        |        |
  ===       |        |
#######  #######  #######
   A        B        C

Rules:
The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:
1) Only one disk can be moved at a time.
2) Each move consists of taking the upper disk from one of the stacks and placing it on top 
   of another stack or on an empty rod.
3) No larger disk may be placed on top of a smaller disk.
   With 3 disks, the puzzle can be solved in 7 moves. The minimal number of moves required to 
   solve a Tower of Hanoi puzzle is 2n − 1, where n is the number of disks.
*/

/*

*/
#include <stdio.h>

void hanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    // n = num of disk, from_rod = where the disk is now, to_rod = where the disk goes to, aux_rod = the extra rod
    
    // We only move one disk at a time
    if (n == 1)
    {
        printf("\nMove disk 1 from rod %c to rod %c", from_rod, to_rod);
    }

    // function calls itself
    // First, we move top disk from A to C
    hanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\nMove disk %d from %c to %c", n, from_rod, aux_rod);
    // Second, we move the top disk of C to B
    hanoi(n-1, aux_rod, to_rod, from_rod);

}

int main()
{
    /* Starting point of the program */
    int n = 4; // Sets the number of disks in play
    hanoi(n, 'A', 'C', 'B'); // A, B, C are the rods. We start by moving top of A to C
    return 0;
}
