// ranges_pipeline.cpp
#include <algorithm>
#include <iostream>
#include <list>
#include <ranges>
#include <string>
#include <vector>

template <std::ranges::input_range R>
void print(R&& range) {
    // Forwarding range & elements avoids const-qualification problems with views
    for (auto&& elem : range) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
}

#ifndef UNIT_LIB_BUILD
int main() {
    // ---- strings ----
    std::vector<std::string> words{"India", "China", "Nepal", "BhutAn", "Russia"};

    std::cout << "Original words: ";
    print(words);

    // std::ranges::sort requires a random-access range (vector ok, list not ok)
    std::ranges::sort(words);
    std::cout << "Sorted words:   ";
    print(words);

    // A string is a range of char; this sorts characters of the first word:
    // (leave commented out if not desired)
    // std::ranges::sort(words[0]);
    // print(words[0]);

    // ---- ints (vector) ----
    std::vector<int> ints{5, 3, 8, 1, 4};

    std::cout << "Original ints:  ";
    print(ints);

    std::ranges::sort(ints);
    std::cout << "Sorted ints:    ";
    print(ints);

    // Compose views: filter evens, then multiply by 2
    auto even_times2 =
        ints
        | std::views::filter([](int n) { return n % 2 == 0; })
        | std::views::transform([](int n) { return n * 2; });

    std::cout << "Evens*2:        ";
    print(even_times2);

    // ---- list demo (no sort with ranges; list has bidirectional iterators) ----
    std::list<int> lst{7, 6, 5, 4, 3, 2, 1};
    std::cout << "List original:  ";
    print(lst);

    // list::sort() is fine; ranges::sort(lst) would be ill-formed
    lst.sort();
    std::cout << "List sorted:    ";
    print(lst);

    auto lst_odd_plus1 =
        lst
        | std::views::filter([](int n) { return n % 2 != 0; })
        | std::views::transform([](int n) { return n + 1; });

    std::cout << "Odd+1 (list):   ";
    print(lst_odd_plus1);

    return 0;
}
#endif
