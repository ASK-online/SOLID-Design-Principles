#include<iostream>

class Workout{
  public:
    virtual void printWorkoutProgram() = 0;
};

class Calorie{
  public:
    virtual void printCalorieProgram() = 0;
};

class My_Workout : public Workout{
  public:
    void printWorkoutProgram() override;
};

class My_Calorie : public Calorie{
  public:
    void printCalorieProgram() override;
};

class Daily_Routine : public Workout , Calorie{
  public:
    void printWorkoutProgram() override;
    void printCalorieProgram() override;
};


int main(){

return 0;
}