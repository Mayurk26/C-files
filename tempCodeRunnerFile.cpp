

void queue :: display()
{
    cout<<"Elements in queue are : ";
    for(int i=front+1;i<=rear;i++)
    {
        cout<<que[i];
    }
    cout<<endl;
}

void queue :: delq()
{
    if(front == rear)