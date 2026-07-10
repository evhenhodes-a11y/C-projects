
#include <stdio.h>
void bitset(unsigned char *reg,int position)
{
*reg = *reg | (1 << position);
return;
}

void bitclear(unsigned char *reg,int position)
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

void printregister(unsigned char reg)
{
    printf("Current register value: ");
    for (int i = 7; i >= 0; --i)
    {
        printf("%d", (reg >> i) & 1);
    }
    printf("\n");
}

int main() {
	unsigned char reg = 0;
    while (1)
    {
        printregister(reg);
        printf("Enter command (set(1), clear(2), check(3)) and position (0-7) or 4 for exit: ");
        int command;
        int position;
        while(1){
        scanf("%d", &command);
            if(command >= 1 && command <= 4)
            {
                if(command == 4)
                {
                    return 0;
                }
                break;
            }
        else{printf("Invalid command\n");}
        }
        while(1){
        scanf("%d", &position);
            if(position >= 0 && position <= 7)
            {
                break;
            }
        else{printf("Invalid position\n");}
        }
        if (command == 1)
        {
            bitset(&reg, position);
        }
        else if (command == 2)
        {
            bitclear(&reg, position);
        }
        else if (command == 3)
        {
            bitcheck(&reg, position);
        }
        
    }
    
    return 0;
}
