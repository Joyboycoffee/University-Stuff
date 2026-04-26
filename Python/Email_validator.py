# Email Validator - Sort Valid Emails from Distorted List
# Simple program to filter valid emails

import re

print("=" * 50)
print("Email Validator - Filter Valid Emails")
print("=" * 50)

email_list = [
    "john@example.com",
    "jane.doe@gmail.com",
    "invalid.email",
    "test@@example.com",
    "user@domain",
    "alice@company.co.uk",
    "no-email@",
    "bob_smith@yahoo.com",
    "@notvalid.com",
    "perfect@mail.org",
    "spaces in@email.com",
    "another.valid@test.com",
    "missing@domain",
    "user123@test.io"
]

print("\nOriginal Email List:")
print("-" * 50)
for i, email in enumerate(email_list, 1):
    print(f"{i}. {email}")

# Simple email validation pattern
# Must have: something @ something . something
email_pattern = r'^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$'

# Filter valid emails using list comprehension
valid_emails = [email for email in email_list if re.match(email_pattern, email)]

print("\n" + "=" * 50)
print("Valid Emails Found:")
print("-" * 50)
for i, email in enumerate(valid_emails, 1):
    print(f"{i}. {email}")

print(f"\nTotal valid emails: {len(valid_emails)} out of {len(email_list)}")

# Save valid emails to a new list and display
print("\n" + "=" * 50)
print("Sorted Valid Emails (Alphabetically):")
print("-" * 50)
sorted_valid_emails = sorted(valid_emails)
for i, email in enumerate(sorted_valid_emails, 1):
    print(f"{i}. {email}")
