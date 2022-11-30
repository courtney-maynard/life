#include <stdio.h>
#include <stdlib.h>
#include "perceptron.h"

int main(int argc, char *argv[])
{
    char *fname = argv[1];

    // Building
    Data data = new_Data(fname);

    Model model = new_Model(data);

    // Training
    fit_model(model, data);

    // Testing
    // TODO

    // Scoring
    run_scoring_engine(model);

    free(model);
    free(data);
    return 0;
}
                                                                                                                           23,16         All
