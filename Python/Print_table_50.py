# Print Multiplication Table till 50
# Simple program to print a multiplication table
print ("{Gourav}, Date: {25-04-2026")

number = int(input("Enter a number to print its table: "))
limit = 50

print(f"\nMultiplication Table of {number} (till {limit}):\n")

for i in range(1, limit + 1):
    result = number * i
    print(f"{number} x {i} = {result}")

print("\n--- End of Table ---")
