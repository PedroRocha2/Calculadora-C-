class Caclculadora 
{
    public:
        double Calcular(double x, char operador, double y);
};

double Caclculadora::Calcular(double x, char oper, double y)
{
    switch(oper)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0.0;
    }
};