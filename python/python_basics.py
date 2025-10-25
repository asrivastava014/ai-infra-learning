#!/usr/bin/env python3
from typing import Sequence, Iterable, Union
import array
import numpy as np
import numpy.typing as npt

NumericSeq = Union[Sequence[int], array.array, npt.NDArray[np.integer]]

# Data
my_list: list[int] = [2, 4, 6, 8, 10]
my_array: array.array = array.array('i', my_list)
my_numpy_array: np.ndarray = np.array(my_list, dtype=np.int64)

def print_elements(xs: Iterable[int]) -> None:
    for x in xs:
        print(x)

def add_elements(xs: NumericSeq) -> int:
    if isinstance(xs, np.ndarray):
        # fast path for NumPy
        return int(np.sum(xs))
    # generic path for list/array/other sequences
    total = 0
    for x in xs:
        total += int(x)
    return total

if __name__ == "__main__":
    print_elements(my_list)
    print_elements(my_array)
    print_elements(my_numpy_array)

    print("Sum of elements in list:", add_elements(my_list))
    print("Sum of elements in array:", add_elements(my_array))
    print("Sum of elements in numpy array:", add_elements(my_numpy_array))

    print("Python Ready")
