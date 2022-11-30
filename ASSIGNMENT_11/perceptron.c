#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "perceptron.h"

struct shape {
        int num_examples;
        int num_features;
        int dimensionality;
};

struct coords{
        double xcoord;
        double ycoord;
        int target;
};

struct data {

    double **elements;

    int *targets;

    struct coords Coordinates;

    struct shape shapeStructure;

};

struct model {

    double *weights;

    struct shape shapeStructure;

};

Data new_Data(const char *fname)
{

    FILE *fp;

    int num_of_lines = 0;
    char charcount;
    if ((fp = fopen(fname, "r")) == NULL)  {
        fprintf(stderr, "load_data: can't open %s\n", fname);
        exit(1);
    }


    for (charcount = getc(fp); charcount != EOF; charcount = getc(fp)){
            if (charcount  == '\n'){
                    num_of_lines++;
                                }
    }

    Data data = (Data) malloc(sizeof(struct data));
    data->shapeStructure.num_examples = num_of_lines;

    //scan in the number of columns from the file, scan until you see a space and count, scan until you see a new line
    //this number is the number of features
    rewind(fp);
    int num_of_columns = 0;
    for (charcount = getc(fp); charcount != EOF; charcount = getc(fp)){
            if (charcount == ' '){
                    num_of_columns++;
            }

            if (charcount == '\n'){
                    break;
            }
    }

    data->shapeStructure.num_features = num_of_columns;

    data->elements = (double**) malloc((data->shapeStructure.num_features+1) * sizeof(double*));

    for (int z = 0; z < (data->shapeStructure.num_features+1); z++){
            data->elements[z] = (double*) malloc(num_of_lines * sizeof(double));
    }

    data->targets = (int*) malloc(num_of_lines * sizeof(int));

    rewind(fp);

    int i = 0;
	double temptarget = 0;

    while (fscanf(fp, "%lf %lf %lf", &(data->elements[0][i]), &(data->elements[1][i]),&(temptarget)) != EOF){
            data->targets[i] = (int)temptarget;
            i++;
    }

    fclose(fp);
    fprintf(stdout, "loaded %d examples\n", i);
}

Model new_Model(const Data data)
{

    Model model = (Model) malloc(sizeof(Model));
    model->shapeStructure.num_examples = data->shapeStructure.num_examples;
    model->weights = (double*) malloc(model->shapeStructure.dimensionality * sizeof(double));


    model->shapeStructure.dimensionality = (model->shapeStructure.num_features + 1);

    int dimension = model->shapeStructure.dimensionality;

    for (int i = 0; i < dimension; i++){
            model->weights[i] = (double) rand() / RAND_MAX;
    }

    fprintf(stdout, "testing that the model was built");
    return model;
}

static void sgd(Model model, Data data)
{

    model->weights[2] += data->Coordinates.target * data->Coordinates.xcoord;
    model->weights[1] += data->Coordinates.target * data->Coordinates.ycoord;
    //weights[0] = weights[0];
    model->weights[0] += data->Coordinates.target * 1;
}

static int predict(Model model, Data data)
{
    double hypothesis = model->weights[2] * data->Coordinates.xcoord + model->weights[1] * data->Coordinates.ycoord + model->weights[0];
    return (hypothesis < 0) ? -1 : 1;
}
void fit_model(Model model, Data data)
{
    double hypothesis;

    bool misclassified = true;
    while (misclassified) {
        misclassified = false;
        for (int i = 0; i < data->shapeStructure.num_examples; i++) {
            data->Coordinates.xcoord=data->elements[0][i];
            data->Coordinates.ycoord=data->elements[1][i];
            data->Coordinates.target=data->targets[i];

            hypothesis = predict(model, data);

            if ((hypothesis > 0 && data->Coordinates.target > 0) || (hypothesis < 0 && data->Coordinates.target < 0)) // TODO Handle 0
                continue;
            sgd(model, data);  // Update weights using misclassified point
            misclassified = true;
        }
    }
}

void run_scoring_engine(const Model model)
{
    Data data = (Data) malloc(sizeof(Data));

    printf("Enter x: \n");
    scanf("%lf", &(data->Coordinates.xcoord));

    printf("Enter y: \n");
    scanf("%lf", &(data->Coordinates.ycoord));

    printf("Prediction = %d\n", predict(model, data));
}
                                                                                                                                                 167,1         Bot

                                                                                                                 1,20          Top
