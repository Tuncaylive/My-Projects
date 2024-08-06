// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
    std::wstring folderPath = L"C:\\skbidi";  

    if (CreateDirectory(folderPath.c_str(), NULL) || ERROR_ALREADY_EXISTS == GetLastError()) {
       // std::cout << "Folder created successfully." << std::endl;
    }
    else {
        std::cerr << "Failed to create folder. Error code: " << GetLastError() << std::endl;
    }
   
    // Create and open a text file
    ofstream MyFile("skibidi.txt");

    // Write to the file
    MyFile << "skibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidiskibidi";

    // Close the file
    MyFile.close();


    std::cout << "skibidi" << std::endl;

    

    std::cout << "skibidi dop dop yes yes" << std::endl;

    

    system("pause");

    std::cout << "good luck ^_^" << std::endl;

    system("pause");

   

   // string Input = "C:\\skibiditoilet.exe";
   // string CopiedFile = "skibiditoilet.exe";
     //string OutputFolder = "C:\\test";
    //CopyFile(Input.c_str(), string(OutputFolder + CopiedFile).c_str(), TRUE);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
