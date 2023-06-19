#ifndef PRACTICESTRCUTURE_
#define PRACTICESTRCUTURE_
#include <queue>

using namespace std;

int i = 0;

class PracticeStructure
{
    public:
        int Int;
        string String;
        PracticeStructure *LeftChild, *RightChild;
};

PracticeStructure *Create(int x, string y)
{
    PracticeStructure *New = new PracticeStructure();
    if (!New)
    {
        cout << "Memory error\n";
        return NULL;
    }
    
    New->Int = x;
    New->String = y;
    New->LeftChild = New->RightChild = NULL;
    return New;
}

PracticeStructure *Insert(PracticeStructure *Root, int x, string y)
{
    if(Root == NULL)
    {
        Root = Create(x, y);
        return Root;
    }

    queue<PracticeStructure *> q;
    q.push(Root);

    while(!q.empty())
    {
        PracticeStructure *temp = q.front();
        q.pop();

        if(temp->LeftChild != NULL)
        {
            q.push(temp->LeftChild);
        }

        else
        {
            temp->LeftChild = Create(x, y);
            return Root;
        }

        if (temp->RightChild != NULL){
            q.push(temp->RightChild);
        }

        else
        {
            temp->RightChild = Create(x, y);
            return Root;
        }
    }
}

int height(PracticeStructure *x)
{
    if(x == NULL)
    {
        return 1;
    }

    else
    {
        int lh = height(x->LeftChild);
        int rh = height(x->RightChild);

        if(lh > rh)
        {
            return (lh + 1);
        }
        else
        {
            return (rh + 1);
        }
    }
}

void CurrentLevel(PracticeStructure *x, int Level)
{
    if(x == NULL)
    {
        return;
    }

    if(Level == 1)
    {
        cout << x->Int << ". " << x->String << endl;
    }

    else if(Level > 1)
    {
        CurrentLevel(x->LeftChild, Level - 1);
        CurrentLevel(x->RightChild, Level - 1);
    }
}

void Visit(PracticeStructure *x)
{
    cout << i + 1 << ". " << x->String;
    cout << endl;
    i++;
}

void Inorder(PracticeStructure* Root)
{
    if(Root == NULL)
    {
        return;
    }
    Inorder(Root->LeftChild);
    Visit(Root);
    Inorder(Root->RightChild);
}

void LevelOrder(PracticeStructure *x)
{
    int h = height(x);

    for(i = 0; i <= h; i++)
    {
        CurrentLevel(x, i);
    }
}

#endif