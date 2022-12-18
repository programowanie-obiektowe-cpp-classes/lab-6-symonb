#pragma once
#include "Human.hpp"
#include <iostream>

#include "make_random_vector.hpp"
#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());
    int                 counter = 0;
    std::for_each(people.begin(), people.end(), [&](Human& per) {
        per.birthday();
        retval[retval.size() - counter - 1] = per.isMonster() ? 'n' : 'y';
        counter++;
    });

    return retval;
}