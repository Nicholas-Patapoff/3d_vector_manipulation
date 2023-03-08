#include<iostream> 
#include<string>
#include "functions.cpp"

int main(){



vector_var trial;

double angles = trial.angle(trial.i, trial.j, trial.k);


std::cout << angles * 180 / acos(-1) << std::endl;

double cross[3];

trial.c_product(trial.i, trial.j, cross);

for(int t = 0; t < 3; t++){

    std::cout << cross[t] << " " ;

}

    
}