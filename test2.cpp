#include <iostream>
#include <string>
#include "Class_Theater.cpp"
using namespace std;

int main()
{
    Theater theater;

    // Purchase tickets
    theater.PurchaseTicket("Alice");
    theater.PurchaseTicket("Bob");
    theater.ReserveTicket("Charlie", 4);
    theater.PurchaseVIPTicket("Dave", 8);
    theater.PurchaseTicket("Eve");
    theater.PurchaseTicket("Frank");
    theater.PurchaseTicket("Grace");

    // Customer entry
    theater.CustomerEntry();

    // Make the theater full
    for (int i = 0; i < 20 - 7; i++)
    {
        theater.PurchaseTicket("Guest" + to_string(i));
    }

    // Cancel tickets and purchase
    theater.CancelTicket(5);
    theater.CancelTicket(11);
    theater.PurchaseTicket("Ivy");

    // Customer entry when theater is full
    theater.CustomerEntry();

    // Purchase ticket after entry
    theater.PurchaseTicketAfterEntry("Jack");

    return 0;
}
