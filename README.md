# Base Converter in C

This project is a **Base Converter** implemented in the C programming language. It allows users to convert numbers between various bases, including binary (base 2), octal (base 8), decimal (base 10), and hexadecimal (base 16).

---

## Features

- Convert numbers **from any base** (2, 8, 10, or 16) **to any other base** (2, 8, 10, or 16).
- Handles invalid inputs gracefully with error messages.
- Allows repeated conversions in a single session.
- Simple, beginner-friendly implementation with minimal external libraries.

---

## Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/base-converter.git
   cd base-converter
   ```

2. Compile the program:
   ```bash
   gcc base_converter.c -o base_converter -lm
   ```

3. Run the executable:
   ```bash
   ./base_converter
   ```

---

## Program Flow

1. **Input Selection**: The program prompts the user to select the source base (2, 8, 10, or 16).
2. **Target Base Selection**: The user selects the base to convert to.
3. **Number Input**: The program asks for the number in the selected source base.
4. **Conversion**: The program performs the base conversion and displays the result.
5. **Repeat Option**: The user can choose to perform another conversion or exit.

---

## Example Output

```plaintext
Enter the base you want to convert from (2, 8, 10, 16): 10
Enter the base you want to convert to (2, 8, 10, 16): 2
Enter the number in base 10: 45
The number in base 2 is: 101101

If you want to convert another number, type 'yes'. Otherwise, type 'no': no
Thank you for using our program, we hope you enjoyed it!
```

---

## Code Details

### Functions

- **`X_todecimal(int n, int base)`**: Converts a number from the given base to decimal.
- **`decimal_toX(int f, int b)`**: Converts a decimal number to the specified base.
- **`main()`**: Handles input, output, and program flow.

### Libraries Used
- `<stdio.h>`: For input and output.
- `<math.h>`: For mathematical calculations (e.g., `pow()`).
- `<string.h>`: For string comparison (e.g., `strcmp()`).

---

## Contribution

Feel free to fork the repository and submit pull requests for improvements or additional features. Contributions are always welcome!

---

## License

This project is licensed under the [MIT License](LICENSE).

---

## Author

- **Your Name**
- Student at [Your University Name]
- [Your Contact Info or GitHub Profile](https://github.com/your-username)

---

### Notes

- Ensure the input number matches the chosen source base. For example, entering `12` for base 2 will result in an error.
- The project is for educational purposes and may not handle very large numbers or advanced edge cases.
