#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    std::vector<std::string> tasks;
    std::cout << "Welcome to Task List Tool!\n\n";
    std::cout << "Menu Options: \n1. Add Task \n2. View Tasks \n3. Remove Task \n4. Quit \n\n" ;
    std::cout << "Task list system initialized and ready!\n";
    int ch  =0;
                    std::string task;
    while(ch!=4)
{   std::cout << "Choose an option: ";
    
    scanf(" %d",&ch); // a space before %d to discard newlines 
    if(ch >4 || ch <1){
        std::cout << "Invalid choice. Please try again.\n";
        continue;
    }
    switch(ch){
        case 1 :
                    std::cin.ignore(); //cin.ignore() to discard the leftover newline before reading task strings with getline()
                    getline(std::cin , task);
                    tasks.push_back(task);
                
                std::cout << "Task \""<< *(tasks.end()-1) <<"\" added successfully!\n";          
                std::cout << "Total tasks: " << tasks.size() << std::endl;
                break;
        case 2 :if (tasks.empty()) {
                std::cout << "No tasks available." << std::endl;
                } else {
                    std::cout << "Your Tasks:" << std::endl;
                    for (int i = 0; i < tasks.size(); i++) {
                    std::cout << (i + 1) << ". " << tasks[i] << std::endl;
                }
                        std::cout << "Total tasks: " << tasks.size() << std::endl;
                }
                break;
        case 3 :int taskNumber ; // 1-based indexing
                std::cin >> taskNumber;
                if(taskNumber <= tasks.size() && taskNumber >= 1 ){
                int j ;
                for(int i = 0 ; i < tasks.size() ; ++i){
                if(taskNumber-1 == i ){
                    std::cout << "Task \"" << tasks[i] << "\" removed successfully!\n";
                    tasks.erase(tasks.begin()+i);
                }
                }
                if(tasks.empty()){
                    std::cout << "No tasks remaining.\n";
                    std::cout << "Total tasks: " << tasks.size() << std::endl;
                }else{
                    std::cout << "Remaining Tasks: \n";
                for (int i = 0; i < tasks.size(); i++) {
                    std::cout << (i + 1) << ". " << tasks[i] << std::endl;
                }
                    std::cout << "Total tasks: " << tasks.size() << std::endl;
                }
        
                }else{
                    std::cout << "Error: Invalid task number. Please enter a number between 1 and "<< tasks.size()<<"." << "\n";
                }
                break;
        case 4: std::cout << "Thank you for using Task List Tool!\n";
                return 0;
    }
    
    }
}