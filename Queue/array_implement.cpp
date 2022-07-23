#include<bits/stdc++.h>
using namespace std;


struct Queue{
    int front,rear,capacity;
    int * queue;
    Queue(int n){
        capacity = n;
        front = rear = 0;

         queue = new int;
    }
    ~Queue() {delete [] queue; }

    void queueEnqueue(int data){
        if(capacity == rear){
        cout<<"Capacityis full \n";
        return;}
        else{
            queue[rear] = data;
            rear++;
        }
        return;
    }
    void queueDequeue(){
        if(front == rear){
            cout<<"Queue is Empty"<<endl;
            return ;
        }
        else{
            for(int i=0;i<rear-1;i++){
                queue[i] = queue[i+1];
            }
            rear--;
        }
    }
    void display(){
        int i;
        if(front == rear){
            cout<<"Queue Is Empty\n";
            return;
        }
        for(int i=0;i<rear;i++){
            cout<<"queue data is "<<queue[i]<<" ";
        }
        return;
    }
    void queuefront(){
        if(front == rear){
            cout<<"Queue is empty \n";
        }
        cout<<"Front Element is "<<queue[front];
        return;
    }
};


int main(){
    Queue q(5);
    q.display();
    q.queueEnqueue(6);
    q.queueEnqueue(90);
     q.queueEnqueue(40);
    q.queueEnqueue(50);
    q.display();
}
