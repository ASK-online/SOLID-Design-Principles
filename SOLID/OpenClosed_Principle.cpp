#include <iostream>
#include <string>
#include <memory>

class Calorie{
public:
virtual void calorie_calc()=0;
};

class Weekly_Calorie : public Calorie{
public:
void calorie_calc(){ 
    std::cout << "Weekly Calorie\n"; 
    }
};

class Daily_Calorie : public Calorie{
public:
void calorie_calc() {
    std::cout << "Daily Calorie\n"; 
    }
};


class Calorie_Monitor{
public:
void calorie_calc(Calorie &c){ 
    c.calorie_calc(); 
    }
};

int main(){

Weekly_Calorie w;
Daily_Calorie d;
Calorie_Monitor m;

m.calorie_calc(w);
m.calorie_calc(d);

return 0;
}