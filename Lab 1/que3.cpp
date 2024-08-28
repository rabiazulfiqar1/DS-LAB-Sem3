#include<iostream>
#include<cstring>
using namespace std;

class Document
{
    const char* textContent;

public:
    //Default Constructor
    Document()
    {
        textContent = " ";
    }

    //Parameterized Constructor
    Document( const char* text )
    {
        textContent = new char[strlen( text ) + 1];
        textContent = text;
    }

    //Destructor
    ~Document()
    {
        delete textContent;
    }

    //Copy Constructor
    Document( Document& doc )
    {
        textContent = new char[strlen( doc.textContent ) + 1];
        textContent = doc.textContent;
    }

    //Overloading Assignment Operator
    Document& operator=( Document& doc )
    {
        if (this != &doc)
        {
            textContent = new char[strlen( doc.textContent ) + 1];
            textContent = doc.textContent;
        }
    }

    void SetContent( const char* text )
    {
        textContent = text;
    }

    void PrintContent()
    {
        cout << textContent << endl;
    }
};

int main()
{
    const char* text = "Hey, my name is rabia";
    Document doc( text );
    Document doc1 = doc;

    //modifying the original one
    doc.SetContent( "Hey, my name is talha" );

    Document doc3;
    doc3 = doc;
    doc.PrintContent();
    doc1.PrintContent();
    doc.PrintContent();
    doc3.PrintContent();
}