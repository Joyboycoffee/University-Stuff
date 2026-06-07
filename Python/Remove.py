# Program to remove letters from a string

name = input("Enter the sentence/name: ")

letter = input("Enter the letter to remove: ")

first_removed = name.replace(letter, "", 1)

all_removed = name.replace(letter, "")

print(f"In Original : {name}")

print(f"After removing first occurrence: {first_removed}")

print(f"After removing all occurrences: {all_removed}")