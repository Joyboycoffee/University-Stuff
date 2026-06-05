# Even or Odd using List Comprehension
# Simple program to identify even and odd numbers from 1 to 50
print ("{Gourav}, Date: {25-04-2026")*
numbers = list(range(1, 51))

# Using list comprehension to get even numbers
even_numbers = [num for num in numbers if num % 2 == 0]

# Using list comprehension to get odd numbers
odd_numbers = [num for num in numbers if num % 2 != 0]

print("Numbers from 1 to 50:")
print("Even Numbers:", even_numbers)
print("\nOdd Numbers:", odd_numbers)

# Bonus: Count them
print(f"\nTotal even numbers: {len(even_numbers)}")
print(f"Total odd numbers: {len(odd_numbers)}")
