#include<iostream>
using namespace std;
class Array
{
protected:
    int *Arr;
    int size;

public:
    Array(int value = 10)
    {
        cout << "Inside Connstructor\n";
        this->size = value;
        this->Arr = new int[size];
    }
    Array(Array &ref)
    {
        cout << "Inside copy connstructor\n";
        this->size = ref.size;
        this->Arr = new int[this->size];
        for (int i = 0; i < size; i++)
        {
            this->Arr[i] = ref.Arr[i];
        }
    }
    ~Array()
    {
        cout << "Inside Destructor\n";
        delete[] Arr;
    }
    inline void Accept();
    inline void Display();
};

void Array::Accept()
{
    cout << "Please enter the values\n";
    for (int i = 0; i < this->size; i++)
    {
        cin >> Arr[i];
    }
}

void Array::Display()
{
    cout << "Elements are\n";
    for (int i = 0; i < this->size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}

class ArrSearch : public Array
{
public:
    ArrSearch(int no = 10) : Array(no)
    {}
    int Frequency(int);
    int SearchFirst(int);
    int SearchLast(int);
    int EvenCount();
    int OddCount();
    int SumAll();
};

int ArrSearch::SearchFirst(int value)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (Arr[i] == value)
        {
            break;
        }
    }
    if (i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int ArrSearch::Frequency(int value)
{
    int icnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == value)
        {
            icnt++;
        }
    }
    return icnt;
}

int ArrSearch::SearchLast(int value)
{
    // Logic to search for the last occurrence of a number
    for (int i = this->size - 1; i >= 0; i--)
    {
        if (Arr[i] == value)
        {
            return i + 1;
        }
    }
    return -1;
}

int ArrSearch::EvenCount()
{
    // Logic to count even elements
    int count = 0;
    for (int i = 0; i < this->size; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int ArrSearch::OddCount()
{
    // Logic to count odd elements
    int count = 0;
    for (int i = 0; i < this->size; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

int ArrSearch::SumAll()
{
    // Logic to sum all elements
    int sum = 0;
    for (int i = 0; i < this->size; i++)
    {
        sum = sum + Arr[i];
    }
    return sum;
}

int main()
{
    cout << "Inside main\n";
    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    // Calling the completed functions
    int iret = sobj1.SearchLast(11);
    if (iret != -1)
    {
        cout << "Last occurrence is at position: " << iret << "\n";
    }
    else
    {
        cout << "Element not found\n";
    }

    iret = sobj1.EvenCount();
    cout << "Number of even elements: " << iret << "\n";

    iret = sobj1.OddCount();
    cout << "Number of odd elements: " << iret << "\n";

    iret = sobj1.SumAll();
    cout << "Sum of all elements: " << iret << "\n";

    return 0;
}