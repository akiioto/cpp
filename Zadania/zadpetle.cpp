#include <iostream>

using namespace std;

void forpp(int start, int end)
{
        for (int i = start; i<= end; i++)
    {
        cout << "Twoja liczba to: "<< i <<endl;
        if (i%2 == 0)
        {
            continue;
        }
        if(i >= 100)
        {
            break;
        }
        cout<<"liczba nie parzysta"<<endl;
    }
}

void ppfor(int start, int end)
{
        for (int i = start; i<= end; ++i)
    {
        cout << "Twoja liczba to: "<< i <<endl;
        if (i%2 == 0)
        {
            continue;
        }
        if(i >= 100)
        {
            break;
        }
        cout<<"liczba nie parzysta"<<endl;
    }
}

void whilepp(int start,int end)
{
    int i  = start;
    while (i++<end)
    {
        cout << "Twoja liczba to: "<< i <<endl;
        if (i%2 == 0)
        {
            continue;
        }
        if(i >= 100)
        {
            break;
        }
        cout<<"liczba nie parzysta"<<endl;
    }
    
}

void ppwhile(int start,int end)
{
    int i  = start;
    while (++i<end)
    {
        cout << "Twoja liczba to: "<< i <<endl;
        if (i%2 == 0)
        {
            continue;
        }
        if(i >= 100)
        {
            break;
        }
        cout<<"liczba nie parzysta"<<endl;
    }
    
}

void dowhilepp(int start,int end)
{
    int i = start;
    do
    {
        cout << "Twoja liczba to: "<< i <<endl;
        if (i%2 == 0)
        {
            continue;
        }
        if(i >= 100)
        {
            break;
        }
        cout<<"liczba nie parzysta"<<endl;
    } while (i++<end);
    
}
void ppdowhile(int start,int end)
{
    int i = start;
    do
    {
        cout << "Twoja liczba to: "<< i <<endl;
        if (i%2 == 0)
        {
            continue;
        }
        if(i >= 100)
        {
            break;
        }
        cout<<"liczba nie parzysta"<<endl;
    } while (++i<end);
    
}

int main()
{
    int start, end; 

    cout << "Start with: " << endl;
    
	cin >> start;
    
	cout << "End with: " << endl;
    
	cin >> end;
    
	cout << "for i++: " << endl;  
    
	forpp(start,end);
    
	cout << "for ++i: " << endl;
    
	ppifor(start,end);
    
	cout << "while i++: "<<endl;
    
	whilepp(start,end);
    
	cout << "while ++i: "<<endl;
    
	ppwhile(start,end);
    
	cout<<"do while i++: "<<endl;
    
	dowhilepp(start,end);
    
	cout<<"do while ++i: "<<endl;
    
	ppdowhile(start,end);


    return 0;
}
