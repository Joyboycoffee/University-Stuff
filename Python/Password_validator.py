# Password Validator - Check Strength and Suggest Improvements
# Simple program to validate password requirements
print ("{Gourav}, Date: {25-04-2026")

print("=" * 55)
print("Password Validator")
print("=" * 55)

def validate_password(password):
    """
    Check password strength and suggest improvements
    """
    issues = []
    
    # Check length
    if len(password) < 8:
        issues.append("- Password should be at least 8 characters long")
    
    # Check for uppercase letters
    if not any(char.isupper() for char in password):
        issues.append("- Add uppercase letters (A-Z)")
    
    # Check for lowercase letters
    if not any(char.islower() for char in password):
        issues.append("- Add lowercase letters (a-z)")
    
    # Check for numbers/digits
    if not any(char.isdigit() for char in password):
        issues.append("- Add numbers (0-9)")
    
    # Check for special characters
    special_chars = "!@#$%^&*()-_=+[]{}|;:,.<>?"
    if not any(char in special_chars for char in password):
        issues.append("- Add special characters (!@#$%^&* etc)")
    
    return issues

# Main program
print("\nEnter passwords to validate (type 'quit' to exit):\n")

while True:
    password = input("Enter password: ")
    
    if password.lower() == 'quit':
        print("\nThank you for using Password Validator!")
        break
    
    if not password:
        print("Password cannot be empty. Please try again.\n")
        continue
    
    print(f"\nPassword: {password}")
    print(f"Length: {len(password)} characters")
    
    issues = validate_password(password)
    
    if not issues:
        print("Password is STRONG! All requirements met.")
    else:
        print("✗ Password needs improvement:")
        for issue in issues:
            print(f"  {issue}")
    
    print()  # Blank line for readability
