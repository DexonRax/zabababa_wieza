// zabababa.h
class Zabababa {

private:
    int frogs;
    int max_frogs;
    int* frogs_table;

public:
    Zabababa();
    ~Zabababa();
    void addFrog(int);
    void showFrogs();
    void takeTopFrog();
    void showFrogGraph();
};
