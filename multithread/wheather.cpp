
// demonstarting multithreading
#include <iostream>
#include <thread>
#include <chrono>
#include <map>
#include <fstream>
#include <utility>
#include <vector>
#include <mutex>
using namespace std;
// function updating wheather in background
mutex mux;
void updateForcast(map<string, int> forcast)
{
    // open file awith append mode
    ofstream outFile("C:/Users/Rahman Khan/Desktop/wheather.txt", ios::app); // file open in append mode
    if (!outFile)
    {
        cerr << "Error opening file" << endl;
        return;
    }

    vector<pair<string, double>> vec; // define pair vector

    while (true)
    {
        lock_guard<mutex> lock(mux);

        for (auto &item : forcast)
        {
            item.second++;
            double f = (item.second * 1.8) + 32;
            vec.push_back(make_pair(item.first, f)); // store in vector

            // outFile << item.first << "-" << f << "f" << endl; // store in file using outFile<<
            cout << item.first << "-" << f << "f" << endl; // print on console
        }

        // write vec into file
        for (const auto &item : vec)
        {
            outFile << item.first << "-" << item.second << "f" << endl;
            cout << item.first << "-" << item.second << "f" << endl;
        }

        outFile << "-----------------" << endl; // some sepeeration b/w two outputs
        outFile.flush();                        // immediate data writing
        cout << "\n";
        this_thread::sleep_for(2000ms);
    }
}

// main
int main()
{
    // map holding intital wheather data
    map<string, int> forcast = {
        {"Delhi", 23},
        {"Mumbai", 20},
        {"Kolkata", 25}};

    thread bgUpdate(updateForcast, forcast);
    bgUpdate.join();

    return 0;
}