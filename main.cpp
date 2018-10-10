#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    int offset;
    string line;
    char* search = "a";



    ifstream fileInput ;
    char fileName[100];
    cout << "Enter the name of a file: ";
    cin.getline(fileName, 81);
    fileInput.open(fileName);

    cout<< "Enter the name you want to search" <<endl;
    cin>>search;


    if(fileInput.is_open() )
    {
        //while(!namesfile.eof())
        while(getline(fileInput, line))
        {

            //namesfile>>search;
            getline(fileInput,line );

            //cout<<line;

            if ((offset = line.find(search, 0)) != string::npos)
            {
                cout << "the name has been founded : " << search <<endl;
            }
        }
        unsigned int curLine = 0;
        while(getline(fileInput, line))
        {
            curLine++;
            if (line.find(search, 0) != string::npos)
            {
                cout << "found: " << search << "line: " << curLine << endl;
            }
        }
        fileInput.close();
    }
    else
    {
        cout << fileName <<" "<< "could not be opened"<<endl;

    }


    return 0;
}
