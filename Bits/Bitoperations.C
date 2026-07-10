
#include <stdio.h>
void Bitset(unsigned char *reg,int position)
{
*reg = *reg | (1 << position);
return;
}

void Bitclear(unsigned char *reg,int position)
{
*reg = *reg & ~(1 << position);
return;
}
void bitcheck(unsigned char *reg,int position)
{
if((*reg & (1 << position)) != 0)
{
printf("Bit %d is set\n",position);
}
else
{
printf("Bit %d is not set\n",position);
}
}

int main() {
	unsigned char reg = 0;
    while (1)
    {
        printf("Enter command (set(1), clear(2), check(3)) and position (0-7) or 4 for exit: ");
        int command;
        int position;
        scanf("%d %d", &command, &position);
        if (command == 1)
        {
            Bitset(&reg, position);
        }
        else if (command == 2)
        {
            Bitclear(&reg, position);
        }
        else if (command == 3)
        {
            bitcheck(&reg, position);
        }
        else if (command == 4)
        {
            break;
        }
        else
        {
            printf("Invalid command\n");
        }
    }
    
    return 0;
}
