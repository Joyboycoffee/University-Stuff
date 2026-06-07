# Lambda Function to check if a number is a perfect square.

is_perfect_square = lambda n: n >= 0 and int(n**0.5) ** 2 == n

try:
    user_input = int(input("Enter an integer: "))

    if is_perfect_square(user_input):
        print(f"{user_input} is a perfect square.")
    else:
        print(f"{user_input} is not a perfect square.")

except ValueError:
    print("Invalid input. Please enter a valid integer.")