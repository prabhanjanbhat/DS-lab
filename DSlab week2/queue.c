#include <stdio.h>

int front=-1, rear=-1, Q[6];
void insert(int x){
    if(rear == 5){
        printf("Queue is full!\n");

    }
    else{
        rear++;
        Q[rear] = x;

    }
}

void delete(){
    if(front == rear){
        printf("Queue is empty\n");

    }
    else{
        for(int i = 0;i<rear;i++){
            Q[i] = Q[i+1];
        }
        rear--;
    }
}

void display(){
    if(front==rear){
        printf("Queue is empty\n");

    }
    else{
        for(int i = front;i<= rear;i++){
            printf("%d",Q[i]);
        }
    }
}

int main()
{
    int n=0,ele,e=0;
    while(n!=4){
        printf("\nEnter\n1. to insert\n2. to delete\n3. to display\n4. to exit\n");
        scanf("%d",&n);
        switch(n){
            case 1:
                printf("Enter element to insert:");
                scanf("%d",&ele);
                insert(ele);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
        }
    }

    return 0;
}
