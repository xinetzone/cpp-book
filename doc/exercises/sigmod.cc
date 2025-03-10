double x = 2.302585093;
double y;

y = exp(x);

double sigmoid(double x) {
    return 1/(1+exp(-x));
}

sigmoid(1)