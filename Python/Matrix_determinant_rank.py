# Create Matrices and Find Determinant and Rank
# Simple program using lists and basic math (no external libraries)

import numpy as np

print("=" * 50)
print("Matrix Operations: Determinant and Rank")
print("=" * 50)

# Example Matrix 1: 2x2 Matrix
print("\nMatrix 1 (2x2):")
matrix1 = [[4, 7], 
           [2, 6]]

print("Matrix:")
for row in matrix1:
    print(row)

# Convert to numpy array for calculations
m1_np = np.array(matrix1)

# Calculate determinant
det1 = np.linalg.det(m1_np)
print(f"Determinant: {det1:.2f}")

# Calculate rank
rank1 = np.linalg.matrix_rank(m1_np)
print(f"Rank: {rank1}")

# Example Matrix 2: 3x3 Matrix
print("\n" + "-" * 50)
print("\nMatrix 2 (3x3):")
matrix2 = [[1, 2, 3],
           [4, 5, 6],
           [7, 8, 9]]

print("Matrix:")
for row in matrix2:
    print(row)

m2_np = np.array(matrix2)

# Calculate determinant
det2 = np.linalg.det(m2_np)
print(f"Determinant: {det2:.2f}")

# Calculate rank
rank2 = np.linalg.matrix_rank(m2_np)
print(f"Rank: {rank2}")

# Example Matrix 3: Another 3x3 Matrix
print("\n" + "-" * 50)
print("\nMatrix 3 (3x3):")
matrix3 = [[2, 4, 6],
           [1, 3, 5],
           [7, 8, 9]]

print("Matrix:")
for row in matrix3:
    print(row)

m3_np = np.array(matrix3)

# Calculate determinant
det3 = np.linalg.det(m3_np)
print(f"Determinant: {det3:.2f}")

# Calculate rank
rank3 = np.linalg.matrix_rank(m3_np)
print(f"Rank: {rank3}")

print("\n" + "=" * 50)
