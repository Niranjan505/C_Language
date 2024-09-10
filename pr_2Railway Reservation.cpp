#include <iostream>
#include <cstring> 


class Train 
{
    
private:
    int trainNumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[10];
    static int trainCount;

public:
    
    Train() : trainNumber(0) 
   {
        strcpy(trainName, "");
        strcpy(source, "");
        strcpy(destination, "");
        strcpy(trainTime, "");
        trainCount++;
    }

    
    Train(int number, const char* name, const char* src, const char* dest, const char* time) 
    : trainNumber(number) 
   {
        strcpy(trainName, name);
        strcpy(source, src);
        strcpy(destination, dest);
        strcpy(trainTime, time);
        trainCount++;
    }

    
    ~Train() {
        trainCount--;
    }

    
    void setTrainNumber(int number) { trainNumber = number; }
    int getTrainNumber() const { return trainNumber; }

    void setTrainName(const char* name) { strcpy(trainName, name); }
    const char* getTrainName() const { return trainName; }

    void setSource(const char* src) { strcpy(source, src); }
    const char* getSource() const { return source; }

    void setDestination(const char* dest) { strcpy(destination, dest); }
    const char* getDestination() const { return destination; }

    void setTrainTime(const char* time) { strcpy(trainTime, time); }
    const char* getTrainTime() const { return trainTime; }

    static int getTrainCount() { return trainCount; }

    
    void inputTrainDetails() 
   {
        std::cout << "Enter Train Number: ";
        std::cin >> trainNumber;
        std::cin.ignore(); 

        std::cout << "Enter Train Name: ";
        std::cin.getline(trainName, 50);

        std::cout << "Enter Source: ";
        std::cin.getline(source, 50);

        std::cout << "Enter Destination: ";
        std::cin.getline(destination, 50);

        std::cout << "Enter Train Time: ";
        std::cin.getline(trainTime, 10);
    }

    void displayTrainDetails() const 
   {
        std::cout << "Train Number: " << trainNumber << std::endl;
        std::cout << "Train Name: " << trainName << std::endl;
        std::cout << "Source: " << source << std::endl;
        std::cout << "Destination: " << destination << std::endl;
        std::cout << "Train Time: " << trainTime << std::endl;
    }
};

int Train::trainCount = 0;


class RailwaySystem 
{
private:
    Train trains[100]; 
    int totalTrains;   

public:
    RailwaySystem() : totalTrains(0) {}

    void addTrain() 
   {
        if (totalTrains < 100) 
        {
            Train newTrain;
            newTrain.inputTrainDetails();
            trains[totalTrains++] = newTrain;
        } else 
        {
            std::cout << "Cannot add more trains. Capacity full." << std::endl;
        }
    }

    void displayAllTrains() const 
   {
        if (totalTrains == 0) 
        {
            std::cout << "No train records to display." << std::endl;
            return;
        }

        for (int i = 0; i < totalTrains; ++i) 
        {
            std::cout << "Train " << (i + 1) << " details:" << std::endl;
            trains[i].displayTrainDetails();
            std::cout << std::endl;
        }
    }

    void searchTrainByNumber(int number) const 
  {
        bool found = false;
        for (int i = 0; i < totalTrains; ++i) 
        {
            if (trains[i].getTrainNumber() == number) 
            {
                std::cout << "Train details found:" << std::endl;
                trains[i].displayTrainDetails();
                found = true;
                break;
            }
        }
        if (!found) 
        {
            std::cout << "Train with number " << number << " not found!" << std::endl;
        }
    }
};


int main() {
    RailwaySystem system;
    int choice;

 
    system.addTrain();
    system.addTrain();
    system.addTrain();

    do {
        std::cout << "--- Railway Reservation System Menu ---" << std::endl;
        std::cout << "1. Add New Train Record" << std::endl;
        std::cout << "2. Display All Train Records" << std::endl;
        std::cout << "3. Search Train by Number" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) 
        {
            case 1:
                system.addTrain();
                break;
            case 2:
                system.displayAllTrains();
                break;
            case 3: 
            {
                int number;
                std::cout << "Enter Train Number to search: ";
                std::cin >> number;
                system.searchTrainByNumber(number);
                break;
            }
            case 4:
                std::cout << "Exiting the system. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }

    } while (choice != 4);

    
}
