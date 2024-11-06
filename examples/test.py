import numpy
from ctypesexample.summing import csum, add, ordenar
import time

array = numpy.arange(0, 100000000, 1, numpy.int32)
size = len(array)

start = time.time()
# array_sum = csum(len(array), array)
array_ordenado = ordenar(size,array)
end = time.time()
print("Time: " + str(end-start))

print("Sorted: ", end="")
print(array_ordenado)


start = time.time()
array.sort()
end = time.time()
print("Time: " + str(end-start))

print("Sorted: ", end="")
print(array)


a = [1.2, 2.0, 4.0]
b = [2.0, 3.2, 3.2]
print(add(a, b))
