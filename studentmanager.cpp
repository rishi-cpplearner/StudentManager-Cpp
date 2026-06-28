#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
int main()
{
    std::string x;
    std::map<std::string, int> studentMarks;
    std::string UserInput;
    std::vector<int> help;
    std::string highestStudent;
    int helping;
    std::string StudentToDelete;
    std::string StudentName;
    std::vector<int> Studentmarks;
    std::vector<std::string> Studentname;
    int StudentMarks;
    std::cout << "===============Student Manager===============" << std::endl;
    while (UserInput != "E")
    {
        std::cout << "\n1. Add Student \n2. Delete Student \n3. Find Highest Scorer \n4. Find Lowest Scorer \n5. Get Info \n6. Show All Students \n Or Press E and Enter to exit" << std::endl;
        std::cin >> UserInput;
        if (UserInput == "1")
        {
            std::cout << "Enter Student's Name: ";
            std::cin >> StudentName;
            std::cout << "\nEnter Student's Marks: ";
            std::cin >> StudentMarks;
            Studentname.push_back(StudentName);
            Studentmarks.push_back(StudentMarks);
            studentMarks[StudentName] = StudentMarks;
            help.push_back(StudentMarks);
            std::cout << "\nDone \n"
                      << std::endl;
        }
        if (UserInput == "2")
        {
            std::cout << "\nChoose Student (Name)" << std::endl;
            for (std::string a : Studentname)
            {
                std::cout << ". " << a << "\n"
                          << std::endl;
            }
            std::cin >> StudentToDelete;
            studentMarks.erase(StudentToDelete);
            std::cout << "Student " << StudentToDelete << " Has Been Removed\n"
                      << std::endl;
        }
        if (UserInput == "5")
        {
            std::cout << "Name : Marks\n";
            for (auto const &[name, marks] : studentMarks)
            {
                std::cout << name << " : " << marks << std::endl;
            }
            std::cout << std::endl;
        }
        if (UserInput == "6")
        {
            std::cout << std::endl;
            for (auto const &[name, marks] : studentMarks)
            {
                std::cout << name << std::endl;
            }
            std::cout << std::endl;
        }
        if (UserInput == "3")
        {
            helping = *std::max_element(help.begin(), help.end());
            for (auto const &[x, z] : studentMarks)
            {
                help.push_back(z);
                if (helping == z)
                {
                    std::cout << x << ":" << z;
                }
            }
        }
        if (UserInput == "4")
        {
            helping = *std::min_element(help.begin(), help.end());
            for (auto const &[x, z] : studentMarks)
            {
                help.push_back(z);
                
                if (helping == z)
                {
                    std::cout << x << ":" << z;
                }
            }
        }
    }
    return 0;
}
