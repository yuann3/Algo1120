#include "int_cell.h"

int_cell::int_cell(int cell_value)
{
    value = new int(cell_value);
}

int_cell::~int_cell()
{
    delete value;
}

int int_cell::get_value() const
{
    return *value;
}

void int_cell::set_value(int x)
{
    *value = x;
}

int_cell operator+(int_cell &lhs, int_cell &rhs)
{
    int value = lhs.get_value() + rhs.get_value();
    int_cell ic(value);

    return ic;
}

std::ostream& operator<<(std::ostream &os, int_cell &cell)
{
    os << "Cell(" << cell.get_value() << ")";

    return os;
}
