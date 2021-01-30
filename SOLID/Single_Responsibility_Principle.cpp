#include <iostream>
#include <vector>
#include <fstream>
#include <memory>

class Workout{
    
private:
std::vector<std::string> today;

public:
void workout_day(std::string day){
    if (day == "Monday" || day == "Wednesday" || day == "Friday"){
        today.push_back("Workout Day");
    }
}

void workout_file(const std::string &filename){
    std::ofstream ofs(filename); 
        for (auto os : today)
            ofs << os;       
}
};

int main(){

auto w = std::unique_ptr<Workout>{new Workout};
w->workout_day("Friday");
w->workout_file("file.txt");

return 0;
}