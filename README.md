# Printf

<p align="center">
  <img src="https://user-images.githubusercontent.com/94384240/170163573-2e001946-86f1-406b-9959-b0c39a007c0b.jpeg" alt="42 School Logo" width="300">
</p>

## 🏛 42 Cursus - Printf

This was the second project I completed at 42 Lisbon. The goal was to recreate the behavior of the **printf** function.

Since we are not allowed to use the real **printf** during the Cursus, implementing this function is a great way to add it to our library and gain a deeper understanding of how it works!

📜 To see the project subject, [click here](https://github.com/jlebre/printf/blob/main/ft_printf.pdf)!

---

## 🚀 Implemented Functions

| Function | Description |
|----------|------------|
| [ft_printf](https://github.com/jlebre/printf/blob/main/ft_printf.c) | Main function that mimics printf |
| [Extra Functions](https://github.com/jlebre/printf/blob/main/func_extra.c) | Helper functions for formatting |
| [Extra Functions 1](https://github.com/jlebre/printf/blob/main/func_extra1.c) | Additional helper functions |

🔗 To see the full implementation, check the [source code](https://github.com/jlebre/printf).

---

## 📂 Important Files

🔹 To see the `.h` file, [click here](https://github.com/jlebre/printf/blob/main/ft_printf.h).

🔹 To see the `Makefile`, [click here](https://github.com/jlebre/printf/blob/main/Makefile).

---

## ✅ Testing

This project passed Moulinette and the following testers:

- [printfTester](https://github.com/Tripouille/printfTester)

![100](https://user-images.githubusercontent.com/94384240/170165431-9908395e-0389-4a13-a0cc-2593a32a0939.png)

---

## 🛠 How to Use

To compile and use the library:

```bash
make
```

To use the function in your project, include `ft_printf.h` and link the library when compiling:

```bash
gcc -Wall -Wextra -Werror main.c -L. -lftprintf -o program
```

📌 **Project completed at 42 Lisbon!**
