#include<stdio.h>
#define size 100
void enqueue();
void dequeue();
void show();
int inp_array[size];
int rear=-1,i;
int front=-1;
main()
{
	int ch;
	while(1)
	{
		printf("1.enqueue operation\n");
		printf("2.dequeue operation\n");
		printf("3.display the queue\n");
		printf("4.exit\n");
		printf("enter your choice of operations:");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
			enqueue();
			break;
			case 2:
			dequeue();
			break;
			case 3:
			show();
			break;
			case 4:
			exit(0);
			default:
			printf("incorrect choice\n");
			
			
        }
		
	}
	
}
void enqueue()
{
	int insert_item,front,rear,inp_arr;
	if(rear==size-1)
	printf("overflow\n");
	else
	{
        if (Front == - 1)
      
        Front = 0;
        printf("Element to be inserted in the Queue\n : ");
        scanf("%d", &insert_item);
        Rear = Rear + 1;
        inp_arr[Rear] = insert_item;
    }
} 
void dequeue()
{   
    int front,rear,inp_arr;
    if (Front == - 1 || Front > Rear)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", inp_arr[Front]);
        Front = Front + 1;
    }
} 
void show()
{
    int front,rear,inp_arr;
    if (Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (i = Front; i <= Rear; i++)
            printf("%d ", inp_arr[i]);
        printf("\n");
    }
}

