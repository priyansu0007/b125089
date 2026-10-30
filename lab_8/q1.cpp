#include <iostream>
using namespace std;

class Document{
public:
    virtual void exportFile() {
        cout<<"Exporting normal document...\n";
    }
    virtual ~Document(){}
};

class PDFDocument : public Document{
public:
    void exportFile() {
        cout<<"Exporting document in pdf format\n";
    }
};

class TextDocument : public Document{
public:
    void exportFile() {
        cout<<"Exporting document in Text format\n";
    }
};

class CSVDocument : public Document{
public:
    void exportFile() {
        cout<<"Exporting document in csv format\n";
    }
};

int main() {
    PDFDocument pdf;
    TextDocument txt;
    CSVDocument csv;

    Document* docPtr;

    docPtr = &pdf;
    docPtr->exportFile();

    docPtr = &txt;
    docPtr->exportFile();

    docPtr = &csv;
    docPtr->exportFile();

    return 0;
}
