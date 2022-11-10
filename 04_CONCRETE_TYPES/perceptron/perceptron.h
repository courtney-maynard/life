#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define DIMENSIONS 3
#define MAX_ITERATIONS 100000

//Building: load the data and initialize models
void load_data(char *fname, double xcoords[], double ycoord[], double targets[]);
void initialize(double weights[]);

//Training: changing weights
void fit(double weights[], double xcoords[], double ycoords[], double targets[], int number_of_examples);

//Testing: pulling some data out to help evaluate the model's effectiveness


//Scoring: feed it a new point and have it give you back a prediction
int predict(double weights[], double xcoord, double ycoord);
void run_scoring_engine(double weights[]);

#endif
