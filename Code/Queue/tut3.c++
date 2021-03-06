/* How to efficiently implement k Queues in a single array -> Create a data structure kQueues that represents k queues. Implementation of kQueues should use only one array, i.e., k queues should use the same array for storing elements. Following functions must be supported by kQueues.
enqueue(int x, int qn) –> adds x to queue number ‘qn’ where qn is from 0 to k-1
dequeue(int qn) –> deletes an element from queue number ‘qn’ where qn is from 0 to k-1
*/

#include <bits/stdc++.h>
using namespace std;

class kQueue
{
public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int *next;
    int freeSpot;

    kQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        arr = new int[n];
        freeSpot = 0;
    }

    void enqueue(int data, int queueNumber)
    {
        // overflow
        if (freeSpot == -1)
        {
            cout << "Queue is overflow" << endl;
            return;
        }

        // find first free index
        int index = freeSpot;

        // update freespot
        freeSpot = next[index];

        // check for first element
        // queueNumber - 1 bcoz of 0 based indexing
        if (front[queueNumber - 1] == -1)
        {
            front[queueNumber - 1] = index;
        }
        else
        {
            // link new queue element to the prevoius queue element
            next[rear[queueNumber - 1]] = index;
        }

        // update next;
        next[index] = -1;

        // update rear
        rear[queueNumber - 1] = index;

        // push element
        arr[index] = data;
    }

    int dequeue(int queueNumber)
    {
        // underflow
        if (front[queueNumber - 1] == -1)
        {
            cout << "Queue is underflow" << endl;
            return -1;
        }

        // find index to pop
        int index = front[queueNumber - 1];

        // front ko aage badhao
        front[queueNumber - 1] = next[index];

        // freespot ko manage karo
        next[index] = freeSpot;
        freeSpot = index;

        // return ans
        return arr[index];
    }
};

int main()
{
    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout << "Dequeued element from queue 1 is: " << q.dequeue(1) << endl;
    cout << "Dequeued element from queue 2 is: " << q.dequeue(2) << endl;
    cout << "Dequeued element from queue 1 is: " << q.dequeue(1) << endl;
    cout << "Dequeued element from queue 1 is: " << q.dequeue(1) << endl;

    return 0;
}