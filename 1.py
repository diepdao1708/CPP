import math as mt
import numpy as np


A = np.array([[1, 2, 2, 2], [0, 4, 3, 4], [0, 0, 1, 3], [0, 0, 0, 4]])
w, v = np.linalg.eig(A)
print("Eigenvalues: \n", w)  # trị riêng