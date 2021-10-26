#include <iostream>
using namespace std;
int n, a;
int top=-1;
int stack[10];
int isEmpty(){
    {
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return 1;
        }
        else{
            for(int i=top; i>=0; i--)
                cout<<stack[top]<<endl;
        return 0;
        }
    }
}
void pop(){
    int yu = isEmpty();
    if(yu!=1){
        cout<<stack[top-1]<<" is poped";
        top--;

    }
}

int isFull(){
    {
        if(top==n-1)
        {
            cout<<"Stack is full"<<endl;
            return 1;
        }
        else
        cout<<"Enter an element: "<<endl;
        return 0;
    }

}

void push(){
    int tu = isFull();
    if(tu!=1){
        top++;
        cin>>stack[top];
        cout<<"Current top: "<<top<<endl;
        cout<<"Stack value at top: "<<stack[top-1]<<endl;
        if(top==n-1)
        {
            cout<<"Stack is full"<<endl;
        }
    }
}

void show()
{
    int i;
    //cout<<"printing top val: "<<top<<endl;
    cout<<"Stack elements: "<<endl;
    for(i=top; i>=0; i--)
    {
        cout<<stack[i]<<endl;
    }
}
int main(){
    
    int ch;
    cout<<"Enter size of the stack: "<<endl;
    cin>>n;
    cout<<"Choose any one operation: "<<endl;
    do{
        cout<<"-------"<<endl;
        cout<<"Options: "<<endl;
        cout<<"1. Check if stack is empty"<<endl;
        cout<<"2. Check if the stack is full"<<endl;
        cout<<"3. POP"<<endl;
        cout<<"4. PUSH"<<endl;
        cout<<"5. SHOW"<<endl;
        cout<<"6. EXIT"<<endl;

        cin>>ch;
        switch(ch)
        {
            case 1: isEmpty();
            break;
            case 2: isFull();
            break;
            case 3: pop();
            break;
            case 4: push();
            break;
            case 5: show();
            break;
            case 6: cout<<"End"<<endl;
            break;
            default: cout<<endl<<"Enter valid choice"<<endl;
        }

    }while(ch!=6);
}
