#include <ostream>

class int_cell
{
public:
    int_cell(int cell_value = 0);

    ~int_cell();

    int get_value() const;

    void set_value(int x);


private:
    int *value;
};

int_cell operator +(int_cell& lhs, int_cell& rhs);    
std::ostream& operator << (std::ostream& os, int_cell& cell);