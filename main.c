#include <stdio.h>

double CalculateTax(double cost) {
    return cost * .20;
}


int CostToShip(int weight){
    int cost;

    if (weight <= 2) {
        cost = 10;
    }
    else if (weight <= 8) {
        cost = 15;
    }
    else if (weight <= 20) {
        cost = 28;
    }
    else {
        cost = 35;
    }

    cost = cost + CalculateTax(cost);

    return cost;
}

int main(){
    int packageWeight;

    printf("Please enter package weight: \n");
    scanf_s("%d", &packageWeight);

    printf("Total cost to ship: $");
    printf("%d\n", CostToShip(packageWeight));

    return 0;


}


